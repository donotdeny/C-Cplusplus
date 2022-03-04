#include<iostream>
#include<string>
using namespace std;

int main()
{
	long long count = 0, a = 0;
	string s;
	long long n;
	cin >> s >> n;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'a') a++;
	}
	long long div = n / s.length();
	count = div * a;
	int residual = n % s.length();
	for(int i = 0; i < residual; i++){
		if(s[i] == 'a') count++;
	}
	cout << count;

return 0;
}

