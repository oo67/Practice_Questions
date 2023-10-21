#include<iostream>
using namespace std;

int main(){
  int a=2,b=4;
  cout<<"operators in c++"<<endl;
  cout<<"Types of operators in c++"<<endl;
//  1. Airthmetic operator
  cout<<"The value of a + b is "<<a+b<<endl;
  cout<<"The value of a - b is "<<a-b<<endl;
  cout<<"The value of a * b is "<<a*b<<endl;
  cout<<"The value of a / b is "<<a/b<<endl;
  cout<<"The value of a % b is "<<a%b<<endl;
  cout<<"The value of a ++  is "<<a++<<endl;
  cout<<"The value of a --  is "<<a--<<endl;
  cout<<"The value of ++a is "<<++a<<endl;
  cout<<"The value of --a is "<<--a<<endl;
  cout<<endl;

//   2.Assignment operator--> used to assign values to variables.
//   int a = 1; int b = 2; etc

// 3.Comparision operator--> used to compare values
  cout<<"Following are the comparison operators "<<endl;
  cout<<"The value of a==b is "<<(a==b)<<endl;
  cout<<"The value of a!=b is "<<(a!=b)<<endl;
  cout<<"The value of a>=b is "<<(a>=b)<<endl;
  cout<<"The value of a<=b is "<<(a<=b)<<endl;
  cout<<"The value of a<b is "<< (a<b) <<endl;
  cout<<"The value of a>b is "<< (a>b )<<endl;

// 4.Logical operator
  cout<<"Following are the comparison operators "<<endl;
  cout<<"The value of ((a==b) && (a<b)) logical and operator  is "<<((a==b) && (a<b))<<endl;
  cout<<"The value of ((a==b) || (a<b)) logical || operator  is "<<((a==b) || (a<b))<<endl;   
  cout<<"The value of (!(a==b)) logical not operator  is "<<(!(a==b))<<endl;
  

  return 0;  
}