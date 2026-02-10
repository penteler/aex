gpg --full-generate-key
gpg (GnuPG) 2.4.4-unknown; Copyright (C) 2024 g10 Code GmbH
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

Please select what kind of key you want:
   (1) RSA and RSA
   (2) DSA and Elgamal
   (3) DSA (sign only)
   (4) RSA (sign only)
   (9) ECC (sign and encrypt) *default*
  (10) ECC (sign only)
  (14) Existing key from card
Your selection? 1
RSA keys may be between 1024 and 4096 bits long.
What keysize do you want? (3072) 1024
Requested keysize is 1024 bits
Please specify how long the key should be valid.
         0 = key does not expire
      <n>  = key expires in n days
      <n>w = key expires in n weeks
      <n>m = key expires in n months
      <n>y = key expires in n years
Key is valid for? (0) 1w
Key expires at Tue Feb 17 00:04:37 2026 IST
Is this correct? (y/N) y

GnuPG needs to construct a user ID to identify your key.

Real name: name
Email address: name@domain.ish
Comment: today
You selected this USER-ID:
    "name (today) <name@domain.ish>"

Change (N)ame, (C)omment, (E)mail or (O)kay/(Q)uit? o
We need to generate a lot of random bytes. It is a good idea to perform
some other action (type on the keyboard, move the mouse, utilize the
disks) during the prime generation; this gives the random number
generator a better chance to gain enough entropy.
We need to generate a lot of random bytes. It is a good idea to perform
some other action (type on the keyboard, move the mouse, utilize the
disks) during the prime generation; this gives the random number
generator a better chance to gain enough entropy.
gpg: /c/Users/surin/.gnupg/trustdb.gpg: trustdb created
gpg: directory '/c/Users/surin/.gnupg/openpgp-revocs.d' created
gpg: revocation certificate stored as '/c/Users/surin/.gnupg/openpgp-revocs.d/146B357FB75051550499B18712475C458EE55AE1.rev'
public and secret key created and signed.

pub   rsa1024 2026-02-09 [SC] [expires: 2026-02-16]
      146B357FB75051550499B18712475C458EE55AE1
uid                      name (today) <name@domain.ish>
sub   rsa1024 2026-02-09 [E] [expires: 2026-02-16]


