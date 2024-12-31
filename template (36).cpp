/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>

using namespace std;


int res = -3000000;
double sqrtNumber(double num) {
    double low = 0;
    double high = num;
    double mid = 0;
    while(high - low > 0.0000001) {
        mid = low + (high - low) / 2;
        if( mid * mid > num) {
            high = mid;
        } else {
            low = mid;
        }
    }
    return mid;
}


bool isquare = 1;
void inputArray(int* a, int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cout << sqrtNumber(n);
        cout << (int) sqrtNumber(n) << endl;


        res = (res > a[i]) ? res : a[i];
    }
}


bool check( double n) {
   cout << (sqrtNumber(n));
   cout << ((int) sqrtNumber(n));
    return (sqrtNumber(n) == (int) sqrtNumber(n));
}

void outputArray(int* a, int &n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}


bool isTotalSquare(int* a, int n) {
    cout << isquare;
    return isquare;
}

int maxSquare(int* a, int n) {
    return res;
}



int main()
{
    int n, a[100];
    inputArray(a,n);
    cout<<"Array:"<<endl;
    outputArray(a,n);
    cout<<endl;
    if (isTotalSquare(a,n)==1)
    {
        cout <<"Mang toan so chinh phuong"<<endl;
        cout << "So chinh phuong lon nhat: "<<maxSquare(a,n);
    }
    else cout<<"Mang khong phai chua toan cac so chinh phuong";


    return 0;
}
