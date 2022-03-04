#include<iostream>
using namespace std;

int main()
{
	int n, max = 0;
	cin >> n;
	int arr[n], frequence[6][2];
	for(int i = 0; i < 6; i++){
		frequence[i][0] = i;
		frequence[i][1] = 0;
	}
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		frequence[arr[i]][1]++;
	}
	for(int i = 1; i < 6; i++){
		if(max < frequence[i][1]) max = frequence[i][1];
	}
	for(int i = 1; i < 6; i++){
		if(max == frequence[i][1]){
			cout << i;
			break;
		}
	}

return 0;
}

