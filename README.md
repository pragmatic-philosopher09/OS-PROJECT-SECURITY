# OS-SECURITY-PROJECT

 This is a college project for enhancing the security of our Operating System. It makes use of HMAC-SHA1 technique to generate a HOTP which will consequently generate the TOTP
 as TOTP = HOTP(K,T),  where T is an integer and represents the number of time steps between the initial counter time T0 and the current Unix time.
