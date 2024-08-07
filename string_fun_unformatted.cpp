#include<iostream>
#include<string>

using namespace std;

int main(){
	
	char name[30];
	
	cout<< "Enter Name: ";
	cin.getline(name, 5);
	
	cout.write(name, 5);
	cout<<endl; 
	
	
	
	char ch[10] = "Hello";
	
	cout.fill('*');
	cout.width(20);
	
	cout<< ch <<"\n";
	
}
