#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long d[101] = {0};
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	for(int i = 4; i <= 100; i++){
		d[i] = d[i-1] + d[i-2] + d[i-3];
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << d[n] << endl;
	} 

return 0;
}

