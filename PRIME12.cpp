#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k, count=0, key=0, key1=0;
		cin >> n >> k;
		for(int i=2;i<=n;i++){
			while(n%i==0){
				count++;
				n/=i;
				if(count==k){
					cout << i << endl;
					key=1;
				//	break;
				}
			}	
		}
		if(key!=1) cout << "-1" << endl;
    }
    return 0;
}

