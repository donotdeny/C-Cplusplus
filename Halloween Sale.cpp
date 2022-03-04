#include<iostream>
using namespace std;

int main()
{
	int p, d, m, s, count = 0, total = 0;
	cin >> p >> d >> m >> s;
	while(total <= s){
		if(p > m){
			total += p;
			count++;
			p -= d;
		}
		else {
			total += m;
			count++;
		}
		if(total > s) count--;
	}
	cout << count;

return 0;
}

