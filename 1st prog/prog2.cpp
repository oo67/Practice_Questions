//Variables and Data types .


#include<iostream>
using namespace std;
int glo = 6;              //Global variable glo i.e 6 as its outside main()
void sum(){               //sum is fxn.
    int a;
    cout<<glo ;
   
}

int main(){
    // int a = 10;
    // int b = 20;
    int glo=9;            //Local variable here is 9 i.e 9.
    glo=78;               // local variable changes here to 78
    int a=4,b=8;
    float pi=3.14;
    char c ='d';
    bool k= true;
    bool l=false;
    sum();
    
    cout<< glo <<k<<l;
    // cout<< glo<<"\n";
    // cout<< k<<"\n";
    // cout<< l<<"\n";
    

    // cout<<"Here value of a is "<<a<<"\n THe value of b is "<<b;
    return 0;
}



// global and local variable can be of same name but local gets pecidence over global.
// local variable gets pecidence over global variable