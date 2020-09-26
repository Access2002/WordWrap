#include <iostream>

int main()
{
	//initalises the string variable
	std::string String;
	std::string Whitespace;
	std::string StringReversed;

	// Asks for an input and recieves an input into the variable "String"
	std::cout << "Enter a single word: " << std::endl;
	std::cin >> String;

	//Finds the byte size of the string and stores it into a constant integer variable
	const int StringSize = sizeof(String);

	//Find how many chars are in the string
	int StringLength = String.size();

	// Initalised the char array with the amount of bytes taken up by the string
	char CharArray[StringSize];
	strcpy_s(CharArray, String.c_str());

	// Works out the amount of whitespace, starts to in because of the two characters each side
	for (int i = 2; i < StringLength; i++) {
		Whitespace += " ";
	}
	
	//Prints out the Char array making the first line
	std::cout << CharArray << std::endl;

	// Iterates through the char array. Begins at char[1] and ends at the second last char

	for (int i = 1; i < StringLength - 1; i++) {
		int CharPos = StringLength - i;
		std::cout << CharArray[i] << Whitespace << CharArray[CharPos - 1] << std::endl;
	}   

	// 
	for (int j = StringLength; j > 0; j--) {
		StringReversed += CharArray[j - 1];
	}

	std::cout << StringReversed << std::endl;

	// This pauses the system giving the user time to read the result of the code
	system("pause");
}
