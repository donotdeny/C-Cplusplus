#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long num = 0;
	string n;
	cin >> n;
	int len = n.size(), j = 0;
	for(int i = len-1; i >= 0; i--){
		if(n[i] == 'A') num += 10*pow(16, j);
		else if(n[i] == 'B') num += 11*pow(16, j);
		else if(n[i] == 'C') num += 12*pow(16, j);
		else if(n[i] == 'D') num += 13*pow(16, j);
		else if(n[i] == 'E') num += 14*pow(16, j);
		else if(n[i] == 'F') num += 15*pow(16, j);
		else num += (n[i]- '0')*pow(16, j);
		j++;
	} 
	cout << num;

return 0;
}

