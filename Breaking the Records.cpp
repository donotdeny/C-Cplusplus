#include<iostream>
using namespace std;

int main()
{
	int numberOfTime;
	cin >> numberOfTime;
	int season[numberOfTime];
	for(size_t i = 0; i < numberOfTime;i++){
		cin >> season[i];
	}
	size_t min = 0, max = 0;
	int minPoint = season[0];
	int maxPoint = season[0];
	for(size_t i = 1; i < numberOfTime; i++){
		if(season[i] < minPoint){
			minPoint = season[i];
			min++;
		}
		if(season[i] > maxPoint){
			maxPoint = season[i];
			max++;
		}
	}
	cout << max << " " << min;

return 0;
}

