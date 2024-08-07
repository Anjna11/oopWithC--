#include<iostream>

using namespace std;

void add(int a, int b){
	
	cout <<"Sum is: "<< a+b;
}

void add(int x, int y, int z){
	
	cout <<"\nSum is: "<< x+y+z;
}

int main(){

	add(10, 20);
	add(10, 20, 30);
}




