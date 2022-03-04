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
		for(int i = 1; i < n; i++, size--){
			for(int j = 0; j < size; j++){
				b[i][j] = b[i-1][j] + b[i-1][j+1];
			}
		}
		for(int i = n - 1; i >= 0; i--, size++){
			cout << "[";
			for(int j = 0; j <= size; j++){
				cout << b[i][j];
				if(j < size) cout << " ";
				else cout << "]";
			}
			cout << " ";
		}	
		cout << endl;
	}

return 0;
}

