#include<iostream>

using namespace std;  

int c=34;

int main(){

    //*************************Build in data types********************************
    // int a,b,c;
    // float d=34.4f;  // f is used to specify it as float type otherwise by default its set as double.
    // long double e =34.4l; // l is used to specify as long ,its not necessery here .But its mandatory in function overloading.

    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is: "<<c<<endl;;
    // cout<<"The global variable is: "<<::c<<endl;

  // //*************************Float, double and long double literals********************************
    // cout<<"The size of 34.4 is : "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4 is : "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4 is : "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4 is : "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4 is : "<<sizeof(34.4L)<<endl;
    

    // cout<<"The value of d is : "<<d<<endl<<"The value of e is : "<<e;


//**********************Reference Variables************************************

    //Rohan das ------> Monty -------> Rohu --------> Dangereouscoder
    // float x = 455;
    // float & y = x; // here we are making y as a reference to x .
    // cout<<x<<endl;
    // cout<<y<<endl;


//**********************Typecasting ************************************
    int u=45;
    float p= 45.46;
    cout<<"The value of u is : "<<(float)u<<endl;    //type casting means changing a variable to another variable.
    cout<<"The value of p is : "<<(int)p<<endl;
    cout<<"The value of u is : "<<float(u)<<endl;
    cout<<"The value of p is : "<<int(p)<<endl;

    int h=int(p);
    cout<<"The expression is : "<<u+p<<endl;
    cout<<"The expression is : "<<u + int(p)<<endl;
    cout<<"The expression is : "<<u + (int)p<<endl;
    
    return 0;
    
}
   
