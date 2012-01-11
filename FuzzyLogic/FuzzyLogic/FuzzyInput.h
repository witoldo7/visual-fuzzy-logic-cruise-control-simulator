#pragma once

#include <stdlib.h>
#include <sstream>
#include <vector>
using namespace std;

/*
* Author: Sa�o Ma�ari�
*/
namespace FuzzyLogic{
	//Class used for input data
	class CFuzzyInput
	{
		//Variable name
		string variableName;
		//Input value for fuzzy system
		double inputValue;
	public:

		CFuzzyInput(string nVariableName, double nInputValue)
		{
			variableName = nVariableName;
			inputValue = nInputValue;
		}

		~CFuzzyInput(void)
		{
		}

		//Setters
		void SetInputValue(double newVal){inputValue = newVal;}
		//Getters
		string GetVariableName(){return variableName;}
		double GetInputValue(){return inputValue;}
	};
}