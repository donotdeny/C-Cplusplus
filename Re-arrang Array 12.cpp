#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		long long max=-999999;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		if(n==1) max=a[0];
		for(int i=0;i<n-1;i++){
			long long value=a[i];
			for(int j=i+1;j<n;j++){
				value*=a[j];
				if(max<value) max=value;
			}
		}
		cout << max << endl;
	}

return 0;
}

