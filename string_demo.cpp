#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	string s;
	
	s = "abc\0";
	
	cout << s << endl;
	cout << s.at(1) << endl;
	

}
