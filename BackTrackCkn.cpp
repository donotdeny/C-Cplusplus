#include<iostream>
using namespace std;
int n, k;
int arr[100];

void result(){
	for(int i=1;i<=k;i++){
		cout << arr[i];
	}
	cout << endl;
}

void Try(int i){
	for(int j=arr[i-1]+1;j<=n-k+i;j++){
		arr[i] = j;
		if(i==k) result();
		else Try(i+1);
	}
}

int main()
{
	cin >> n >> k;
	Try(1);
	
return 0;
}

