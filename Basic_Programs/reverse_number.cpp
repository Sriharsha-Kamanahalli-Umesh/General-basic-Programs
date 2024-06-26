/*
Given a 3-digit number, you have to reverse the number.

Input Format
    A single line containing a 3 digit number n.

Output Format
    The number generated by reversing the digits.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	std::cin>>n;
	int rev=0;
	while(n>0) {
		int rem = n % 10;
		rev = rem + (rev*10);
		n /= 10;
	}
	std::cout<< rev;
	return 0;
}