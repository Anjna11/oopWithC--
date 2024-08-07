#include<iostream>

using namespace std;

class B {
	
	int a;
	
	public:
		int b;
		void get_ab(void);
		int get_a();
		void show_a(void);
};

class D : private B {
	
	int c;
	
	public:
		void mul();
		void display(void);
};

void B :: get_ab(){
	
	cout <<"Enter value for a and b: ";
	cin >> a >> b;
}

int B :: get_a(){
	return a;
}

void B :: show_a(){
	cout <<"a = " << a <<"\n";
}

void D :: mul(){
	
	get_ab(); // It will work beacuse mul() finction is public and public function can access get_ab() private function of parent class.
	c = b * get_a();
}

void D :: display(){
	
	show_a();
	cout <<"b = " << b <<"\n" <<"c = " << c <<"\n";
	
}

int main(){
	
	D d;
	
	//d.get_ab(); Not Working beacuse this is private method of class D And inheritad from class B.
	d.mul(); 
	
	//d.show_a(); Same as line-56
	d.display();
	//d.b = 20;
	
	d.mul();
	d.display();
	
	return 0;
}

