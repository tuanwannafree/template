
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;

int dem_x( int x) {
    int dem = 0;
    if( x < 0) {
        dem++;
    }
    x = abs(x);
    while(x > 0) {
        dem++;
        x /= 10;
    }
    return dem;
}

int ham_x(int a[1000000], int n){
    int dem = 0;
    for(int i = 0; i < n; i++) {
        int tmp = a[i];
        dem += dem_x(tmp);
    }
    return dem;
}

int main()
{
    int n, a[1000000], dem = 0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout << ham_x(a,n);

    return 0;
}
