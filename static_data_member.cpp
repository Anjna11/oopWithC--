#include<iostream>

using namespace std;

class item {
	
	static int count;
	int number;
	
	public:
		void getdata(int x){
			
			number = x;
			count ++;
		}
		
		void getcount(){
			
			cout << "Count: " << count << endl;
		}
};

int item :: count;

int main(){
	
	item a, b, c, d;
	
	a.getcount();
	b.getcount();
	c.getcount();
	d.getcount();
	
	a.getdata(100);
	b.getdata(100);
	c.getdata(100);
	d.getdata(100);
	
	cout << "After Reading Data...\n";
	
	a.getcount();
	b.getcount();
	c.getcount();
	d.getcount();
}
