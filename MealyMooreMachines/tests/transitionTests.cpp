#include "catch.hpp"
#include "../MealyMooreMachines/transitions.h"
#include <sstream>

using namespace std;

TEST_CASE("Test moore to mealy transition")
{
	stringstream input;
	stringstream output;

	input << "y1 y2 y2" << endl;
	input << "q0 q0 q2" << endl;
	input << "q2 q2 q1" << endl;

	auto mooreMachineData = ReadMooreMachineData(input, 2, 3);
	auto mealyMachineData = TransitMooreToMealy(mooreMachineData);
	PrintMealyMachineData(mealyMachineData, output);

	CHECK(output.str() == "q0y1 q0y1 q2y2 \nq2y2 q2y2 q1y2 \n");
}

TEST_CASE("Test mealy to moore transition")
{
	stringstream input;
	stringstream output;

	input << "s0y1 s1y2" << endl;
	input << "s1y2 s0y1" << endl;

	auto mealyMachineData = ReadMealyMachineData(input, 2, 2);
	auto mooreMachineData = TransitMealyToMoore(mealyMachineData);
	PrintMooreMachineData(mooreMachineData, output);

	CHECK(output.str() == "y1 y2 \nz0 z1 \nz1 z0 \n");
}