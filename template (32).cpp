
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;

bool checkchan = false, checkle = false;

bool check( int a) {
    return a % 2 == 0;
}

int main()
{
    int n, a[100];
    cin>>n;
    if( n== 0) {
        cout <<"Mang rong";
        return 0;
    }
    for (int i=0;i<n;i++) {
        cin>>a[i];
        if(check(a[i])) {
            checkchan = true;
        }
        else {
            checkle = true;
        }
    }

    if((checkchan && !checkle)) {
        cout << "Mang chua toan so chan";
    }
    if((!checkchan) && checkle) {
        cout <<"Mang chua toan so le";
    }
    if(checkchan && checkle) {
        cout <<"Mang khong chua toan so chan hay so le";
    }

    return 0;
}
