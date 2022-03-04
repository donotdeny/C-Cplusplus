#include<iostream>
using namespace std;

void bubbleSort(long long a[], int n)
{
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[j-1]>a[j]){
				int temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		long long a[n], b[m];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<m;i++){
			cin >> b[i];
		}
		bubbleSort(a,n);
		bubbleSort(b,m);
		cout << a[n-1]*b[0] << endl;
	}

return 0;
}

