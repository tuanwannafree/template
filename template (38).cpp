/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
[
###End banned keyword*/

#include <iostream>
using namespace std;

int gcd( int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    int hour1, minute1, second1,hour2, minute2, second2; cin >> hour1 >> minute1 >> second1 >>hour2>>minute2>> second2;
    int time1 = hour1 * 3600 + minute1 * 60 + second1;
    int time2 = hour2 * 3600 + minute2 * 60 + second2;
    cout << time2 / gcd(time1, time2) << " "<<time1 / gcd(time1, time2);


    return 0;
}
