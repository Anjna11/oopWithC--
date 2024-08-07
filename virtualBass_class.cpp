#include<iostream>
using namespace std;

class A {
	
	public:
		void display(){
			
			cout<< "\nHello! I am from A class...";
		}
};

class B : virtual public A {
};

class C : virtual public A {
};

/* class D : public B, public C {   ERROR: D has now 2 Display Function, B's Display And C'display...  
}; */

class D : public B, public C {
};

int main(){
	
	B b;
	b.display();
	
	C c;
	c.display();
	
	D d;
	d.display();
}
