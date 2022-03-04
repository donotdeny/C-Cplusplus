#include <bits/stdc++.h>
using namespace std;

int main()
{
		long long n, temp, sum = 0;
		cin >> n;
		temp = n/2;
		for(int i=1;i<=temp;i++){
			int count=0, k=0;
			while(n%i==0){
				count++;
				k=1;
				n/=i;
			}
			if(k!=0){
				while(count >= 0){
					sum += pow(i, count);
					count--;
				}
			}
		}
		cout << sum;
		
    return 0;
}

