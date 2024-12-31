/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 1000
void input(unsigned int arr[][MAX], unsigned int &m, unsigned int &n);
unsigned int countPrimeInAB(unsigned int arr[][MAX], unsigned int m, unsigned int n, unsigned int a, unsigned int b);

void input(unsigned int arr[][MAX], unsigned int &m, unsigned int &n) {
    cin >> m >> n;
    for(int i = 0; i< m ; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int arr[MAX][MAX];
    unsigned int m;
    unsigned int n;



    cin >> a >> b;
    input(arr, m, n);
    unsigned int res; //= countPrimeInAB(arr, m, n, a, b);
    //cout << res;

    return 0;
}
