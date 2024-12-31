/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
[
]
###End banned keyword*/

#include <iostream>
#include <cmath>
using namespace std;

int ra[5] = {1958764,5893475,5465, 12355, 98695};

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

bool isPrime( int n) {
    if( n <= 7) {
        return n==2 || n == 3 || n == 5 || n == 7;
    }

    for( int i = 0; i < 5 ; ++i) {
        int a = ra[i] % (n - 3)  +2;
        if(binaryPower(a, n - 1, n) != 1) {
            return false;
        }

    }
    return true;
}

int sum_common_prime(int m, int n) {
    int sum = 0;
    for(int i = 2; i <= sqrtmax(m,n);i++) {
        if( m % i == 0 && n % i == 0 && isPrime(i) ) {
            sum += i;
        }
    }
    if(sum == 0) {
        sum = -1;
    }
    return sum;
}


int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}
