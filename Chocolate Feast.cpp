#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, c, m, bars = 0, wrappers = 0, temp;
		cin >> n >> c >> m;
		bars = n / c;
		wrappers = bars;
		while(wrappers >= m){
			temp = wrappers / m;
			bars += temp;
			temp += wrappers % m;
			wrappers = temp;
		}
		cout << bars << endl;
	}

return 0;
}

