#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, l=1, temp;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(;;){
			int k=0;
			for(int i=0;i<n;i++){
				if(l==a[i]) k=1;
			}
			if(k!=1){
				cout << l << endl;
				break;
			}
			else l++;
		}
		
	}

return 0;
}

