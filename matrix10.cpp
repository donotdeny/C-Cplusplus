#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> m >> n;
		int a[m][n], b[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
				b[i][j]=a[i][j];
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]==1){
					for(int k=0;k<n;k++){
						b[i][k]=1;
					}
					for(int l=0;l<m;l++){
						b[l][j]=1;
					}
				}
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

return 0;
}

