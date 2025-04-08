# Privacy-Centric OS

A modified version of Tails OS focused on user privacy and data security.

## Features

- **Custom Encryption Algorithm**  
  A basic file encryption and decryption system implemented in C (`my_encryption.c` and `my_encryption.h`).

- **User-Controlled Firewall**  
  `iptables` rules configured manually by the user to allow or block connections.

- **Hardened Firefox Browser**  
  Firefox manually installed with a hardened `user.js` profile for increased privacy.

## Project Flow

- Downloaded and flashed Tails OS to USB using BalenaEtcher  
- Set up Persistent Storage for saving configurations  
- Booted into Tails OS and accessed the root shell  
- Installed dependencies and configured build environment  
- Cloned Tails source code using Git  
- Wrote and tested a basic C-based encryption algorithm  
- Configured user-controlled `iptables` firewall rules  
- Installed and hardened Firefox browser in `amnesia` user session  
- Verified hardened settings with `user.js` profile  
- Final files organized in `tails/` directory for GitHub upload

## Project Info

- **Course:** Operating Systems Project Evaluation  
- **Student:** [Your Name]

## Resources

- Tails OS Documentation  
- GitHub Repository: https://github.com/austin987/tails  
- Additional tools: BalenaEtcher, GCC, iptables, Firefox
