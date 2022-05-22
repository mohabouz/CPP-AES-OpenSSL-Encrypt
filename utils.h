#include <iostream>

using namespace std;

int encrypt(unsigned char *plaintext, 
            int plaintext_len, 
            unsigned char *key,
            unsigned char *iv, 
            unsigned char *ciphertext);

int decrypt(unsigned char *ciphertext,
            int ciphertext_len, 
            unsigned char *key,
            unsigned char *iv, 
            unsigned char *plaintext);

void handleErrors();

void sha256_string(const char *string, char outputBuffer[65]);

string myEncrypt(string plainText, string pass);