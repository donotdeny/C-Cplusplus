#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a, b;
		cin >> a >> b;
		int mem = 0;
		while (a.size() < b.size())
        	a = '0' + a;
   		while (a.size() > b.size())
       		b = '0' + b;
      	if(a < b) swap(a, b);
       	string res = "";
       	for(int i=a.size()-1;i>=0;i--){
       		int temp = char(a[i] - 48) - char(b[i] - 48) - mem;
       		if(temp < 0){
       			res = char(temp + 10 + 48) + res;
       			mem = 1;
			}
       		else {
       			res = char(temp + 48) + res;
       			mem = 0;
			}
		}
		cout << res << endl;
	}

return 0;
}

