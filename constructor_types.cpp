#include<iostream>
using namespace std;

class A {
	
	int x;
	
	public:
	
		A(){
			x = 12;		
		}
		
		A(int a){
			x = a;
		}
		
		A(A &b){
			x = b.x;
		}
		
		void display(){
		
			cout<< "\nX Is: "<< x;	
		}
};

int main(){
	
	A a1; 
	a1.display();
	
	A a2(10);
	a2.display();
	
	A a3(a1);
	a3.display();
}


