#include<iostream>
using namespace std;
int n, arr[101];
bool used[101];

void result(){
	for(int i=1;i<=n;i++){
		cout << arr[i];
	}
	cout << endl;
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j] == 0){
			arr[i] = j;
			used[j] = 1;
			if(i==n) result();
			else Try(i+1);
			used[j] = 0;
		}
	}
}

int main()
{
	cin >> n;
	Try(1);

return 0;
}

