#include<iostream>
#include<string.h>

using namespace std;

class item {

	private:
		int number; 
		string name;
		float cost;
		
	public:
		void getdata(int a, string c, float b);
		
		void putdata(void){
			
			cout << "Number: " << number << "    ";
			cout << "Name: " << name << "    ";
			cout << "Cost: " << cost << endl;
			
		}

};

void item :: getdata(int x, string z, float y){

	number = x;
	name = z;
	cost = y;
}


int main(){

	item i1, i2, i3;
	
	i1.getdata(1, "abc", 100.5);
	i2.getdata(2, "pqr", 200.5);
	i3.getdata(3, "xyz", 300.5);
	
	i1.putdata();
	i2.putdata();
	i3.putdata();
}
