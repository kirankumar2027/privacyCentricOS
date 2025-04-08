#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char *input, char *output, int key) {
    FILE *in = fopen(input, "rb");
    FILE *out = fopen(output, "wb");
    if (!in || !out) {
        perror("File error");
        exit(1);
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(ch ^ key, out);
    }

    fclose(in);
    fclose(out);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <encrypt|decrypt> <inputfile> <outputfile>\n", argv[0]);
        return 1;
    }

    int key = 123;
    encrypt(argv[2], argv[3], key);
    printf("Operation %s completed.\n", argv[1]);
    return 0;
}
