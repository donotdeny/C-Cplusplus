#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, count=0, size=0;
		cin >> n;
		long long *a = new long long(n);
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]==0) count++;
		}
		int arr[10];
		if(count>0) arr[size++] = 0;
		for(int i=0;i<10;i++){
			int key = 0, k=0;
			for(int j=0;j<n;j++){
				long long temp = a[j];
				while(temp>0){
					if(temp % 10 == i){
						key = 1;
						k = 1;
						break;
					}
					temp /= 10;
				}
				if(k == 1) break;
			}
			if(key == 1) arr[size++] = i;
		}
		for(int i=0;i<size;i++){
			int lock=0;
			for(int j=0;j<i;j++){
				if(arr[i] == arr[j]) lock=1;
			}
			if(lock!=1) cout << arr[i] << " ";
		}
		cout << endl;
	}

return 0;
}

