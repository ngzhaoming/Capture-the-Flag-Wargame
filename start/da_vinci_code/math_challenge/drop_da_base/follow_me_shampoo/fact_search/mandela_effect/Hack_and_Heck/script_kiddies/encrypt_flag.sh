#!/bin/sh

# Generate a key
# This means that it generates a 5 "random" lower case character as the AES key
# BUT IN THIS ASSIGNMENT EVERYONE HAS THE SAME AES KEY
AES_KEY=`tr -cd '[:lower:]' < /dev/urandom | head -c 5`

# Print the plaintext
# grep is general regular expression (REGEX) something that is very useful [learnt it during CS2030]
# This means that the plaintext (flag.txt) is guaranteed to have "flag{" in the text
cat flag.txt | grep "flag{"

# Print the key
# Print out the AES key on the terminal screen
echo "Encryption key: $AES_KEY"

# Encrypt flag.txt using AES-128 in ECB mode and output ciphertext in Base64 to flag.txt.enc
openssl enc -aes-128-ecb -nosalt -base64 -pass pass:$AES_KEY -in flag.txt -out flag.txt.enc -md sha256

# Remove plaintext flag
rm flag.txt
