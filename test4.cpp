/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
include
###End banned keyword*/

#include <iostream>
#include <string>
using namespace std;

typedef struct PhanSo {
 int tu;
 int mau;

 }PS;
 struct DIEM{
 float x;
 float y;
 };
 struct VECTOR{
     float x;
     float y;
     float z;
 };
 struct ngaythang{
 int ngay;
 string thang;
 int nam;
 };
 struct nhancong{
 string ten,quequan;
 float bacluong;
 ngaythang ngaysinh;

 };




int main()
{
    string test;cin>>test;

    PhanSo a={1,2}; PS b;
    cout<<a.tu<<"/"<<a.mau<<endl;

    DIEM M = {0.5,0.7};
    cout<<"("<<M.x<<","<<M.y<<")"<<endl;

    VECTOR P = {1.2,0.3,1};
    cout<<"P("<<P.x<<","<<P.y<<","<<P.z<<")"<<endl;

    nhancong nguoi_a ={"Hoang Nam","TP HCM",3.4,10,"Mot",1999} , nguoi_b ={"Thuy Van","Dong Nai",4,21,"Muoi Hai",1990}; // 1. T?o 2 nh n c ng ng??i a, ng??i b
    cout << nguoi_a.ten;		// 2. Xu?t t n c?a ng??i a
    float S = nguoi_a.bacluong + nguoi_b.bacluong;//	3. C?ng b?c l??ng c?a ng??i a v  ng??i b
    cout<<nguoi_b.ngaysinh.nam; //4. Xu?t ng y sinh c?a ng??i b



    return 0;
}
