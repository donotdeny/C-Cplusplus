#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void addMin(string a, string b)
{
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '6'){
			a[i] = '5';
		}
	}
	for(int i = 0; i < b.size(); i++){
		if(b[i] == '6'){
			b[i] = '5';
		}
	}
	int num1 = 0, num2 = 0;
	int mu1 = a.size(), mu2 = b.size();
	for(int i = 0; i < a.size(); i++){
		int temp = a[i] - '0';
		num1 += temp*(pow(10, mu1-1));
		mu1--;
	}
	for(int i = 0; i < b.size(); i++){
		int temp = b[i] - '0';
		num2 += temp*(pow(10, mu2-1));
		mu2--;
	}
	cout << num1 + num2 << " ";
}

void addMax(string a, string b)
{
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '5'){
			a[i] = '6';
		}
	}
	for(int i = 0; i < b.size(); i++){
		if(b[i] == '5'){
			b[i] = '6';
		}
	}
	int num1 = 0, num2 = 0;
	int mu1 = a.size(), mu2 = b.size();
	for(int i = 0; i < a.size(); i++){
		int temp = a[i] - '0';
		num1 += temp*(pow(10, mu1-1));
		mu1--;
	}
	for(int i = 0; i < b.size(); i++){
		int temp = b[i] - '0';
		num2 += temp*(pow(10, mu2-1));
		mu2--;
	}
	cout << num1 + num2 << endl;
}

int main()
{
	string a, b;
	cin >> a >> b;
	addMin(a, b);
	addMax(a, b);

return 0;
}

