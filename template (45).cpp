
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;

void inputArray(int* a, int& n) {
    cin >> n;
    for(int i =0; i < n; i++) {
        cin >> a[i];
    }
}

void outputArray(int* a, int& n) {
    for(int i =0; i < n; i++) {
        cout << a[i]<<" ";
    }
}

int vitriMinDau(int a[100], int n) {
    int mina = 300000000;
    int res;
    bool check = true;
    for(int i =0 ;i < n; i++) {
        mina = min(mina, a[i]);
    }
    for(int i = 0; i < n; i++) {
        if(mina == a[i] && check) {
            res = i;
            check = false;
        }
    }
    return res;
}

int vitriMinCuoi(int a[100], int n) {
    int mina = 300000000;
    for(int i =0 ;i < n; i++) {
        mina = min(mina, a[i]);
    }
    int res;
    for(int i =0 ;i < n; i++) {
        if(mina == a[i]) {
            res = i;
        }
    }
    return res;
}


int main()
{
    int n, a[100];
    inputArray(a,n);
    cout<<"Array:"<<endl;
    outputArray(a,n);
    cout<<endl;


    cout<<"Vi tri phan tu nho nhat dau tien trong mang: " << vitriMinDau(a,n)<<endl;
    cout<<"Vi tri phan tu nho nhat cuoi cung trong mang: "<<vitriMinCuoi(a,n)<<endl;

    return 0;
}
