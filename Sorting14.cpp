#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, count=0, max=-999999, min=999999;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			if(min>a[i]) min = a[i];
			if(max<a[i]) max = a[i];
		}
		for(int i=min;i<=max;i++){
			int k=0;
			for(int j=0;j<n;j++){
				if(i==a[j]) k=1;
			}
			if(k!=1) count++;
		}
		cout << count << endl;
	}

return 0;
}

