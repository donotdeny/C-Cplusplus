#include<iostream>
using namespace std;

int n, s;
int arr[205];

void Try(int i){
	for(int j=0;j<=1;j++){
		arr[i] = j;
		if(i == n){
			int sum = 0;
			for(int i = 1; i <= n; i++){
				if(arr[i] == 1) sum += a[i];
			}
			if(sum == s){
				cout << "YES" << endl;
				return;
			}
		}
		else Try(i+1);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >> n >> s;
		int a[n+1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		Try(1);
	}

return 0;
}

