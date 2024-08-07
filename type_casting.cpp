#include<iostream>
using namespace std;

int main(){
	7
	float a = 7.1, x;
	int b = 12, y;
	
	cout<< "implicit conversion: "<< endl;
	y = int(a);
	cout<< "float(7.1) to int: "<< y <<endl;
	
	cout<<endl;
	
	cout<< "explicit conversion: "<< endl;
	x = float(b);
	cout<< "int(12) to float: "<< x <<endl;
}

