/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 1000
void input(unsigned int arr[][MAX], unsigned int &m, unsigned int &n);
unsigned int countPrimeInAB(unsigned int arr[][MAX], unsigned int m, unsigned int n, unsigned int a, unsigned int b);
bool Prime(unsigned int x) {
    if( x == 1 || x == 0) {
        return false;
    }
    if( x == 3 || x == 5 || x == 7 ) {
        return true;
    }
    for(int i = 2; i < x; i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}
bool check(unsigned int x, unsigned int a, unsigned int b) {
    if( x >= a && x <= b) {
        return Prime(x);
    }
    else {
        return false;
    }
}

void input(unsigned int arr[][MAX], unsigned int &m, unsigned int &n) {
    cin >> m >> n;
    for(int i = 0; i < m ; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
}

unsigned int countPrimeInAB(unsigned int arr[][MAX], unsigned int m, unsigned int n, unsigned int a, unsigned int b) {
    int res = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            int x = arr[i][j];
            if(x,a,b) {
                res++;
            }
        }
    }
    return res;
}

int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int arr[MAX][MAX];
    unsigned int m;
    unsigned int n;



    cin >> a >> b;
    input(arr, m, n);
    unsigned int res = countPrimeInAB(arr, m, n, a, b);
    cout << res;

    return 0;
}
