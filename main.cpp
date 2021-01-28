#include <iostream>
#include <fstream>

#include "unit.h"          // unit class declaration
#include "result.h"
#include "Registration.h"  // Registration class declaration

using namespace std;

// Main program:
// Open an input file stream, 
// read a Registration object,
// including its list of Results. 
// Redisplay all information,
// calculate the total credits taken. 
//Write the results to a file stream.

int main()
{
    ifstream reading_Database_In_File("reading_Database.txt");
    ofstream write_Student_DB("output_Database.txt");

    Registration registered_Details;

    if(!reading_Database_In_File)
    {
        return -1;
    }

    reading_Database_In_File >> registered_Details;



    write_Student_DB
        << registered_Details
        << "Student  Unit   Count = " << registered_Details.GetCount()   << '\n'
        << "Students Credit Count = " << registered_Details.GetCredits() << '\n';


    return 0;
}

