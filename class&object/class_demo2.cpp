#include<iostream>
#include<string.h>

using namespace std;

class binary
{

	string s;
	
	public:
	
		void read(){
			
			cout << "Enter A Binary Numbers: ";
			cin >> s;
		}
		
		void chack_bin(){
		
			for(int i = 0; i < s.length(); i++){
			
				if(s.at(i) != '0' && s.at(i) != '1'){
					
					cout << "Incorrect Binary Format...The Program Will Quit" << endl;
				}
			}
		}
		
		void ones(){
			
			chack_bin();
			
			for(int i = 0; i < s.length(); i++){
			
				if(s.at(i) == '0'){
					
					s.at(i) = '1';
				}
				
				else {
					s.at(i) = '0';
				}		
			}
			
			display();
		}
		
		void display(){	
			cout << "Binary Is: " << s << endl;
		}

};

int main(){

	binary b1;
	
	b1.read();
	b1.ones();

}
