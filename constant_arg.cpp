#include<iostream>

using namespace std;

void test(int a, const int b){
	
	int x;
	x = a + b;
	cout << x << endl;
	b = 12;
	
	cout << x << endl;
}

int main(){
	
	test(2, 6);
	
}
