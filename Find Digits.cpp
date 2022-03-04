#include<iostream>
using namespace std;

void process(){
	int n, temp, number, count = 0;
	cin >> n;
	temp = n;
	while(temp > 0){
		number = temp % 10;
		if(number == 0){
			temp /= 10;
			continue;
		}
		if(n % number == 0) count++;
		temp /= 10;
	}
	cout << count << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		process();
	} 

return 0;
}

