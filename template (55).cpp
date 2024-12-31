
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;


struct DATE
{
    int day, month, year;
};
typedef struct STUDENT
{
    char id[11];
    char name[35];
    DATE dob;
    float math, phy, chem, aver;

} SV;

//###INSERT CODE HERE -


int main()
{
    STUDENT a[100];
    int n;

    inputArrayStudents(a,n);
    cout<<"ID\t|Full name\t|Date of birth\t|Maths\t|Phys\t|Chemis\t|Average score\n";
    outputArrayStudents(a,n);

    return 0;
}

