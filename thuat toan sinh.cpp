#include<bits/stdc++.h>
using namespace std;

int n;
int arr[100];

bool ok()
{
	for(int i = 1, j = n; i <= j; i++, j--){
		if(arr[i] != arr[j]) return false;
	}
	return true;
}

void result()
{
	for(int i=1;i<=n;i++){
		cout << arr[i] << "   ";
	}
	cout << endl;
}

void sinh()
{
	for(int i = n; i > 0; i--){
		if(arr[i] == 0){
			arr[i] = 1;
			for(int j = i+1; j <= n; j++){
				arr[j] = 0;
			}
			break;
		}
	}
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++){
		arr[i] = 0;
	}
	for(int i = 0; i < pow(2, n); i++){
		if(ok())result();
		sinh();
	}

return 0;
}

