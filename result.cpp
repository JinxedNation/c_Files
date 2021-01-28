#include "result.h"

result::result(float temp_Result)
{
	result_Achieved = temp_Result;
}

istream& operator >>(istream& reading_Student_DB, result & final_Result)
{
	for (int unit_Count = 0; unit_Count < 4; unit_Count++)
	{
		reading_Student_DB >> final_Result.unitInformation[unit_Count]
		                   >> final_Result.result_Achieved;
	}
	
	return reading_Student_DB;
}


ostream& operator <<(ostream& writing_Student_DB, const result & final_Result)
{
	for (int unit_Count = 0; unit_Count < 4; unit_Count++)
	{
		writing_Student_DB << final_Result.unitInformation[unit_Count] << '\n'
			               << "Mark Achieved is : " << final_Result.result_Achieved << '\n';
	}

	return writing_Student_DB;
}