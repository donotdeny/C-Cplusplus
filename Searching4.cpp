#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, pos;
		cin >> n >> pos;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			if(pos==a[i]){
				cout << i+1 << endl;
				break;
			}
		}
	}

return 0;
}

