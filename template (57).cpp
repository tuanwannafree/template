/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include <iostream>
#include <cmath>
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
    int n,i;
    char name[35];

    inputArrayStudents(a,n);

    cout<<"\nFind a student with name: ";
    cin.ignore();
    cin.getline(name,35);
    i = findStudent(a,n,name);
   if(i==-1) cout<<"\nNo Found.";
   else
   {
        cout<<"\nID\t|Fullname\t|Date of birth\t|Maths\t|Phys\t|Chemis\t|Average score\n";
        outputStudent(a[i]);
    }

    return 0;
}

