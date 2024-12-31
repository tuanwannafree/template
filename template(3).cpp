
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
ucln
%
###End banned keyword*/

#include <iostream>
using namespace std;

int ucln (int a, int b){

    //###INSERT CODE HERE -

}

int main (){
	int n,m ;
	cin >> n >> m;
    if (ucln(n,m)==-1) cout <<n<<" va "<<n<<" khong co UCLN";
	else cout<<"UCLN cua "<<n<<" va "<<m<<" la "<<ucln(n,m);

	return 0;
}
