#include "student.h"
#include <string>
using namespace std;
void student::setName(string first, string last)
{
    fName= first;
    lName=last;
}
string student::fullName()
{
    string name = fName;
    name.append(" ");
    name.append(lName);
    return name;
    
}
