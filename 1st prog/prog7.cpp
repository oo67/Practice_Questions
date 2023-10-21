#include<iostream>
#include<iomanip>
using namespace std;

int main(){

// here the value will be changed to new one .

    // int a=8;
    // cout<<"The value of a is "<<a;
    // a=23;
    // cout<<"The value of a is "<<a;

//constants in c++ (const)
// but here after declaration of const it will not change the value .

    // const int b = 2;
    // cout<<"The value of a is "<<b;
    // b=3;
    // cout<<"The value of a is "<<b;



//Manipulators are operators controls the data display .eg: endl.
// iomanip have the other manipulator which is setw which helps in setting of field width.
    // int a = 3 , b = 78, c = 1233;
    // cout<<"The value of a without setw is : "<<a<<endl;
    // cout<<"The value of b without setw is : "<<b<<endl;
    // cout<<"The value of c without setw is : "<<c<<endl;                         //multi-cursor ---> ctrl+d   ,  ctrl+shift+L   ,ctrl+alt+arrows 

    // cout<<"The value of a with setw is : "<<setw(4)<<a<<endl;
    // cout<<"The value of a with setw is : "<<setw(4)<<b<<endl;
    // cout<<"The value of a with setw is : "<<setw(4)<<c<<endl;
 
// Operators Precedence

    int a = 3,b=4;
    int c= (a*5)+b;
    int d= ((((a*5)+b)-45)+87);
    cout<<c<<endl;   
    cout<<d<<endl;   
 
    return 0;
}
