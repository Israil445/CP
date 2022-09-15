#include <iostream>
using namespace std;
int main () {

    //Arithmetic operators binary(+,-,/,*,%)
    cout<< 10%6<<endl;

    //Arithmetic operators unary(++,--)
    int i=10;
    cout << ++i<<" " << --i<<" " << i++ <<" " << i--<<" " <<endl;

   //relational operators(== , != ,>,<,>=.<=)
   int a=10;
   int b=10;
   if(a == b){
    cout <<"Equal"<<endl;
   }
   else{
    cout << "Not equal"<<endl;
   }


   //logical operators (&& ,||,!)

   bool c = true;
   bool d =false;

   if(c && d){
    cout << "Both are True"<<endl;
   }
   if(!d){
    cout << "d is false statement"<<endl;
   }

   if(c || d){
    cout << "both/one statement can be  true"<<endl;
   }



   //bitwise operators (&,|,~,^,>>,<<)

   int m=26;
   int n=14;

   cout<< (m&n) <<endl;// m&n and operation
   cout<< (m|n) <<endl;//m&n or operation
   cout<<(~m)<<endl;//complement of m
   cout<<(4<<1)<<endl;//4 left shift 1 => 8
   cout<<(4>>1)<<endl;//4 right shift 1 => 2
/*

left shift (<<)
m<<n = (m * (2^n));

right shift (>>)
m>>n = (m / (2^n));
*/

//assignment operator(=, +=, -=, *= ,/=)
int y= 10;
y+=20;
cout <<y <<endl;

//ternary operators

int ans = 10 > 5 ? 1:0;
cout << ans <<endl;

/*
syntax of ternary operators
--------------------------
condition ? x:y;
---------------------------
if condition is true then go to x else go to y;

*/



    return 0;
}