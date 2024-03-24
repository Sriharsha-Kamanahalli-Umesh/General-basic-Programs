// You are having a get together at your house and your mother asks you to distribute candies equally amongst all your cousins. You want to determine if the number of candies given by your mother can be equally distributed or not.

// Input Format
// A single line with two space-separated integers representing the number of candies and the number of cousins repectively.

// Output Format
// Print "YES" if you can equally distribute the candies and "NO" if you cannot.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int candies;
	int cousins;
	std::cin>> candies >> cousins;
	if((candies % cousins) == 0)
		std::cout<< "YES";
	else
		std::cout<< "NO";
	return 0;
}