/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/


#include <iostream>
#include <random>

using namespace std;

int binaryPower(long long a, int k, int n) {
    a = a % n;
    long long res = 1;
    while(k) {
        if(k & 1) {
            res = (res * a) % n;
        }
        a =(a * a) % n;
        k /= 2;
    }
    return res;
}

bool isPirme( int n) {
    if( n <= 7) {
        return n==2 || n == 3 || n == 5 || n == 7;
    }

    for( int i = 0; i < 5 ; ++i) {
        int a = rand() % (n - 3)  +2;
        if(binaryPower(a, n - 1, n) != 1) {
            return false;
        }

    }
    return true;
}


int main()
{
    int n; cin >> n;
    int a[10000], b[10000], dem = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(isPirme(a[i])) {
            b[dem] = a[i];
            dem++;
        }
    }
    cout << dem<<endl;
    for(int i = 0; i< dem; i++) {
        cout << b[i] << " ";
    }

    return 0;
}
