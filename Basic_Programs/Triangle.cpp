/*Given three sticks with lengths L1, L2, L3 - find out if these sticks can form a triangle.
If they can form a triangle, calculate the circumference of the triangle.
Circumference of a triangle (C) = L1 + L2 + L3
The condition to be satisfied for three sticks to form a triangle is that the 
sum of lengths of any two sides of the triangle should be greater than or equal 
to the length of the third side.

Examples
Sides: 3, 4, 5
Here, if you pick any 2 sides, its sum will be greater than the remaining side.

Sides: 1, 2, 4
Here, 1 + 2 < 4. Therefore, this cannot form a triangle.

Input Format
    There are multiple test cases in this problem.
    First line has a number T representing the number of test cases.
    The next T lines each represent a test case and have three space-separated integers representing the lengths of the sticks.

Output Format
    T lines, one for each test case.
    If the three side can't form a triangle, print "-1".
    If the three sides can form a triangle, print "<Circumference>"
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin>>T;
	int l1,l2,l3;
	while(T--) {
		std::cin>>l1 >> l2 >> l3;
		if(((l1+l2)>=l3) && ((l2+l3)>=l1) && ((l1+l3)>=l2)) {
			auto cirmcum = l1+l2+l3;
			std::cout<< cirmcum << "\n";
		}
		else
			std::cout << -1 << "\n";
			
	}
	return 0;
}