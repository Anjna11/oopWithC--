#include<iostream>

int m = 10;

int main(){

	int m = 20;
	
	{
		
		int k = ::m;
		int m = 30;
		
		std::cout << "we are in inner block \n";
		std::cout << "k : " << k << "\n";
		std::cout << "m : " << m << "\n";
		std::cout << "::m : " << ::m << "\n";
	
	}
	
	std::cout << "we are in outer block \n";
	std::cout << "m : " << m << "\n";
	std::cout << "::m : " << ::m << "\n";
	
	return 0;
}
