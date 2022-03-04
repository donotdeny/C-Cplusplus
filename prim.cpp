// Nguyen Van Dung
// B19DCCN129
#include <bits/stdc++.h>
using namespace std;

int V = 13, min = 0;
int parent[13], graph[13][13]; 
int key[13]; 
bool mstSet[13]; 
  
int minKey() 
{ 
    int min = INT_MAX, min_index; 
  
    for (int v = 0; v < V; v++) 
        if (mstSet[v] == false && key[v] < min) 
            min = key[v], min_index = v; 
  
    return min_index; 
} 
  
void printMST() 
{ 
    for (int i = 1; i < V; i++){
    	cout << "(" << parent[i]+1 << " " << i+1 << ") ";
	}
} 

void primMST() 
{
    for (int i = 0; i < V; i++) 
        key[i] = INT_MAX, mstSet[i] = false; 
    key[0] = 0; 
    parent[0] = -1;
    for (int count = 0; count < V - 1; count++)
    { 
        int u = minKey(); 
        mstSet[u] = true; 
        for (int v = 0; v < V; v++) 
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) 
                parent[v] = u, key[v] = graph[u][v]; 
    } 
    printMST(); 
} 
  
int main() 
{ 
    for(int i = 0; i < V; i++){
    	for(int j = 0; j < V; j++){
    		cin >> graph[i][j];
		}
	}
    primMST(); 
  
    return 0; 
} 

