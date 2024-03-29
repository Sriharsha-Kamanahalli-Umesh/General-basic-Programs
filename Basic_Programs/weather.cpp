/*Given the temperature and humidity for the day, determine which category the day's weather falls into.

Temperature (°C)	Humidity (%)	Weather
    >=30	            >=90	    Hot and Humid
    >=30	            <90	        Hot
    <30	                >=90	    Cool and Humid
    <30	                <90	        Cool
Input Format
    The first line has an integer indicating the number of test cases T
    Next T lines should contain two space-separated integers denoting the temperature and humidity

Output Format
    T lines each indicating the weather based on the table shown above.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin>>T;
	int temp, hum;
	while(T--) {
		std::cin >> temp >> hum;
		if((temp>=30) && (hum>=90))
			std::cout<< "Hot and Humid" << "\n";
		else if((temp>=30) && (hum<90))
			std::cout<< "Hot" << "\n";
		else if((temp<30) && (hum>=90))
			std::cout<< "Cool and Humid" << "\n";
		else
			std::cout<< "Cool" << "\n";
	}
	return 0;
}