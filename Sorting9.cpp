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
			for(int j=0;j<n;j++){
				if(i!=j&&a[i]+a[j]==k) count++;
			}
		}
		cout << count/2 << endl;
	}

return 0;
}

