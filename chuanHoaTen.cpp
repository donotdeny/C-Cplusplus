#include<iostream>
#include<string>
using namespace std;

int dem(string s)
{
	int count=0;
	if(s[0] != ' ') count++;
	for(int i=0;i<s.size();i++){
		if(s[i] == ' ' && s[i+1] != ' ') count++;
	}
	return count;
}

int main()
{
	int count=0, temp;
	string name;
	getline(cin, name);
	for(int i=0;i<name.size();i++){
		if(name[i]>='A' && name[i]<='Z') name[i] += 32;
	}
	if(name[0]>='a' && name[0]<='z') name[0] -= 32;
	if(name[0]!=' ') count++;
	for(int i=0;i<name.size();i++){
		if(name[i] == ' ' && name[i+1] != ' '){
			count++;
			if(count < dem(name)) name[i+1] -= 32;
		}
	}
	count=0;
	if(name[0]!=' ') count++;
	for(int i=0;i<name.size();i++){
		if(name[i] == ' ' && name[i+1] != ' '){
			count++;
		}
		if(count < dem(name)) cout << name[i];
	}
	cout << ", ";
	count = 0;
	if(name[0]!=' ') count++;
	for(int i=0;i<name.size();i++){
		if(name[i] == ' ' && name[i+1] != ' '){
			count++;
			if(count == dem(name)){
				temp = i+1;
			}
		}
	}
	for(int i=temp;i<name.size();i++){
		name[i] -= 32;
		cout << name[i];
	}

return 0;
}

