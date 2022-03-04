#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
	for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}

int mul(int a[], int n)
{
	int res = 1;
	bool flag = 0;
	for(int i = 0; i < n; i++){
		if(prime(a[i])){
			res *= a[i];
			flag = 1;
		}
	}
	if(flag == 0) return 0;
	return res;
}

int main()
{
	int n;
	cout << "nhap n:";
	cin >> n;
	int a[n];
	cout << "nhap mang n so:";
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << "tich cac so nguyen to trong day: " << mul(a, n);

return 0;
}

