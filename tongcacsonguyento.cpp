#include <algorithm>
#include <bitset>
#include <cctype>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <unordered_map>
#include <vector>
#define ll long long
#define pb push_back
#define _for(i,a,b) for(int i = a, i < b; i++)
#define _ford(i,a,b) for(int i = a, i > b; i--)
#define ln endl
using namespace std;

bool check( int a) {
    if( a <= 1) {
        return false;
    }
    if( a == 3 || a == 5 || a == 7 ) {
        return true;
    }
    for(int i = 2; i < a; i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin >> n;
	int a[55];
	int b[55];
	int cnt = 0;
	int res = 0;
	bool test1 = false;
	bool test = false;
	for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(check(a[i])) {
            test1 = true;
            res += a[i];
            b[cnt++] = a[i];
        }
	}
	if(!test1) {
        cout << "Khong co so nguyen to";
        return 0;
	}
	else {
        for( int i =0; i < cnt; i++) {
            if(res % b[i] == 0) {
                test = true;
            }
        }
        if(test) {
            cout <<"YES";
        }
        else {
            cout <<"NO";
        }

	}

	return 0;
}
