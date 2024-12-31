#include <algorithm>
#include <iomanip>
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

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long double n,a[5005],res = 0, ans = 0; cin >> n;
	for(int i = 0; i < n; i++) {
        cin >> a[i];
        res += a[i];
	}
	res /= n;
	for(int i =0; i < n; i++) {
        ans += (a[i]-res)*(a[i]-res);
	}
	ans /= n;
	ans = sqrt(ans);
	double ans1= 5.55;
	cout << setprecision(15) << ans<<endl;
	cout << setprecision(15)<< ans1 << endl;
	return 0;
}
