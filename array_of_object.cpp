#include<iostream>

using namespace std;

class employee {
	
	char name[20];
	int age;
	
	public:
	
		
		
		void getdata();
		void putdata();
};

void employee :: getdata(){

	cout << "Enter name: ";
	cin >> name;
	
	cout << "Enter age: ";
	cin >> age;
}

void employee :: putdata(){

	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

int main(){

	employee emp[3];
	
	for(int i = 0; i < 3; i++){
	
		cout << "Details Of Employee" << i+1 << ": " << endl;
		emp[i].getdata();
		cout << endl;
	}
	
	cout << "--------------------------------------------------" << endl;
	
	for(int i = 0; i < 3; i++){
	
		cout << "Emloyee" << i+1 << ": " << endl;
		emp[i].putdata();
		cout << endl;					
	}
}
