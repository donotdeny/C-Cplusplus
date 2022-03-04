#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k, key = 0;
		cin >> n >> k;
		int arr[k+1], count = 0, size = n - k + 1;
		for(int i = 1; i <= k; i++){
			cin >> arr[i];
		}
		for(int i =  k ; i > 0; i--){
			if(arr[i] != n - k + i){
				arr[i]++;
				for(int j = i + 1; j <= k; j++){
					arr[j] = arr[i] + j -i;
				}
				break;
			}
		}
		for(int i = 1; i <= k; i++){
			if(arr[i] == size++) count++;
		}
		if(count == k) cout << "1 2 3";
		else {
			for(int i = 1; i <= k; i++){
			cout << arr[i] << " ";
			}
		}
		cout << endl;
	}

return 0;
}

