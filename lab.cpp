#include "lab.h"

bool IsLeapYear(int Year)
{
    if ((Year % 400 == 0 || Year % 100 != 0) && (Year % 4 == 0))
        return true;
    else
        return false;
}
int DaysInYear(int Year)
{
    if(IsLeapYear(Year))
        return 366;
    else return 365;
}
