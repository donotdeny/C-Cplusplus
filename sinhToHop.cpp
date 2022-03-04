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

void print(int arr[], int n){
	for(int i = 1; i <= n; i++){
			cout << arr[i];
	}
	cout << " ";
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int arr[n+1];
		for(int i = 1; i <= k; i++){
			arr[i] = i;
		}
		while(last(arr, n, k) == false){
			print(arr, k);
			nextGen(arr, n, k);
		}
		print(arr, k);
		cout << endl;
	}
	
return 0;
}

