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
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=n-1;j>i;j--){
				if(a[j-1]>a[j]){
					int temp=a[j-1];
					a[j-1]=a[j];
					a[j]=temp;
				}
			}
		}
		for(int i=0,j=n-1;j>=i;i++,j--){
			if(i!=j) cout << a[j] << " " << a[i] << " ";
			else cout << a[i] << " ";
		}
		cout << endl;
	}

return 0;
}

