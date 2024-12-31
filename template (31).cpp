
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;

void inputArray( int* a, int &na, int* b, int &nb) {
    cin >> na >> nb;
    for( int i =0; i< na; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < nb; i++) {
        cin >> b[i];
    }

}

void outputArray(int a[100], int na) {
    for( int i =0; i< na; i++) {
        cout<<a[i]<<" ";
    }
}

void connect(int* a, int &na, int* b, int &nb, int* c, int &nc) {
    nc= na + nb;
    int d[100];
    int i =0;
    for(; i < nb; i++) {
        c[i] = b[i];
    }
    int tmp = na-1;
    for(; i < na + nb; i++) {
        c[i] = a[tmp--];
    }
}

int main()
{
    int na, a[100], nb, b[100], nc, c[100];
    inputArray(a,na,b,nb);
    cout<<"Array a: "   ;outputArray(a,na);
    cout<<"\nArray b: " ;outputArray(b,nb);

    connect(a,na,b,nb,c,nc);

    cout<<"\nArray c: ";outputArray(c,nc);

    return 0;
}
