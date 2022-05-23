#include <iostream>
#include "utils.h"
#include <string.h>

using namespace std;
    
int main(int argc, char **args) {

    string text = "klfjklsdjfkjsdfklsdjfdfjsdkfsdkl klsdnflnsdkl fnsdknfsdkfklsndkflnsdklfnskld nksdfnkls dfnsklsdjfkjsdkasldjaskldjlaksdjdsaldkasldka;lskd;asdlasdk;askdklasjdklajsdklasjdklasjdklasjdasjkldjls";
    string pass = "this is a string";
    string encrypted = myEncrypt(text, pass);
    string decrypted = myDecrypt(encrypted, pass);

    cout << "Cipher: " << endl << encrypted << endl;
    cout << "Decrypted cipher: " << endl <<  decrypted << endl;

    return EXIT_SUCCESS;
}
