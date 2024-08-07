#include<iostream>
using namespace std;

class Animal {
	
	public:
		void eat(){
			cout<< "Eating...";
		}
};

class Dog : public Animal {
	
	public:
		void bark(){
			cout<< "Barking...";
		}	
};

class Cat : public Dog {
	
	public:
		void runing(){
			cout<< "Runing...";
		}	
};

int main(){
	
	Cat c;
	
	c.eat();
	c.bark();
	c.runing();
}


