/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>

using namespace std;

//###INSERT CODE HERE -



int main()
{
    int n, a[100];
    inputArray(a,n);
    cout<<"Array:"<<endl;
    outputArray(a,n);
    cout<<endl;
    if (isTotalSquare(a,n)==1)
    {
        cout <<"Mang toan so chinh phuong"<<endl;
        cout << "So chinh phuong lon nhat: "<<maxSquare(a,n);
    }
    else cout<<"Mang khong phai chua toan cac so chinh phuong";


    return 0;
}
