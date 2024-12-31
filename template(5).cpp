/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/
#include <iostream>

using namespace std;

//###INSERT CODE HERE -



int main()
{
    Diem a[100];
    int n;
    nhapDSDiem(a,n); // Nhap danh sach cach diem trong mat phang Oxy
    cout<<"Danh sach diem trong mat phang Oxy:\n";
    xuatDSDiem(a,n); // Xuat danh sach cac diem, moi diem tren 1 dong

    Diem M;
    cout<<"\nNhap mot diem de kiem tra: ";
    cin>>M.x>>M.y;
    cout<<"\nDiem ("<<M.x<<","<<M.y<<") "<<gocPhanTu(M); //Kiem tra diem co nam tren cac truc toa do hoac thuoc goc phan tu thu may trong mat phang Oxy

    cout<<"\nKiem tra toan bo danh sach diem da nhap:\n";
    gocPhanTu(a,n);

    return 0;
}

