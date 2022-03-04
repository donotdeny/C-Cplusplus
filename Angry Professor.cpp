#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int onTime = 0;
		int n, k;
		cin >> n >> k;
		int timeArrival[n];
		for(size_t i = 0; i < n; i++){
			cin >> timeArrival[i];
			if(timeArrival[i] <= 0) onTime++;
		}
		if(onTime >= k) cout << "NO";
		else cout << "YES";
		cout << endl;
	}

return 0;
}

