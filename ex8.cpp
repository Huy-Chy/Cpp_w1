#include<iostream>
using namespace std;
int main (){
    int option;
    do{
        cout<<"1. Greeting "<<endl;
        cout<<"2. Calculate factorial "<<endl;
        cout<<"0. Exit "<<endl;
        cout<<"Choose 1 option : "; cin>>option;
        switch(option){
            case 1 : {
                string name;
                cout<<"What is your name?  : "; cin>>name;
                cout<<"Nice to meet you."<<endl;
            }break;
            case 2 : {
                int num;
                int count=1;
                cout<<"Enter number = "; cin>>num;
                for(int i=1;i<=num;i++){
                    count*=i;
                }
                cout<<"Factorial = "<<count<<endl;
            }break;
            case 0 : {
                cout<<"Exiting program."<<endl;
            }break;
            default :{
                cout<<"pls try again."<<endl;
            }
        }
    }while(option !=0);
    return 0;
}