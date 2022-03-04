#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		string a;
		long long b, j=0;
		int num[1001];
		cin >> a >> b;
		for(int i=0;i<a.size();i++){
			num[i] = a[i] - '0';
		}
		for(int i=0;i<a.size();i++){
			j = (j*10 + num[i]) % b;
		}
		cout << j << endl;
	}

return 0;
}

