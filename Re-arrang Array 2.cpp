#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, count=0;
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]==0) count++;
		}
		for(int i=0;i<n;i++){
			if(a[i]!=0) cout << a[i] << " ";
		}
		for(int i=0;i<count;i++){
			cout << "0 ";
		}
		cout << endl;
	}

return 0;
}

