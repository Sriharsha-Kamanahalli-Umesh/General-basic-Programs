/*Given a two-digit number n, print both the digits of the number.

Input Format
    The first line indicating the number of test cases T.
    Next T lines will each contain a single number ni.

Output Format
    T lines each containing two digits of the number ni separated by space.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	while(T--) {
		int n;
		std::cin >> n;
		std::cout << n/10 << " " << n%10 << "\n";
	}
	return 0;
}