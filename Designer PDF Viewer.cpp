#include<iostream>
#include<string>
using namespace std;

int main()
{
	int list[26];
	int area, max=0;
	string word;
	for(int i = 0; i < 26; i++){
		cin >> list[i];
	}
	cin >> word;
	for(int i = 0; i < word.length(); i++){
		if(max < list[word[i] - 'a']) max = list[word[i] - 'a'];
	}
	cout << max*word.length();

return 0;
}

