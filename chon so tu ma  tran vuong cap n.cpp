#include<bits/stdc++.h>
using namespace std;

int n, k, res;
bool used[100];
int a[100], arr[100][100];
vector<int> result;

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			a[i]= j;
			used[j] = true;
			if(i == n){
				res = 0;
				for(int l = 1; l <= n; l++){
					res += arr[l][a[l]];
				}
				if(res == k){
					for(int l = 1; l <= n; l++){
						result.push_back(a[l]);
					}
				}
			}
			else Try(i+1);
			used[j] = false;
		}
	}
}

int main()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> arr[i][j];
		}
	}
	Try(1);
	cout << result.size()/n;
	for(int i = 0; i < result.size(); i++){
		if(i % n == 0) cout << endl;
		cout << result[i] << ' ';
	}

return 0;
}

