#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long long max=0;
    	long long n;
    	cin >> n;
    	for(int i = 2;i <= sqrt(n);i++)
		{
            while(n%i == 0)
			{
                if(max < i) max = i;
                n /= i;
            }
            if(n == 1) break;
    	}
    	if(n != 1) cout << n << endl;
    	else cout << max << endl;
    }
    return 0;
}

