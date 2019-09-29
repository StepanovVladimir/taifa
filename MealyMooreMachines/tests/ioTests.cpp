#include "catch.hpp"
#include "../MealyMooreMachines/MealyMachine.h"
#include "../MealyMooreMachines/MooreMachine.h"
#include <sstream>

using namespace std;

TEST_CASE("Test read and print moore machine data from stream")
{
	stringstream input;
	stringstream output;

	input << "y1 y2 y2" << endl;
	input << "q0 q0 q2" << endl;
	input << "q2 q2 q1" << endl;

	auto mooreMachineData = ReadMooreMachineData(input, 2, 3);
	PrintMooreMachineData(mooreMachineData, output);

	CHECK(output.str() == "y1 y2 y2 \nq0 q0 q2 \nq2 q2 q1 \n");
}

TEST_CASE("Test read and print mealy machine data from stream")
{
	stringstream input;
	stringstream output;

	input << "s0y1 s2y2" << endl;
	input << "s1y2 s0y1" << endl;

	auto mealyMachineData = ReadMealyMachineData(input, 2, 2);
	PrintMealyMachineData(mealyMachineData, output);

	CHECK(output.str() == "s0y1 s2y2 \ns1y2 s0y1 \n");
}