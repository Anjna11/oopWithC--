#include<iostream>


using namespace std;

class person {
	
	char name[20];
	int age;

	public:
	void display();
	void getdata();
		
};

void person :: display(){
		
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
			
}

void person :: getdata(){
		
	cout << "Enter Name: ";
	cin >> name;
		
	cout << "Enter Age: ";
	cin >> age;
}

int main(){
	
	person p1, p2;	
	
	p1.getdata();
	p1.display();
	
	p2.getdata();
	p2.display();
}
