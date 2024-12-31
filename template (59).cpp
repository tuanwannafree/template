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

bool check(int y, int a) {
    if(y == 0) {
        return false;
    }
    while(a > 0) {
        if(a % 10 == y || a % 100 == y) {
            return true;
        }
        a /= 10;
    }
    return false;
}

void NhapmangSNT(int is_prime[100], int& n) {
    cin >> n;
    int dem = 0;
    int a[1000];
    for( int i = 2; i <= 1000; i++) {
        a[i] = 1;
    }
    for(int i = 2; dem != n; i++) {
        if(a[i]) {
            for(int j = i * i; j <= 1000; j+=i) {
                a[j] = 0;
            }
            if(a[i]) {
                dem++;
            }
        }
    }
    for(int i = 0, dem = 0; dem != n; i++) {
        if(a[i]) {
            is_prime[dem++] = i;
        }
    }
//    for(int i = 0; i <n; i++) {
//        cout << is_prime[i] << " ";
//   }

}

int SoPhanTuChuaY(int a[], int n, int y) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
        if(check(y,a[i])){
            ans++;
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
