# C++ AES Encrypt/Decrypt

AES Encrypt/Decrypt library is library with which you can encrypt/decrypt strings in C++. 
The usage is very basic, you only need to provide the string you want to encrypt, and you'll get the cipher back encoded in base64 given that you provided a password, or a secret string. 
Also you can do the opposite, which is decrypting the cipher, given that you have the password with wich you have encrypted the latter string. 

## Usage example
```cpp
#include <iostream>
#include "utils.h"
#include <string.h>

using namespace std;
    
int main(int argc, char **args) {

    string text = "The string we want to encrypt.";
    string pass = "This must be secret";
    string encrypted = myEncrypt(text, pass);
    string decrypted = myDecrypt(encrypted, pass);

    cout << "Cipher: " << endl << encrypted << endl;
    cout << "Decrypted cipher: " << endl <<  decrypted << endl;

    return EXIT_SUCCESS;
}
```
So as you can see we've used two essential function in the code above: ```myEncrypt(text, pass)``` and ```myDecrypt(text, pass)```, and they are self explanatory.

This code is based on OpenSSL crypto library.