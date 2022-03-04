#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		for(int i = str.length(); i >= 0; i--){
			if(str[i] == '0'){
				str[i] = '1';
				for(int j = i + 1; j < str.length(); j++){
					str[j] = '0';
				}
				break;
			}
		}
		cout << str << endl;
	}

return 0;
}

