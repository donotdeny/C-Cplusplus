#include<bits/stdc++.h>
using namespace std;

int a[50][50], b[50], c[50];
int d, l;

void init()
{
	for(int i = 1; i <= 10; i++){
		for(int j = 1; j <= 10; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= 10; i++) c[i]=0;
}

void res()
{
	for(int i = 10; i >= 0; i--){
		cout << b[i] << ' ';
	}
	d++;
}

void hamilton(int b[], int c[], int i)
{
	int j, k;
	for(j = 1; j <= 10; j++){
		if(a[b[i-1]][j] == 1 && c[j] == 0){
			b[i] = j;
			c[j] = 1;
			if(i < 10) hamilton(b, c, i+1);
			else res();
			c[j] = 0;
		}
	}
}

int main()
{
	b[0]=1, l = 1, d = 0;
	init();
	hamilton(b, c, l);
	if(d == 0) cout << "khong co duong di Hamilton";

return 0;
}

