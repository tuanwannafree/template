
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;


void input(int ra[100], int a) {
    for( int i =0; i< a; i++) {
        cin >> ra[i];
    }

}

void output(int rb[100], int b) {
    for( int i =0; i< b; i++) {
        cout<<rb[i]<<" ";
    }
}
int main()
{

    int a, b; cin >> a>> b;
    int ra[100];
    int  rb[100],c[1000];
    input(ra,a);
    input(rb, b);
    int i =0;
    for(; i < a; i++) {
        c[i] = ra[i];
    }
    for(; i < a + b; i++) {
        c[i] = rb[i-a];
    }
    output(c, a + b);



}
