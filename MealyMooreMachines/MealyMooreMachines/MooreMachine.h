#pragma once
#include <iostream>
#include "types.h"

using namespace std;

MooreMachineData ReadMooreMachineData(istream& stream, int inputAlphabetCharsCount, int statesCount);
void PrintMooreMachineData(const MooreMachineData& mooreMachineData, ostream& stream);