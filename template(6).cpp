/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

//###INSERT CODE HERE -

int main() {
    DATHUC *A, *B;
    A = Nhap();
    B = Nhap();
    cout << "Da thuc A: "; Xuat(*A);
    cout << "\nDa thuc B: "; Xuat(*B);
    cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}
