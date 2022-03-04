#include <iostream>
#include <string>
using namespace std;
 
// Helper function to xor two characters
char xor_c(char a, char b) { return (a == b) ? '0' : '1'; }
 
// Helper function to flip the bit
char flip(char c) { return (c == '0') ? '1' : '0'; }
 
// function to convert binary string
// to gray string
string binarytoGray(string binary)
{
    string gray = "";
 
    // MSB of gray code is same as binary code
    gray += binary[0];
 
    // Compute remaining bits, next bit is comuted by
    // doing XOR of previous and current in Binary
    for (int i = 1; i < binary.length(); i++) {
        // Concatenate XOR of previous bit
        // with current bit
        gray += xor_c(binary[i - 1], binary[i]);
    }
 
    return gray;
}
 
// Driver program to test above functions
int main()
{
    int t;
    cin >> t;
    while(t--){
    	string str;
    	cin >> str;
    	cout << binarytoGray(str) << endl;
	}
    
    return 0;
}

