#include<iostream>

using namespace std;

class Student {
	
	protected:
		int roll_number;
	
	public:
		void get_number(int);
		void put_number(void);
};

class Test : public Student {

	protected:
		float sub1;
		float sub2;
	
	public:
		void get_marks(float, float);
		void put_marks(void);
};

class Result : public Test {
	
	private:
		float total;
	
	public:
		void display(void);
};

void Student :: get_number(int a){
	
	roll_number = a;
}

void Student :: put_number(){
	
	cout <<"Roll Number: " << roll_number << "\n";
}

void Test :: get_marks(float x, float y){
	
	sub1 = x;
	sub2 = y;
}

void Test :: put_marks(){
	
	cout <<"Marks In SUB1: "<< sub1 <<endl;
	cout <<"Marks In SUB2: "<< sub2 <<endl;
}

void Result :: display(){
	
	total = sub1 + sub2;
	put_numbeZr();
	put_marks();
	cout <<"Total: " << total << "\n";
}

int main(){
	
	Result s;	
		
	s.get_number(1);
	s.get_marks(79.6, 83.1);
	s.display();	
		
	return 0;
}

