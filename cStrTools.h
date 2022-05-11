
/* ------------------------------------------------------
Workshop 1 part 2
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : cStrTools.h
date     : 23/1/2022
-----------------------------------------------------------*/

/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments*/


#ifndef cStrTools_H_ // replace with relevant names
#define cStrTools_H_
#pragma once
namespace sdds
{
	// Your header file content goes here

	//returns the upper case value of character 
	char toUpper(char ch);
	// returns the lower case value of a character
	char toLower(char ch);
	// compares s1 and s2 cStrings and returns:
	int strCmp(const char* s1, const char* s2);
	// compares s1 and s2 cStrings upto len characters and returns:
	int strnCmp(const char* s1, const char* s2, int len);
	// if "find" is found in "str" it will return the addres of the match if not found it will returns nullptr (zero)
	const char* strStr(const char* str, const char* find);
	// copies src to des
	void strCpy(char* des, const char* src);
	// returns true if ch is alphabetical
	int isAlpha(char ch);
	// returns the length of str
	int strLen(const char* str);
	// returns true if ch is a whitespace character
	int isSpace(char ch);
	// removes the non-alphabetic characters from the begining and end of a word
	void trim(char word[]);
	// copies the  lower case version of the source into des.
	void toLowerCaseAndCopy(char des[], const char source[]);
}
#endif