#include<iostream>

using namespace std;

class B {	
	private:
		int a;
	
	public:
		int b;
		
		void set_ab();
		int get_a(void);
		void show_a(void);
};

class D: public B {
	int c;
	
	public:
		void mul(void);
		void display(void);
};

void B :: set_ab(){  // CLASS B

	a = 5; b = 10;
}

int B :: get_a(){   // CLASS B
	return a;
}

void B :: show_a(){  // CLASS B
	cout <<"a = " << a <<"\n";
}

void D :: mul(){  // CLASS D
	c = b * get_a();
}

void D :: display(){   // CLASS D
	
	cout <<"a = " << get_a() <<"\n";
	cout <<"b = " << b <<"\n";
	cout <<"c = " << c <<"\n\n";
}

int main(){

	D d;
	
	d.set_ab();
	d.mul();
	d.show_a();
	d.display();
	
	d.b = 20;
	d.mul();
	d.display();
	
	return 0;
}
