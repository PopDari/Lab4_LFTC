#pragma once

#include "finiteAutomata.h"
#include <fstream>

vector <string> FiniteAutomata::getStates() {
	return this->states;
}

vector <string> FiniteAutomata::getAlphabet() {
	return this->alphabet;
}

vector <string> FiniteAutomata::getFinalStates() {
	return this->finalStates;
}


void FiniteAutomata::readFiniteAutomata(string filename) {
	ifstream fin(filename);
	string line;
	getline(fin, line);
	this->readStates(line);
	getline(fin, line);
	this->readAlphabet(line);

	getline(cin, line);
	this->readFinalStates(line);
}

void FiniteAutomata::readStates(string line) {

}

void FiniteAutomata::readAlphabet(string line) {

}

void FiniteAutomata::readFinalStates(string line) {

}

void FiniteAutomata::readTransitions(string line) {

}
