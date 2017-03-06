/* 
- I'm pretty sure while loop will work but need to find a beter test condition for it, possibly a for loop might work better, trying to avoid nested if else .
- Plan is to have a basic console application that you can check interest rates and then in the future add accounts to a local file. With that local file it will have it date stamped and can then be
called again later to see where it should be. Static interest rates for now, possibly variable in the future. ** 02/06/2017
*/

#include <iostream>	
#include <string>
#include <cmath>


using namespace std;

int main()
{

	int userInput = 0;
	char userName;
	int principal, interestamount, rateofinterest, rateperyear, timeperoid; 
/*
I = Prt AKA I = P × r × t
P = Principal Amount
I = Interest Amount
r = Rate of Interest per year in decimal; r = R/100
R = Rate of Interest per year as a percent; R = r * 100
t = Time Periods involved
*/

	cout << "What's your name?" << endl;
	cin >> userName;
	cout << "Good evening Matthew, how may I assist you?" << endl;


	while (userInput ){
		cout << "Press 1 to add an account \nPress 2 to figure the interest rate  \nPress 0 to exit." << endl;
		cin >> userInput;
	
}




	return 0;
}