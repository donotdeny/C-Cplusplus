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
			a[i]=0;
			cout << a[i];
		}
		cout << " ";
		for(int i=n-1;i>=0;i--){
			if(a[i]==0){
				a[i]=1;
				for(int j=i+1;j<n;j++){
					a[j]=0;
				}
				for(int j=0;j<n;j++){
					cout << a[j] ;
				}
				cout << " ";
				i=n;
			}
		}
		cout << endl;
	}

return 0;
}

