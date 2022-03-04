#include<iostream>
using namespace std;

int main()
{
	int arr[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int t;
	cin >> t;
	while(t--){
		int n, res = 0;
		cin >> n;
		for(int i = 0; i < 10; i++){
			res += n / arr[i];
			n %= arr[i];
		}
		cout << res << endl;
	}

return 0;
}

