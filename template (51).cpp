



/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);

void NhapmangSNT(int is_prime[MAX], int& n) {
    cin >> n;
    for( int i = 2; i <= 100; i++) {
        is_prime[i] = true;
    }
    for(int i = 2; i * i <= 100; i++) {
        if(is_prime[i]) {
            for(int j = i * i; j <= 100; j+=i) {
                is_prime[j] = false;
            }
        }
    }
}

bool check(int y, int a) {
    while(a > 0) {
        if(a % 10 == y) {
            return true;
        }
        a /= 10;
    }
    return false;
}

int SoPhanTuChuaY(int is_prime[MAX], int n, int y) {
    int dem = 0;
    int ans = 0;
    for(int i = 2; dem < n; i++) {
        if(is_prime[i]) {
            dem++;
            if(check(y,i)) {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}
