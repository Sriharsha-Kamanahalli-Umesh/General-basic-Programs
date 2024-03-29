/*You had your birthday party last night and received a lot of candies. 
You do not want keep so many and decide to distribute it among your friends. 
To make things interesting, you plan to give each friend a number of candies 
equal to the number of vowels in thier first name.
You can assume that the first name of your friends consists of only one word 
(no spaces or special characters) and you have enough candies for each of them.
You have to determine how many candies each of your friend gets.

Input Format
    First line has a number n representing the number of your friends.
    n lines follow with the first name of each of your friends all in separate lines.

Output Format
    n lines, each indicating the number of candies the person received.

Sample Input
5
Neha
Rajan
Aamir
Bonnie
Ram
Expected Output
2
2
3
3
1
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	std::cin>>n;
	string name;
	
	while(n--) {
		int count=0;
		std::cin>> name;
		for(int i=0; i<name.length(); i++) {
			if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || 
                name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U') {
				count++;
			}
				
		}
		std::cout<< count << "\n";
	}
	return 0;
}