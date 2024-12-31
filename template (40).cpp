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
#include <iomanip>
using namespace std;



int main() {
    double n; cin >> n;
    double res = 0;
    int dem = 1;
    while(dem <= n) {
        res = res + dem;
        res = sqrt(res);
        dem++;
    }
    cout <<setprecision(2)<<fixed<<res;
}
