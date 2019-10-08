#pragma once
#include <string>
#include <map>

using namespace std;

using State = string;
using InputSignal = string;
using OutputSignal = string;

struct MealyTransition
{
	State state;
	OutputSignal outputSignal;
};

using MealyMachineData = map<InputSignal, map<State, MealyTransition>>;

struct MooreMachineData
{
	map<InputSignal, map<State, State>> graph;
	map<State, OutputSignal> outputSignals;
};