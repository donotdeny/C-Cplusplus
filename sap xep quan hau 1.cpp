#include<iostream>
using namespace std;

bool hang[11], cot[11], nguoc[22], xuoi[22];
int n, res;

void Try(int i)
{
	for(int j = 1; j <= n; j++){
		if(!hang[j] && !cot[j] && !nguoc[i+j-1] && !xuoi[i-j+n]){
			hang[j] = true;
			cot[j] = true;
			nguoc[i+j-1] = true;
			xuoi[i-j+n] = true;
			if(i == n){
				res++;
			}
			else Try(i+1);
			hang[j] = false;
			cot[j] = false;
			nguoc[i+j-1] = false;
			xuoi[i-j+n] = false;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		res = 0;
		cin >> n;
		Try(1);
		cout << res << endl;
	}

return 0;
}

