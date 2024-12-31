/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	//gets(s);	//Nhap chuoi s
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

int myStrlen(char s[], int k) {
    k = 0;
    while(s[k]) k++;
    return k;
}

int myStrcmp(char s1[MAX], char s2[MAX]) {
        for(int i =0; i < myStrlen(s1,0); i++) {
            if(s1[i] != s2[i]) {
                return 1;
            }
        }
        return 0;

}


void DemKyTu(char s[]) {
    cout << myStrlen(s,0);
}
