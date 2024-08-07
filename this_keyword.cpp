#include<iostream>
using namespace std;

class Student {
	
	int RollNo;
	float Marks;
	
	public :
		
		Student(int RollNo, float Marks){
			
			this -> RollNo = RollNo;
			this -> Marks = Marks;
		}
		
		void display(){
			
			cout<< "Roll No is: "<< RollNo << endl;
			cout<< "Marks is: "<< Marks << endl; 
		}
};

int main(){
	
	Student s(101, 9.1);
	
	s.display();
}

