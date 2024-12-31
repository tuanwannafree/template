/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int res = 0;
    if(d >= a) {
        res++;
        d-=a;
    }
    if(d >= b && (d - a) / b <= 9 ) {
        res += (d -a )/ b;
        d = d - res + a;

    if( d >= b && (d - a) / b > 9) {
        res = 10;
        d -= a + 9 * b;
    }
    if(d >= c) {
        res += d/ c;
    }
    cout << res;
}
