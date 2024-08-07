#include<iostream>
using namespace std;

class code {
	
	int id;
	
	public:
		
		code(){
			cout <<"Defult calling..." <<endl;
		}
		
		code(int a){
			cout <<"value assining..."<<endl;
			id = a;
		}
		
		code(code &x){		
			cout <<"Copy constructor calling..."<<endl;
			id = x.id;
		}
		
		void display(void){
			cout << id;
		}
		
		~code(){
			cout <<"destructor calling..." << endl;
		} 
};

int main(){


	cout <<"creating A..." <<endl;
	code A(100);
	
	cout <<"creating B..."<<endl;
	code B(A);
	
	cout <<"creating C and assining A..."<<endl;
	code C = A;
	
	cout <<"creating D..."<<endl;
	code D;
	
	cout <<"assining D..."<<endl;
	D = A;
	
	cout <<"Id of A is: ";
	A.display();
	cout <<endl;
	
	cout <<"Id of B is: "<<endl;
	B.display();
	cout <<endl;
	
	cout <<"Id of C is: "<<endl;
	C.display();
	cout <<endl;
	
	cout <<"Id of D is: ";
	D.display();
	cout <<endl;
}
