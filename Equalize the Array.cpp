#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n], check[101]={};
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		check[arr[i]]++;
	}
	int max = check[0];
	for(int i = 0; i < 101; ++i){
		if(max < check[i]) max = check[i];
	}
	cout << n - max;

return 0;
}

