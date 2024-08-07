#include<iostream>

using namespace std;

class Animal {
	
	public:
		void info(){
			
			cout <<"I am an Animal..." << endl;
		}
};

class Dog : public Animal {
	
	public:
		void bark(){
			
			cout <<"I am an Dog. Woof...Woof..." << endl;
		}
};

class Cat : public Animal {

	public:
		void meow(){
		
			cout <<"I am an Cat. meow...Meow..." << endl;
		}
};

int main(){
	
	Dog d;
	Cat c;
	
	d.info();
	d.bark();
	
	c.info();
	c.meow();
	
	return 0;
}


