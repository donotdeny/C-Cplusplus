#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, dem=0;
		cin >> n;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			int count=1;
			int k=0;
			for(int s=0;s<i;s++){
				if(a[0][s]==a[0][i]) k=1;
			}
			if(k!=1){
				for(int j=1;j<n;j++){
					int key=0;
					for(int k=0;k<n;k++){
						if(a[0][i]==a[j][k]) key=1;
					}
					if(key==1) count++;
				}
				if(count==n) dem++;
			}
		}
		cout << dem << endl;
	}

return 0;
}

