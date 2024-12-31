/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>

using namespace std;

bool isquare = 1;

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

void inputArray( int *a, int &n) {
    cin >> n;
    for( int i = 0; i < n ; i++) {
        cin >> a[i];
        if( sqrtNumber(a[i]) != (int)sqrtNumber(a[i])) {
            isquare = 0;
        }
        cout << isquare ;
    }
}

int main()
{
    int n, a[100];
    inputArray(a,n);
    cout<<"Array:"<<endl;
//    outputArray(a,n);
    cout<<endl;
//    if (isTotalSquare(a,n)==1)
//    {
//        cout <<"Mang toan so chinh phuong"<<endl;
//        cout << "So chinh phuong lon nhat: "<<maxSquare(a,n);
//    }
//    else cout<<"Mang khong phai chua toan cac so chinh phuong";


    return 0;
}
