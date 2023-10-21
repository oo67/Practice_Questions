#include<iostream>
using namespace std;


    
    /* Loops in C++ 
    There are three types of loops in C++ :
    1.For
    2.while
    3.do-while
    */
 
 //For loop

//    int i=1;
//    cout<<i<<endl;
//    i++;            // here we need to write cout and increment multiple times to print 1-100 ,which is time consuming therefore we use for loop here.//

//syntax:
/* for(initialization;condition;updation){
    body of loop 
}*/

    // for(int i=0 ; i<=40 ; i++){
    //     cout<<i<<endl;
        
    // }


//While loop:
//Syntax:
/* while(condition):
{
    statements of loop
}  */

//Printing 1 to 40 using while loop
    
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

//do-while loop
//Syntax:
/* do:
   {
    statements of loop
   }
   while(condition);
   */

    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=40);    //here the loop will implement a single time even if the condition is false.


//Q. using do while loop make a multiplication table.
    
int main() {
        int a,i=1;
        cout<<"Input a Number: "<<endl;
        cin>>a;

        do{
            cout<<a<<"x"<<i<<"="<<a*i<<" "<<endl;
            i++;
        }while(i<=10);
        return 0;       
} 