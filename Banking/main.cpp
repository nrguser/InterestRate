/* 
- I'm pretty sure while loop will work but need to find a beter test condition for it, possibly a for loop might work better, trying to avoid nested if else .
- Plan is to have a basic console application that you can check interest rates and then in the future add accounts to a local file. With that local file it will have it date stamped and can then be
called again later to see where it should be. Static interest rates for now, possibly variable in the future. ** 03/06/2017
*/
/*
Not going to use a loop, working on getting the basic functions done correctly first, then working from there.
Got the calculateInterest working, confirmed with multiple different entries, will look to expand from there. Not sure what to store in private yet, most likely user info once read from a file
but that's for another day. Happy with the results at this time 03/09/2017
*/
// calculateInterest: I = Prt AKA I = P × r × t

#include <iostream>	
#include <string>
#include <cmath>

class formulas {
public:
	double calculateInterest(double P, double R, double t) {
		double interest;
		double r = 0;
		r = (R / 100); // converts the "percent" to "decimal" form
		interest = (P * r) * t;
		std::cout << "Your calculated interest is: " << interest << std::endl;
		return 0; 
	}
private:
};

using namespace std;

int main()
{
	double principal = 0, interestamount = 0, rateofinterest = 0, timeperoid = 0, total = 0; 

	cout << "Please enter the Principal amount: ";
	cin >> principal;
	cout << "Please enter the rate: ";
	cin >> rateofinterest;
//	rateofinterest = rateofinterest / 100; 
	cout << "Please enter how many years to figure: ";
	cin >> timeperoid;
//	total = (principal * rateofinterest) * timeperoid;
	formulas computeme;
	computeme.calculateInterest(principal,rateofinterest,timeperoid);

	return 0;
}