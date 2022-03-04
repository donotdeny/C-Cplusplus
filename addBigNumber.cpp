#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char number1[100], number2[100];
	cin.getline(number1, 99);
	cin.getline(number2, 99);
	int len1 = strlen(number1), len2 = strlen(number2);
	char result[100];
	int size=0, temp=0, miss=0;
	if(len1!=len2){
		if(len1<len2){
			int far = len2 - len1;
			len1 += far;
			for(int i=len1-1;i>=far;i--){
				number1[i] = number1[i-far];
			}
			for(int i=0;i<far;i++){
				number1[i] = 48;
			}
		}
		else {
			int far = len1 - len2;
			len2 += far;
			for(int i=len2-1;i>=far;i--){
				number2[i] = number2[i-far];
			}
			for(int i=0;i<far;i++){
				number2[i] = 48;
			}
		}
	}
	for(int i=len1-1;i>=0;i--){
		temp = (number1[i]-48) + (number2[i]-48) + miss;
		miss = temp/10;
		result[size++] = (temp % 10) + 48;
	}
	if(miss!=0){
		result[size++] = miss + 48;
	}
	for(int i=size-1;i>=0;i--){
		cout << result[i];
	}

return 0;
}

