#include<iostream>
#include<string.h>
using namespace std;

int count(char *s)
{
	int dem=0;
	if(s[0]!=' ') dem=1;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==' '&&s[i+1]!=' ') dem++;
	}
	return dem;
}

void makeNormal(char *str)
{
	for(int i=0;i<strlen(str);i++){
		if(str[i]!=' '&&str[i]>=65&&str[i]<=90) str[i]+=32;
	}
}

int main()
{
	char str[100];
	cin.getline(str, 99);
	makeNormal(str);
	int dem=1, temp, n=count(str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' '&&str[i+1]!=' ') dem++;
		if(dem==n){
			temp = i+1;
			break;
		}
	}
	for(int i=temp;i<strlen(str);i++){
		cout << str[i];
	}
	cout << str[0];
	dem=1;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' '&&str[i+1]!=' '){
			dem++;
			if(dem==n) break;
			cout << str[i+1];
		}
	}
	cout << "@ptit.edu.vn";

return 0;
}

