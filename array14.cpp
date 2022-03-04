#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k, l=0;
		cin >> k >> n;
		int a[k][n];
		int b[k*n];
		for(int i=0;i<k;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
				b[l]=a[i][j];
				l++;
			}
		}
		for(int i=0;i<n*k-1;i++){
			for(int j=i+1;j<n*k;j++){
				if(b[i]>b[j]){
					int temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		for(int i=0;i<n*k;i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}

return 0;
}

