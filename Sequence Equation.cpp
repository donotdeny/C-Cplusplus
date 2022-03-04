#include<iostream>
using namespace std;

int solution(int arr[], int n, int number){
	for(int i = 0; i < n; i++){
		if(number == arr[i]) return i+1;
	}
	return 0;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	} 
	for(int i = 1; i <= n; i++){
		cout << solution(arr, n, solution(arr, n, i)) << endl;
	}

return 0;
}

