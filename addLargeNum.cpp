#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string num1, num2;
		cin >> num1 >> num2;
		int x = num1.length();
		int y = num2.length();
		if(x >= y){
			int res[x+1]={0};
			int n = x - y;
			for(int i=x-1;i>=n;i--){
				res[i+1] = (num1[i] - 48) + (num2[i-n] - 48);
			}
			for(int i=n-1;i>=0;i--){
				res[i+1] = (num1[i] - 48);
			}
			for(int i=x;i>=0;i--){
				if(res[i] > 9){
					res[i] -= 10;
					res[i-1]++;
				}
			}
			if(res[0]!=0){
				cout << res[0];
			}
			for(int i=1;i<x+1;i++){
				cout << res[i];
			}
			cout << endl;
		}
		else {
			int res[y+1] = {0};
			int n = y - x;
			for(int i=y-1;i>=n;i--){
				res[i+1] = (num1[i-n] - 48) + (num2[i] - 48);
			}
			for(int i=n-1;i>=0;i--){
				res[i+1] = (num2[i] - 48);
			}
			for(int i=y;i>=0;i--){
				if(res[i] > 9) {
					res[i] -= 10;
					res[i-1]++;
				}
			}
			if(res[0] != 0) cout << res[0];
			for(int i=1;i<=y;i++){
				cout << res[i];
			}
			cout << endl;
		}
	}
	
return 0;
}

