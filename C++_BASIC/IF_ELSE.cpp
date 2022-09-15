#include <iostream>
using namespace std;
int main () {

    int a; cin >> a;
    int b; cin>> b;

    if(a == b) {
        cout << "a and b are equals"<<endl;
    }

    else if (a>b) {
        cout << " a is greater than b"<<endl;
    }

    else {
        cout << "b is greater than a" << endl;
    }


    return 0;
}