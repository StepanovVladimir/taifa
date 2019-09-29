#pragma once
#include <iostream>
#include <map>
#include "types.h"

using namespace std;

struct MooreMachineData
{
	map<InputSignal, map<State, State>> graph;
	map<State, OutputSignal> outputSignals;
};

MooreMachineData ReadMooreMachineData(istream& stream, int inputAlphabetCharsCount, int statesCount);
void PrintMooreMachineData(const MooreMachineData& mooreMachineData, ostream& stream);