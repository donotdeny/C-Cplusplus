#include<iostream>
#include<math.h>
using namespace std;

int prime(int n)
{
	if(n<2) return 0;
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) count++;
	}if(count==0) return 1;
	return 0;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> m >> n;
			for(int i=m;i<=n;i++){
				if(prime(i)) cout << i << " ";
			}
		cout << endl;
	}

return 0;
}

