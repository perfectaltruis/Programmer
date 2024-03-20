#include <iostream>
#include <string>

using namespace std;

int main(){
	// variables
	int initial_number, final_number;

	// user inputs and prompts
	cout << "Enter the initial number: \t";
	cin >> initial_number;

	cout << "Enter the final number: \t";
	cin >> final_number;

	cout << "" << endl;
	cout << "Even Numbers Are:\n" << endl;

	// initial numbers do should not be greater than final number
	if (initial_number > final_number){
		cout << "Initial Number Should Be Less Than Final Number" ;
	}

	// finding the even number in a given range.
	for(int value = initial_number; value <= final_number; value++){
		if(value % 2 == 0){
			cout << value << " :  is an even number" << endl;
		}
	}

	return 0;

}
