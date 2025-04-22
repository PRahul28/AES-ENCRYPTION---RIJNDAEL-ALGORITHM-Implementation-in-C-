
# AES ENCRYPTION - RIJNDAEL ALGORITHM Implementation in C++

Overview

I have written it from scratch rather than using openssl or any other libraries to understand the inner mechanics of the RIJNDAEL algorithm. AES supports three key sizes(128‑bits, 192-bits, and 256‑bits) but this project covers:

    AES‑128 and AES‑256 




## Features

- There are 3 files AES128.cpp, AES256.cpp and cipher.cpp

- AES128 or AES256 - ENCRYPTION Part(1)
Replace the written text directly with the desired text to be encrypted. Instead of manually inserting each character one by one into a character array.(requiring a For loop)

The output would be the encrypted text which you can copy/paste to save in a file.

- cipher.cpp 
Whatever encrypted text that you will get from running the AES128.cpp or AES256.cpp will be the representation of decimal in hexadecimal form. 
(ex: B6 45 has to be coverted into 0xB6, 0x45) 

- AES128 or AES256 - DECRYPTION Part(2)
Replace the text of char cipher[] array with the output from the cipher.cpp as again it is the best option rather than running a for loop
(ex: 0xB6, 0x45...)


## Input/Output


- AES128.cpp
- Output:
- Choose an option: 
- (1) Encrypt
- (2) Decrypt
- Enter your choice: 1
- Encrypted message in hex:
- B6 4B 27 BB 16 15 A6 F5 32 18 6C C5 FA 94 B5 5E
- D5 7B D5 42 BA 0F 68 50 CD FD 59 B8 EB 0E 83 D1
- Enter your choice: 2
- Decrypted message:
- This is a message we will encrypt with AES!

- --
- --
- --
- --
- --

- AES256.cpp
- Output:
- Choose an option: 
- (1) Encrypt
- (2) Decrypt
- Enter your choice: 1
- Encrypted message in hex:
- Encrypted hex:
- 75 6B DD 52 E4 18 36 0D 2D A6 90 64 98 61 59 79
- 38 7F 69 56 41 CE 2D 9F B6 AC 26 22 75 64 6D 6E
- AC C0 C3 F2 AF 12 AA 82 4E E3 0A 55 54 B9 4D D2
- Enter your choice: 2
- Decrypted message:
- This is a message we will encrypt with AES-256!
## Installation

Simply copy the code into your IDE

```bash
  g++ AES128.cpp OR g++ AES256.cpp
  ./a.exe
```
    
## FAQ

#### 1.) Padding Scheme used and does have to be implemented manually?

- Ans.) No, padding will not be have to implemented manually and simple padding scheme 0x00 hex added at the end depending on the requirement itself by the code.

#### 2.) Which mode is used like ECB, CBC, CTR or GCM?

- Ans.) ECB Mode is used which Electronic Codebook Mode where the plain text is divided into blocks and encrypted independently using the original key which than would be expanded into different key for each and every round.


## Security

Key‑Recovery Attacks on Full AES
The first practical key‑recovery attacks against full AES were published in 2011 by Andrey Bogdanov, Dmitry Khovratovich, and Christian Rechberger. Their biclique attack reduced the complexity of breaking AES‑128 from 2^128 down to about 2^126.2 operations, for AES‑192 and AES‑256 it required roughly 2^190.2 and 2^254.6 operations, respectively. Although these numbers technically outperform brute‑force, the improvement is minor—shaving only 1.8 bits off the key exponent.

A subsequent paper in 2015 by Biaoshuai Tao and Hongjun Wu further optimized the biclique approach to 2^126.0 for AES‑128, 2^189.9 for AES‑192 and 2^254.3 for AES‑256. Their work also reduced the storage requirement from an estimated 2^88 bits (about 38 trillion TB—roughly the total data stored on all computers worldwide in 2016) down to 2^56 bits (≈ 9007 TB). Even at these revised figures, the resources needed remain astronomically impractical.

NSA Research into Tau‑Statistic Attacks
Leaked documents from the Snowden archives indicate that NSA researchers have explored whether a tau‑statistic–based cryptanalytic method might yield further AES vulnerabilities. To date, no concrete attack leveraging this technique has been made public.

Side‑Channel Exploits
While no black‑box break of AES is known, real‑world implementations can leak secrets through side channels. In March 2016, Ashokkumar, Giri, and Menezes demonstrated a power‑analysis attack capable of recovering a full 128‑bit AES key using only 6–7 plaintext/ciphertext pairs, standard (user‑level) privileges, and under one minute of computation—vastly more efficient than earlier side‑channel assaults requiring hundreds to millions of encryptions.

Mitigations in Modern Hardware
To defend against timing and power side‑channel attacks, most contemporary CPUs now include dedicated AES instructions (AES‑NI). By executing all encryption rounds in constant time and without data‑dependent control flow, AES‑NI effectively neutralizes timing variations that classical side‑channel methods exploit.
## Extra

- Some Important links for reference

- For dec to hex table: https://condor.depaul.edu/sjost/hci201/documents/hexdec.htm

- https://en.wikipedia.org/wiki/Advanced_Encryption_Standard

- https://braincoke.fr/blog/2020/08/the-aes-decryption-algorithm-explained/#the-inverse-cipher

- Look-UP Tables - https://en.wikipedia.org/wiki/Rijndael_MixColumns

- https://cryptography.fandom.com/wiki/Rijndael_key_schedule

- https://en.wikipedia.org/wiki/AES_key_schedule

- https://en.wikipedia.org/wiki/Rijndael_S-box

## Related

Here are some related projects

[matt-wu / AES](https://github.com/matt-wu/AES)

[C++ AES Encryption Class using OpenSSL](https://codereview.stackexchange.com/questions/270139/c-aes-encryption-class)

