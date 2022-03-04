#include<iostream>
using namespace std;

int main()
{
	int n, k, energy = 100; // initial energy
	cin >> n >> k;
	int c[n];
	for(int i = 0; i < n; ++i){
		cin >> c[i];
	}
	int i = k % n; //initial jump from 0;
	energy -= c[i] * 2 + 1;
	while(i != 0){
		i = (i + k) % n;
		energy -= c[i] * 2 + 1;
	}
	cout << energy;

return 0;
}

