#include "unit.h"

unit::unit()
{
	name[0] = '\0'; // it is a char * string
}


unit::unit(const char* temp_Name, const char * temp_Unit_ID, unsigned temp_Credits)
{
	strncpy(name,   temp_Name,    UnitName_Size);
	strncpy(unitid, temp_Unit_ID, UnitName_Size);
	credits = temp_Credits;
}


istream & operator >> (istream & reading_Student_DB, unit & unit_Info)
{
	reading_Student_DB >> unit_Info.name >> unit_Info.unitid >> unit_Info.credits;


	return reading_Student_DB;
}


ostream& operator << (ostream& writing_Student_DB, const unit & unit_Info)
{
	writing_Student_DB

		<< "Unit Name    :  " << unit_Info.name    << '\n'
		<< "Unit ID Code :  " << unit_Info.unitid  << '\n'
		<< "Credits      :  " << unit_Info.credits << '\n';


	return writing_Student_DB;
}