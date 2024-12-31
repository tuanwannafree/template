/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/


#include <iostream>
using namespace std;


void inputMatrix(int a[][100], int &n);

void outputMatrix(int a[][100], int n);

/* Ham kiem tra ma tran co duoc sap xep theo 1 trat tu nao do khong
 La ma tran duoc sap xep neu cac phan tu tren cung 1 dong co thu tu khong giam, tuc la phan tu dung sau lon hon hoac bang phan tu dung truoc*/
int isArrangedmatrix (int a[][100], int n) ;


int main()
{
    int a[100][100];
    int n;
    inputMatrix(a,n);
    cout<<"Matrix: "<<endl;
    outputMatrix(a,n);
}
void inputMatrix(int a[][100], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for( int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void onputMatrix(int a[][100], int n) {
    for(int i = 0; i < n; i++) {
        for( int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

//###INSERT CODE HERE -

