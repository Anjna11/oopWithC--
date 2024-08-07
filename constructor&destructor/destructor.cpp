#include<iostream>

using namespace std;

class A {
	
	public:
	int a;
	
	A(){
		a = 10;		
	}
	
	A(int x){
		a = x;
	}
		
	void display(){
		cout <<"a = "<< a <<endl;
	}
	
	~A(){
		cout << "destructor calling..." << a <<endl;
	}

};

int main(){
	
	{
	
		A a1;
		a1.display();	
	}
	
	cout << "Creating other objects.";
	
	A a2(15);
	A a3(30);
	
	
	a2.display();
	a3.display();
}
