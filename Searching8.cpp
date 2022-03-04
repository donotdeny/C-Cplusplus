#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k, count=0;
		cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			if(k==a[i]) count++;
		}
		if(count!=0) cout << count << endl;
		else cout << "-1" << endl;
	}
	

return 0;
}

