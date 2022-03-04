#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, count=0, k=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]==a[j]){
					count++;
					cout << a[i] << endl;
					k=1;
					break;
				}
			}
			if(k==1) break;
		}
		if(count==0) cout << "-1" << endl;
	}
	

return 0;
}

