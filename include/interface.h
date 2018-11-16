/*
	File: interface.h
	Header file for abstract class Interface 

	UFSC - EEL7323 - C++ Programming for Embedded Systems

	Project: Vending Machine
	Description: Class Interface is the definition for an abstract class
	which deals with the machine interface for multiple systems.

	Author: Rodrigo Kobashikawa Rosa <rodrigokrosa@gmail.com>
	Github: https://github.com/kobarion/Vending-Machine

	Last changed in: 03/11/2018
*/

#include <iostream>
using namespace std;

class Interface {
	protected:
		int inputChoice;
		string input;
	public:
		// template?
		virtual void displayMessage(string) = 0;
		virtual string inputSystem() = 0;
		// virtual void output() = 0;
};

class RPi : public Interface {
	public:
		void displayMessage(string);
		string inputSystem();
		// void output();
};

class PC : public Interface {
	public:
		void displayMessage(string);
		string inputSystem();
		// void output();
};