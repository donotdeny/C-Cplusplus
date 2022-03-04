#include<iostream>
using namespace std;

int main()
{
	int a[3][3], b[3][3], c[3][3];
	for(int i = 0 ; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0 ; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> b[i][j];
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			c[i][j] = 0;
			for(int l = 0; l < 3; l++){
				c[i][j] += (a[i][l] * b[l][j]);
			}
		}
	}
	for(int i = 0 ; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}

return 0;
}

