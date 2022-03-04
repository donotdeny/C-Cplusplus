#include<iostream>
using namespace std;

int main()
{
	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;
	if(v1 <= v2) cout << "NO";
	else {
		int key = 0;
		for(size_t i=1;x1<x2;i++){
			x1 += v1;
			x2 += v2;
			if(x1 == x2){
				cout << "YES";
				key = 1;
			}
		}
		if(key != 1) cout << "NO";
	}

return 0;
}

