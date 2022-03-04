#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k, l=0;
		cin >> n >> k;
		int a[n][n];
		int b[n*n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
				b[l]=a[i][j];
				l++;
			}
		}
		for(int i=0;i<n*n-1;i++){
			for(int j=i+1;j<n*n;j++){
				if(b[i]>b[j]){
					int temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		cout << b[k-1] << endl;
	}

return 0;
}

