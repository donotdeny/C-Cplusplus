#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, max = -99999, count = 0;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i != j && i < j && max < arr[j] - arr[i]){
					max = arr[j] - arr[i];
					count++;
				}
			}
		}
		if(count!=0) cout << max << endl;
		else cout << "-1" << endl;
	}

return 0;
}

