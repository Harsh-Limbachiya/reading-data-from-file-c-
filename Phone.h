
/* ------------------------------------------------------
Workshop 1 part 2
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : Phone.h
date     : 23/1/2022
-----------------------------------------------------------*/

/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments*/


#ifndef Word_H_ // replace with relevant names
#define Word_H_
#pragma once


namespace sdds
{
	const int Max_Length = 50;
	const int records = 36;
	struct Phone
	{
		char name[Max_Length + 1];
		char areaCode[4];
		char prefix[4];
		char number[5];
	};
	void buffer();
	void task(struct Phone data[]);
	void phoneDir(const char* programTitle, const char* fileName);
}

#endif