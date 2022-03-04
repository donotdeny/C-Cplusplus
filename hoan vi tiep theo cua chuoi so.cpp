#include<iostream>
#include<string>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		int a[100], n, testCase;
		cin >> testCase >> s;
		cout << testCase << ' ';
		n = s.size()-1;
		for(int j = 1; j <= s.size(); j++){
			a[j] = int(s[j-1] - '0');
		}
		while(n > 0 && a[n] >= a[n+1]) n--;
		if(n <= 0) cout << "BIGGEST" << endl;
		else{
			int k = s.size();
			while(a[k] <= a[n]) k--;
			swap(a[k], a[n]);
			int l = n+1, r = s.size();
			while(l < r){
				swap(a[l], a[r]);
				l++, r--;
			}
			for(int j = 1; j <= s.size(); j++){
				cout << a[j];
			}
			cout << endl;
		}
	}

return 0;
}

