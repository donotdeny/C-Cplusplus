#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long x, y, p, k=1;
		cin >> x >> y >> p;
		for(int i=1;i<=y;i++){
			k*=x;
			k%=p;
		}
		cout << k << endl;
	}

return 0;
}

