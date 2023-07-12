//This is the implementation file for the Static Stack class
#include<iostream>
#include"StatStac.h"
using namespace std;


bool StatStac::isEmpty() {
	if (top == -1) {
		return true;
	}
	else	
		return false;	
}

bool StatStac::isFull(){
	bool val = false;
	if(top == (raysize - 1))
		val = true;
	return val;
}

void StatStac::push(int newval) {
	if (isFull())
		cout << "Stack is full.\n";
	else {
		top++;
		ray[top] = newval;
	}
}

int StatStac::pop() {
	int temp;
	if (isEmpty()) {
		cout << "Stack is empty.\n";
		throw std::exception("No values to return");
	}
	else {
		temp = ray[top];
		top--;
		return temp;
	}
	
}