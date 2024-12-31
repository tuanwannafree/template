/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<cstdio>

using namespace std;

//###INSERT CODE HERE -

int main()
{
    HOPSUA a[100];
    int n;
    cout<<"Nhap danh sach hop sua: "<<endl;
    nhapDSHopSua(a,n);// Nhap danh sach cac hop sua
    cout<<"\nNhap ngay kiem tra: "<<endl;
    ngay y;
    cin>>y.ng>>y.thang>>y.nam;
    cout<<"\nSo luong hop sua qua han: "<<soLuongQuaHan(a,n,y);

    return 0;
}
