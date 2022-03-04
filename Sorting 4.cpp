#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int A[n], B[m];
		for(int i=0;i<n;i++){
			cin >> A[i];
		}
		for(int i=0;i<m;i++){
			cin >> B[i];
		}
		vector<int> v(n+m);
		vector<int>::iterator it;
		it = set_union(A, A+n, B, B+m, v.begin());
		v.resize(it - v.begin());
		for(it = v.begin(); it != v.end(); ++it)
			cout << *it << " ";
		cout << endl;
		it = set_intersection(A, A+n, B, B+m, v.begin());
		v.resize(it - v.begin());
		for(it = v.begin(); it != v.end(); ++it)
			cout << *it << " ";
		cout << endl;
	}
	

return 0;
}

