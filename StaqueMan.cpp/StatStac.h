//Specification file for static stac class
#ifndef STATSTAC_H
#define STATSTAC_H
#include<iostream>
using namespace std;

class StatStac {
	//Declare private members
	private:
		int* ray;
		int raysize;
		int top = -1;
	//Declare public members
	public:
		StatStac(int size) {
			ray = new int[size];
			raysize = size;
		}

		//Declare mutator functions
		void push(int);
		int pop();
		bool isEmpty();
		bool isFull();

		//Destructor
		~StatStac(){
			delete[] ray;
		}

};
#endif // !STATSTAC_H
