#include<iostream>
using namespace std;

int abs(int a, int b)
{
	if(a>b) return a-b;
	return b-a;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=n-1;j>i;j--){
				if(abs(a[j-1],x)>abs(a[j],x)){
					int temp=a[j];
					a[j]=a[j-1];
					a[j-1]=temp;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}

return 0;
}

