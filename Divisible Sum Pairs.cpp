#include<iostream>
using namespace std;

bool isDivisible(int n, int k){
	if(n % k == 0) return true;
	return false;
}

int main()
{
	int n, k, count = 0;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	} 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			int temp = arr[i] + arr[j];
			if(isDivisible(temp, k)) count++;
		}
	}
	cout << count;

return 0;
}

