#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k=0;
		cin >> n;
		bool prime[n+1];
		for(int i=2;i<=n;i++){
			prime[i] = true;
		}
		for(int i=2;i<=n;i++){
			if(prime[i] == true) 
				for(int j=2*i;j<=n;j+=i){
					prime[j] = false;
				}
		}
		for(int i=2;i<=n;i++){
			int k=0;
			if(prime[i] == true){
				for(int j=2;j<=n;j++){
					if(prime[j] == true && i+j == n){
						cout << i << " " << j;
						k=1;
						break;
					}
				}
			}
			if(k!=0) break;
		}
		cout << endl;
	}

return 0;
}

