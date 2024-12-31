/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
string
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

//###INSERT CODE HERE -

int main()
{
	char s[MAX];
	cin.getline(s, 299);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

