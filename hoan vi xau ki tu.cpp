#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n, arr[101];
bool unUsed[101];
string s;

void Try(int i){
	for(int j=0;j<s.size();j++){
		if(!unUsed[j]){
			arr[i] = j;
			unUsed[j] = true;
			if(i==s.size()){
				for(int l = 1; l <= s.size(); l++){
					cout << s[arr[l]];
				}
				cout << " ";
			}
			else Try(i+1);
			unUsed[j] = false;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		sort(s.begin(), s.end());
		Try(1);
		cout << endl;
	}

return 0;
}

