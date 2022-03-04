#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n-1;i++){
			if(a[i]!=a[i+1]) k=1;
		}
		if(k!=1) cout << "-1" << endl;
		else {
		 	for(int i=0;i<n-1;i++){
		 		for(int j=i+1;j<n;j++){
		 			if(a[i]>a[j]){
		 				int temp=a[i];
						a[i]=a[j];
			 			a[j]=temp;
		 			}
				}
			}
			for(int i=0;i<n-1;i++){
				if(a[i]!=a[i+1]){
					cout << a[i] << " " << a[i+1] << endl;
					break;
				}
			}
		}	
	}

return 0;
}

