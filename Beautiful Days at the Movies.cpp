#include<iostream>
#include<cmath>
using namespace std;

int res(int a, int b){
	if(a > b) return a - b;
	else return b - a;
}

int sizeOfNumber(int n){
	int size = 0;
	while(n > 0){
		size++;
		n /= 10;
	}
	return size;
}

int reverseOfNumber(int n){
	int number = 0;
	while(n % 10 == 0) n /= 10;
	int length = sizeOfNumber(n);
	int arr[length];
	for(int i = 0; i < length; i++){
		arr[i] = n % 10;
		n /= 10;
	}
	for(int i = 0; i < length; i++){
		number += (arr[i]*pow(10, length - i - 1));
	}
	return number;
}

int main()
{
	int i, j, k, dem = 0;
	cin >> i >> j >> k;
	for(int count = i; count <= j; count++){
		int result = res(count, reverseOfNumber(count));
		if(result % k == 0) dem++;
	}
	cout << dem;

return 0;
}

