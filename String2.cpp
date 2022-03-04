#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		long long sum=0;
		char number[1000000];
		cin.getline(number, 999999);
		for(int i=0;i<strlen(number);i++){
			int temp = number[i] - 48;
			if(i%2==0) sum += temp;
			else sum -= temp;
		}
		if(sum%11==0) cout << "1" << endl;
		else cout << "0" << endl;
	}

return 0;
}

