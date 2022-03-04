#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, pos, k=0;
		cin >> n >> pos;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			if(pos==a[i]){
				cout << "1" << endl;
				k=1;
				break;
			}
		}
		if(k!=1) cout << "-1" << endl;
	}

return 0;
}

