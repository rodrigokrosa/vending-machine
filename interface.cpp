/*
	File: interface.cpp
	Implementation file for abstract class Interface 

	UFSC - EEL7323 - C++ Programming for Embedded Systems

	Project: Vending Machine
	Description: Class Interface is the definition for an abstract class
	which deals with the machine interface for multiple systems.

	Author: Rodrigo Kobashikawa Rosa <rodrigokrosa@gmail.com>
	Github: https://github.com/kobarion/Vending-Machine

	Last changed in: 03/11/2018
*/
#include <iostream>
#include "interface.h"

using namespace std;

void x86::displayMessage(string msg){
	cout << msg << " - x86" << endl;
}

string x86::inputSystem(){
	cin >> inputx86;
	switch(inputx86){
		case 1:
			input = "m025";
			break;
		case 2:
			input = "m050";
			break;
		case 3:
			input = "m100";
			break;
		case 4:
			input = "dev";
			break;
		case 5:
			input = "etirps";
			break;
		case 6:
			input = "meets";
			break;
		default:
			input = "nada";
			break;
	}
	return input;
}

void RPi::displayMessage(string msg){
	cout << msg << " - RPi" << endl;
}

string RPi::inputSystem(){
	cin >> inputRPi;
	switch(inputRPi){
		case 1:
			input = "m025";
			break;
		case 2:
			input = "m050";
			break;
		case 3:
			input = "m100";
			break;
		case 4:
			input = "dev";
			break;
		case 5:
			input = "etirps";
			break;
		case 6:
			input = "meets";
			break;
		default:
			input = "nada";
			break;
	}
	return input;
}
