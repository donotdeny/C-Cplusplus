#include<iostream>
using namespace std;

int last(int arr[], int n, int k){
	int c = n - k + 1;
	for(int i = 1; i <= k; i++){
		if(arr[i] != c) return false;
		c++;
	} 
	return true;
}

void nextGen(int arr[], int n, int k){
	for(int i = k; i > 0; i--){
		if(arr[i] != n - k + i){
			arr[i]++;
			for(int j = i + 1; j <= k; j++){
				arr[j] = arr[i] + j - i;
			}
			break;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int count = k;
		int arr[n+1], temp[n+1];
		for(int i = 1; i <= k; i++){
			cin >> arr[i];
			temp[i] = arr[i];
		}
		if(last(arr, n, k)) cout << k << endl;
		else{
			nextGen(arr, n, k);
			for(int i = 1; i <= k; i++){
				int key = 0;
				for(int j = 1; j <= k; j++){
					if(temp[i] == arr[j]) key = 1;
				}
				if(key == 1) count--;
			}
			cout << count << endl;
		}
	}
	
return 0;
}
