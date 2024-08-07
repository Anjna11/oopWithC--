#include<iostream>
using namespace std;

class Animal {
	
	public:
		void eat(){
			cout<< "\nAnimal Eating...";
		}
};

class Dog : public Animal {
	
	public:
		void eat(){
			cout<< "\nDog Eating...\n";
		}
};

int main(){
	
	Animal a;
	a.eat();
	
	Dog d;
	d.eat(); // call it's own function eat().
}
