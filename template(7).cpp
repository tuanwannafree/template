/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

//###INSERT CODE HERE -

int main() {
    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}
