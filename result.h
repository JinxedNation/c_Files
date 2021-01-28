#pragma once

#include <iostream>
#include "unit.h"

using namespace std;
const unsigned  MAX_UNITS = 10;

/// Result will contain a unit (one Unit object, from exc. 1 above) and the mark (one floating point number)
/// output operator for Result should output the unit information and the mark.
class result
{
public:
	result();
	result(float temp_Result);
	
	
	float get_Result_Achieved();
	void  set_Result_Achieved(float temp_Result);


	friend ostream& operator <<(ostream & writing_Student_DB, const result & final_Result);
	friend istream& operator >>(istream & reading_Student_DB,       result & final_Result);

private:
	float result_Achieved;
	unit  unitInformation[MAX_UNITS];
};

float result::get_Result_Achieved()
{
	return result_Achieved;
}

void result::set_Result_Achieved(float temp_Result)
{
	result_Achieved = temp_Result;
}