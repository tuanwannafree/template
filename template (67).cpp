/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

void Nhapmang(int a[][MAX], int &n) {
    cin >> n;
    int b[1005];
    b[1] = b[2] = 1;
    int fn1 = 1, fn2 = 0, fn;
    for(int i = 2; i < 100 ; i++) {
        fn = fn1 + fn2;
        b[i]=fn;
        fn2 = fn1;
        fn1 = fn;
    }
//    for(int i = 1 ; i < 20; i++){
//        cout << b[i] <<" ";
//    }
    for(int i = 1;i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            a[i][j] = b[i+j-1];
        if( a[i][j] == 0) {
            cout << i << " " <<j << endl;
        }
       }
    }

}

void Xuatmang(int a[][MAX], int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);

    return 0;
}
