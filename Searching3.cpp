#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n-1;i++){
			cin >> a[i];
		}
		for(int i=1;;){
			int k=0;
			for(int j=0;j<n-1;j++){
				if(i==a[j]) k=1;
			}
			if(k!=1){
				cout << i << endl;
				break;
			}
			else i++;
		}
	}

return 0;
}

