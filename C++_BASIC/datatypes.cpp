#include <iostream>
using namespace std;
int main() {

    int a; //declearation
    a=10;//initialization
    cout<< "size of int = " << sizeof(a) << endl;

    float b = 10.5;
    cout<< "size of float = " << sizeof(b) << endl;

    double c = 10.99490;
    cout<< "size of double = " << sizeof(c) << endl;

    char ch = 'a';
    cout<< "size of char = " << sizeof(ch) << endl;

    bool  ok = true;
    cout<< "size of boolean = " << sizeof(ok) << endl;

    short int si;
    long int li;

    cout<< "size of short int = " << sizeof(si) << endl;
    cout<< "size of long int = " << sizeof(li) << endl;


    return 0;
}