#include<iostream> 

int main(){

	int a, b, sum, avg;
	
	std::cout << "a : ";
	std::cin >> a;
	
	std::cout << "b : ";
	std::cin >> b;
	
	sum = a + b;
	avg = sum / 2;
	
	std::cout << "sum : " << sum << "\n";
	std::cout << "avg : " << avg << "\n";

	std::cout << "Hello World...";
	
	return 0;
}

