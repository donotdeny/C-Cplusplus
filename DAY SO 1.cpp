#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, size;
		cin >> n;
		size = n - 1;
		int arr[n], b[n][n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			b[0][i] = arr[i];
		}
		cout << "[";
		for(int i = 0; i < n; i++){
			cout << arr[i];
			if(i < n-1) cout << " ";
			else cout << "]";
		}
		cout << endl;
		for(int i = 1; i < n; i++, size--){
			for(int j = 0; j < size; j++){
				b[i][j] = b[i-1][j] + b[i-1][j+1];
			}
		}
		size = n - 1;
		for(int i = 1; i < n; i++, size--){
			cout << "[";
			for(int j = 0; j < size; j++){
				cout << b[i][j];
				if(j < size - 1) cout << " ";
			}
			cout << "]" << endl;
		}
		cout << endl;
	}

return 0;
}

