#include "lab.h"

bool IsLeapYear(int Year)
{
    if ((Year % 400 == 0 || Year % 100 != 0) && (Year % 4 == 0))
        return true;
    else
        return false;
}
