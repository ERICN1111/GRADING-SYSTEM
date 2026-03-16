#include<iostream>
using namespace std;
int main(){

int marks[5];
string name[5];
char grade;
int i;
for(i=0;i<5;++i){

cout<<"enter your name: ";
cin>>name[i];
cout<<"enter your marks: ";
cin>> marks[i];


	if(marks[i]<=20)
		cout<<"your grade is D"<<grade<<endl;
	
		else if(marks[i]<=40)
			cout<<"your grade is c"<<grade<<endl;
		
		
			else if(marks[i]<=60)
				cout<<"your grade is B"<<grade<<endl;
			
						
				else if(marks[i]<=80)
					cout<<"your grade is A"<<grade<<endl;
				
				else if(marks[i]<=100)
					cout<<"your grade is A"<<grade<<endl;
				
				else
				cout<<"INVALID GRADE";
			}
			return 0;
		}
				
	
				
				
              
              
				
				