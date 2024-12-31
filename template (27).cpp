/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
[
string
###End banned keyword*/
#include <iostream>
using namespace std;

int n, mina = -300000000, res;

void check(int a) {
    int b[1000];
    int tmp = a;
    int chuso =0;
    while(tmp>0) {
        b[chuso] = tmp % 10;
        cout << b[chuso] << " ";
        tmp /= 10;
        chuso++;
    }
    for(int i = chuso; i >= 0; i--) {
        cout << b[i] <<" ";
    }
}

int main() {
    int n; cin >> n;
    int mina = -300000000;
    int res;
    for(int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        check(tmp);
    }
}



