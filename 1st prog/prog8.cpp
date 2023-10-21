#include<iostream>
using namespace std;

int main(){
    // cout<<"This is tutorial";


// Selection control structure:
// If else ladder
    int age;
    cout<<"Tell your age: "<<endl;
    cin>>age;
    // if((age<18) && (age>0)){
    //     cout<<"Your cant come to party."<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to party."<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born."<<endl;
    // }
    // else{
    //     cout<<"You can come to party,"<<endl;
    // }


// Switch case statement

   switch(age)
   {
    case 18:
    cout<<"You are 18."<<endl;
    break;

    case 22:
    cout<<"You are 22."<<endl;
    break;

    case 2:
    cout<<"You are 2"<<endl;
    break;

    default:
    cout<<"No special case "<<endl;
    break;
   }    

    cout<<"Done with switch case.";
    return 0;
}