#include<iostream>

using namespace std;

class Student {
	
	protected:
		int roll_number;
		
	public:
		void get_number(int a){
		
			roll_number = a;
		}
		
		void put_number(){
		
			cout <<"Roll No: " << roll_number << endl;
		}
};

class Test : public Student {

	protected:
		float part1, part2;
		
	public:
		void getmarks(float x, float y){
		
			part1 = x;
			part2 = y;
		}
		
		void put_marks(){
		
			cout <<"Marks Obtained" << endl;
			cout <<"Part1: " <<	part1 << endl;
			cout <<"Part2: " <<	part2 << endl;
		}
};

class Sports {

	protected:
		float score;
		
	public:
		void get_score(float s){
			
			cout
		}
}


int main(){
	
	Test s;
	
	s.get_number(11);
	s.put_number();
	
	s.getmarks(12.2, 12.3);
	s.put_marks();	
	
	return 0;
}












