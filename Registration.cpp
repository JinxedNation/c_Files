#include "Registration.h"
Registration::Registration()
{
	number_Of_Units = 0;
}



unsigned Registration::GetCredits() const
{
	unsigned total_Credits = 0;


	for (unsigned unit_Number = 0; unit_Number < number_Of_Units; unit_Number++)
	{
		total_Credits += registered_Units[unit_Number].GetCredits();
	}
	
	
	return total_Credits;
}



istream & operator >> (istream & reading_Student_DB, Registration& registered_Details)
{
	reading_Student_DB >> registered_Details.student_Number >> registered_Details.current_Semester >> registered_Details.number_Of_Units;


	for (unsigned unit_Number = 0; unit_Number < registered_Details.number_Of_Units; unit_Number++)
	{
		reading_Student_DB >> registered_Details.registered_Info[unit_Number];
	}

	return reading_Student_DB;
}



ostream & operator << (ostream & writing_Student_DB, const Registration& registered_Details)
{
	writing_Student_DB << "Student Number is : " << registered_Details.student_Number   << '\n'
		               << "Current Semester  : " << registered_Details.current_Semester << '\n';


	for (unsigned unit_Number = 0; unit_Number < registered_Details.number_Of_Units; unit_Number++)
	{
		writing_Student_DB << registered_Details.registered_Info[unit_Number] << '\n';
	}

	return writing_Student_DB;
}