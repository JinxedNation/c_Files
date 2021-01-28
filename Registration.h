#pragma once
#include "result.h"
#include "unit.h"
#include <iostream>
using namespace std;


class Registration
{
public:
	Registration();
	unsigned GetCredits() const;
	unsigned GetCount()   const;

	
	friend ostream& operator << ( ostream& writing_Student_DB, const Registration& registered_Details);
	friend istream& operator >> ( istream& reading_Student_DB,       Registration& registered_Details);

private:
	long     student_Number;          // student ID number
	unsigned current_Semester;
	unsigned number_Of_Units;
	
	result   registered_Info[MAX_UNITS];
	unit     registered_Units[MAX_UNITS];
};


inline unsigned Registration::GetCount() const
{
	return number_Of_Units;
}
