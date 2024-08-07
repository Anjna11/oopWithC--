#include<iostream>

using namespace std;

int main(){
	
	void printline(char ch = '*', int len = 50);
	void mul(int x, int y = 5);
	
	printline();
	printline('=');
	printline();
	
	//--------------------
	
	mul(2);
	mul(2, 3);
	
}

void printline(char ch, int len){ 
	
	int i;
	
	for(i = 0; i < len; i++){
		
		printf("%c", ch);
	}
	printf("\n");
}

void mul(int a, int b){
	
	cout << "multiply is = " << (a * b) << endl;
}


