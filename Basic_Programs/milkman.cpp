/*Your mother has sent you to the milkman with a cylindrical bottle. 
    You have to pay the milkman the price for the bottle full of milk at a 
    rate of ₹40 per litre of milk. You are given the radius (r) and the height (h) 
    of the bottle in centimetres. You can assume the value of π as 3.14.

    Formula for volume of cylinder:
    V=π r2h 
    Also, 1 litre = 1000 cm3.
    
    Input Format
    1 line containing two space separated integers - the radius and the height of the bottle (in centimetres).
    
    Output Format
    The amount you need to pay to the milkman in rupees, accurate upto exactly 2 decimal places.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int r;
	int h;
	std::cin>> r >> h;
	std::cout<< fixed << setprecision(2) << ((3.14*r*r*h)/1000)*40;
	return 0;
}