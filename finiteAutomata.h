#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "pair.h"

using namespace std;

class FiniteAutomata {

private:

	string initialState;

	vector <string> states;

	vector <string> alphabet;

	vector <string> finalStates;

	map < Pair, vector <string> > transitions;

public:

	void readFiniteAutomata(string filename);

	void readStates(string line);

	void readAlphabet(string line);

	void readFinalStates(string line);

	void readTransitions(string line);

	vector <string> getStates();

	vector <string> getAlphabet();

	vector <string> getFinalStates();

};