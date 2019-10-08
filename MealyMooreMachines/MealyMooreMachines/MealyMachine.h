#pragma once
#include <iostream>
#include "types.h"

using namespace std;

MealyMachineData ReadMealyMachineData(istream& stream, int inputAlphabetCharsCount, int statesCount);
void PrintMealyMachineData(const MealyMachineData& mealyMachineData, ostream& stream);