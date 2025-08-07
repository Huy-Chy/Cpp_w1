#include<iostream>
using namespace std;
int main(){
	char option;
	cout<<"Enter character of option : "; cin>>option;
	switch(option){
		case 'a':
		case 'A': {
			cout<<"Excellent."<<endl;
		}break;
		case 'b':
		case 'B':{
			cout<<"Good."<<endl;
		}break;
		case 'c':
		case 'C': {
			cout<<"Fair"<<endl;
		}break;
		case 'f':
		case 'F':{
			cout<<"Fail."<<endl;
		}break;
		default:
			cout<<"Invalid Grade."<<endl;
	}
	return 0;
}
