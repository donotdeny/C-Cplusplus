#include<iostream>
using namespace std;

int min(int arr[], int n){ 
	int minimum = 1000;
	for(int i = 0; i < n; ++i){
		if(minimum > arr[i] && arr[i] > 0) minimum = arr[i];
	}
	return minimum;
}

int available(int arr[], int n){ 
	int count = 0;
	for(int i = 0; i < n; ++i){
		if(arr[i] > 0) ++count;
	}
	return count;
}

bool remainEle(int arr[], int n){ 
	for(int i = 0; i < n; ++i){
		if(arr[i] > 0) return true;
	}
	return false;
}

int main()
{
	int n, temp;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	while(remainEle(arr, n) == true){	
		int temp = min(arr, n);
		cout << available(arr, n) << endl;
		for(int i = 0; i < n; ++i){
			arr[i] -= temp;
		}	
	}

return 0;
}

