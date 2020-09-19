#include<iostream>
#include<time.h>
using namespace std;
int Guess(int);
int main()
{
	int n1, R1;
	cout << "### Welcome to guessing number game ###\nSecret number has been chosen\n";
	srand(time(NULL));
	n1 = 1+rand()%10;
	R1 = Guess(n1);
	cout << "The secret number is " << n1 << endl;
	cout << "You made " << R1 << " guesses\n";
	return(0);
}
int Guess(int n1)
{
	int n;
	int R1 = 0;
	do {
		cout << "Guess the number (1 to 10) : ";
		cin >> n;
		if (n < n1) cout << "The secret number is lower\n";
	    else if (n > n1)cout << "The secret number is higher\n";
	    else cout << "Congratulations!\n";
		R1++; 
	} while (n != n1);
	return R1;
}