#include<iostream>
#include<vector>
using namespace std;

bool prime[1000000];

void sang()
{
	prime[0] = true;
	prime[1] = true;
	for(int i = 2; i <= 1000000; i++){
		if(prime[i] == false){
			for(int j = 2*i; j <= 1000000; j += i){
				prime[j] = true;
			}
		}
	}
} 

int main()
{
	sang();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		bool test = false;
		for(int i = 2; i <= n; i++){
			if(prime[i] == false && prime[n-i] == false){
				cout << i << " " << n-i;
				test = true;
				break;
			}
		}
		if(test == false) cout << "-1";
		cout << endl;	
	}

return 0;
}

