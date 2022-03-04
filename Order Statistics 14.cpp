#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int x, int arr[], int N)
{
	int left = 0, right = N-1, j=0;
	while(left <= right){
		int mid = (left+right)/2;
		if(arr[mid] == x){
			for(int i=mid;;i++){
				if(arr[i] != arr[mid]) return mid+j;
				else j++;
			}
		}
		else if(arr[mid] < x) 
			left = mid+1;
		else right = mid-1;
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, max=-9999999;
		cin >> n;
		int a[n], b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(max < a[i]) max = a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		for(int i=0;i<n;i++){
			if(max == a[i]) cout << "_ ";
			else cout << b[binarySearch(a[i], b, n)] << " ";
		}
		cout << endl;
	}

return 0;
}

