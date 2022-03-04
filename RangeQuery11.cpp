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
		int n, min=999;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for(int i=0;i<n-1;i++){
			if(min>abs(a[i],a[i+1])) min = abs(a[i],a[i+1]);
		}
		cout << min << endl;
	}

return 0;
}

