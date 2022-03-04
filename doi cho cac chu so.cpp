#include<iostream>
#include<string> 
using namespace std;

void swap(int &a, int &b)
{
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
		int k;
		cin >> k >> s;
		for(int i = 0; i < s.size(); i++){
			int max = s[s.size()-1];
			int vt = s.size()-1;
			for(int j = s.size()-1; j > i && k > 0; j--){
				if(max < s[j]){
					max = s[j];
					vt = j;
				}
			}
			if(max > s[i] && k > 0){
				swap(s[i], s[vt]);
				k--;
			}
		}
		cout << s << endl;
	}

return 0;
}

