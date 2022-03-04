#include<iostream>
using namespace std;

int main()
{
	int n, step = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	for(int i = 0; i < n-1; ++i){
		step++;
		if(arr[i+2] == 0 && i + 2 < n) ++i; // example: arr[6] = {0, 0, 1, 0, 0, 0} => focus to arr[2] == 1
	}
	cout << step;

return 0;
}

