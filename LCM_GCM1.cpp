#include<iostream>
using namespace std;

int GCM(int a, int b)
{
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}

int LCM(int a, int b)
{
	return a*b/(GCM(a,b));
}

int main()
{
	int n, j=0;
	cin >> n;
	int arr[2*n];
	for(int i=1;i<=n;i++){
		cin >> arr[j] >> arr[j+1];
		j+=2;
	}
	j=0;
	for(int i=1;i<=n;i++){
		cout << LCM(arr[j],arr[j+1]) << " " << GCM(arr[j],arr[j+1]) << endl;
		j+=2;
	}
	

return 0;
}

