/*
You and your friend decide to play a game where given some numbers, 
you have to find the maximum number. If the maximum is an even number, 
you win and if it is odd, your friend wins.

Input Format
Two lines:
    First line contains a single integer N
    Second line contains N space separated integers

Output Format
    Your winning status. If you win, print WON and if you lose, print LOST.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	std::cin>>N;
	int arr[N];
	for(int i=0; i<N; i++) {
		std::cin >> arr[i];
	}
	int max=arr[0];
	for(int i=0; i<N; i++) {
		if(arr[i] > max)
			max = arr[i];
	}
	if((max % 2) == 0)
		std::cout<< "WON";
	else
		std::cout<< "LOST";
	return 0;
}