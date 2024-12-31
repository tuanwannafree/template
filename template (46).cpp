/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;

#define MAX 500

void Nhapmang(int a[], int &n);
void Xuatmang(int a[], int n);
long long TichSole_VTSNT(int a[], int n);


int main()
{
    int a[MAX], n;
    Nhapmang(a,n);
    if(n <= 1) {
        return 0;
    }
    Xuatmang(a,n);
    cout<< endl;
    if(TichSole_VTSNT(a,n) == 1) {
        cout<<"Khong tim duoc so le o vi tri la so nguyen to, tich la: 0";
    }
    else {
        cout << "Tich cac so le o vi tri la so nguyen to la: "<<TichSole_VTSNT(a,n);
    }
}

bool check(int n) {
    if(n <= 1) {
        return false;
    }
    if( n == 2 || n == 3 || n == 5 || n == 7 ) {
        return true;
    }
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

void Nhapmang(int a[], int& n) {
    cin >> n;
    if(n <= 1) {
        cout <<"Mang rong.";
    }
    else {
        for(int i =0 ; i< n; i++) {
            cin >> a[i];
        }
    }
}

void Xuatmang(int a[], int n) {
    for(int i =0 ; i< n; i++) {
        cout << a[i] <<" ";
    }

}

long long TichSole_VTSNT(int a[], int n) {
    long long res = 1;
    for(int i = 0; i < n; i++) {
        if(check(i) && a[i] % 2 ) {
            res *= a[i];
        }
    }
    return res;
}


