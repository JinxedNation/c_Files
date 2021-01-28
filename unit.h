#pragma once
#include <iostream>
#include <string.h>  

using namespace std;
const unsigned  UnitName_Size = 10;

class unit 
{
public:
    unit();
    unit(const char * temp_Name, const char * temp_Unit_ID, unsigned temp_Credits);


//const char get_Unit_Name();
    
    const char Get_Unit_ID();
    unsigned   GetCredits() const;

/// void set_Name  (const char temp_Unit_Name);
    void Set_Unit_ID(const char temp_Unit_ID);
    void SetCredits(unsigned    temp_Credits);

    friend ostream& operator << (ostream& writing_Student_DB,   const unit& U);
    friend istream& operator >> (istream& reading_Student_DB,         unit& U);

private:
    char name[UnitName_Size];
    char unitid[UnitName_Size];
    int  credits;
};


inline unsigned unit::GetCredits() const
{
    return credits;
}

const char unit::Get_Unit_ID()
{
    return unitid[UnitName_Size];
}


inline void unit::SetCredits(unsigned temp_Credits)
{
    credits = temp_Credits;
}


void unit::Set_Unit_ID(const char temp_Unit_ID)
{
    unitid[UnitName_Size] = temp_Unit_ID;
}

