#include <iostream>
using namespace std;
int main () {

   for (int i=0 ;i<20;i++){

    if(i == 10) break;
    cout << i <<" ";
    

   }cout <<endl;


    for (int i=0 ;i<20;i++){

    
    if(i%2 == 0) continue;
    cout << i <<" ";

   }cout <<endl;






   

    return 0;
}