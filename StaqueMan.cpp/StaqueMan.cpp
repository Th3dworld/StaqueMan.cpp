#include<iostream>
#include "StatStac.h"
#include<stdexcept>
using namespace std;

int main() {
	//Instantiate Stack
	StatStac one(5);

	//Create fill stack
	cout << "Adding five members to stack...\n";
	one.push(1);
	one.push(2);
	one.push(3);
	one.push(4);
	one.push(5);
	//Check if validation works
	cout << "Adding one more...\n";
	one.push(1);

	//Display Stack contents
	
	cout << "Display contents...\n";
	try{
		for (int i = 0; i < 6; i++)
			cout << one.pop() << endl;
	}
	catch (exception) {

	}
	



	return 0;
}