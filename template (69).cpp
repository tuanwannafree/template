#include <iostream>
using namespace std;

const int MAX = 1000;

void input(unsigned int arr[][MAX], unsigned int &m, unsigned int &n);
unsigned int countPrimeInAB(unsigned int arr[][MAX], unsigned int m, unsigned int n, unsigned int a, unsigned int b);

// Function to check if a number is prime
bool isPrime(unsigned int num) {
    if (num <= 1) return false;
    for (unsigned int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

unsigned int countPrimeInAB(unsigned int arr[][MAX], unsigned int m, unsigned int n, unsigned int a, unsigned int b) {
    unsigned int count = 0;
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            if (arr[i][j] >= a && arr[i][j] <= b && isPrime(arr[i][j])) {
                count++;
            }
        }
    }
    return count;
}

void input(unsigned int arr[][MAX], unsigned int &m, unsigned int &n) {
    cin >> m >> n;
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    unsigned int a;
    unsigned int b;
    unsigned int arr[MAX][MAX];
    unsigned int m;
    unsigned int n;

    cin >> a >> b;
    input(arr, m, n);
    unsigned int res = countPrimeInAB(arr, m, n, a, b);
    cout << res;

    return 0;
}
