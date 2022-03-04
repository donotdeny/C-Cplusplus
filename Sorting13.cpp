#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m], c[n+m];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<m;i++){
			cin >> b[i];
		}
		for(int i=0;i<n;i++){
			c[i]=a[i];
		}
		for(int i=n,j=0;i<n+m;i++,j++){
			c[i]=b[j];
		}
		for(int i=0;i<n+m-1;i++){
			for(int j=i+1;j<n+m;j++){
				if(c[i]>c[j]){
					int temp = c[i];
					c[i] = c[j];
					c[j] = temp;
				}
			}
		}
		for(int i=0;i<n+m;i++){
			cout << c[i] << " ";
		}
		cout << endl;
	}

return 0;
}

