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
int DaysInYearRange(int a, int b)
{
    int res;
    for (int i = a; i<=b; i++)
    {
        if(IsLeapYear(Year))
        res+=366;
        else 
            res+=365;
    }
    return res;
}
