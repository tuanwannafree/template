/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
[
]
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;

int countn( int n) {
    int dem = 0;
    while(n > 0) {
        dem++;
        n /= 10;
    }
    return dem;
}

int reverseNumber(int n) {
    int res = 0;
    int dem  = countn(n);
    while(n > 0) {
        res += (n % 10) * pow(10,dem-1);
        dem--;
        n/=10;

    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << reverseNumber(n);
}
