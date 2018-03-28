#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (){
	string usr_msg;
	
		
	cout << "Please enter a phrase: " << endl;
	cin >> usr_msg;
	
		int count=0;
		for(int i=0; i<usr_msg.size(); i++){
			if (usr_msg[i] == 'b'){
				if(i % 2 == 0){
					cout << "Sit";
					count++;
				}
				else{
					cout << "Stand";
					count++;
				}
			}
			else if (usr_msg[i] != 'b'){
				cout << usr_msg[i];
			}
			
		}
	
}