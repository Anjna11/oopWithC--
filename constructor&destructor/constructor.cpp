#include<iostream>

using namespace std;

class point {
	
	int x, y;
	
	public:
		point() {
			cout << "\nCreating object..." << this;
			x = 0;
			y = 0;
		}	
	
		point(int a, int b){
			cout << "\nCreating object with params..." << this;
			x = a; 
			y = b;
			this -> display();
		}
		
		void display(){
			
			cout << "(" << x << "," << y << ")\n";
		} 
};

int main(){
	
	point p1(2,4);
	cout << "\npoint p1 = ";
	cout << "\n" << &p1;
	p1.display();
	
	
	point p2(3,5);
	cout << "\npoint p2 = ";
	p2.display();
	
	return 0;
}
