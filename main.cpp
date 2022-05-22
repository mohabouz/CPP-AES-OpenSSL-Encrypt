#include <iostream>
#include "utils.h"

using namespace std;
    
int main(int argc, char **args) {

    string text = "test";
    string pass = "this is a string";
    string encrypted = myEncrypt(text, pass);

    cout << encrypted << endl;

    return EXIT_SUCCESS;
}
