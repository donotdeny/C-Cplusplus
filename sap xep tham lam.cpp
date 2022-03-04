#include<iostream>
using namespace std;

void done()
{
	int n, key = 0;
	cin >> n;
	int arr[n+1];
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	for(int i = 1; i <= n; i++){			// 1 2 3 4 5 6 7
		if(arr[i] != i && arr[i] != n-i+1){ // 1 6 3 4 5 2 7 
			key = 1;						// a[i] chi co the nam o vi tri i hoac doi xung voi i
			break;
		}
	}
	if(key == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		done();
	}

return 0;
}

