#include <iostream>
using namespace std;
int main()
{
	float first, second, third, midtrem, final, total, total1 ;
		cout << "==========QUIZZES===============" << endl;
		cout << "Enter first quizz (10) : ";
		cin >> first;

		cout << "Enter second quizz (10) : ";
		cin >> second;
        
		cout << "Enter third quizz (10) : ";
		cin >> third;
		
		cout << "==========MID-TERM==============" << endl;
		cout << "Enter mid-term (40) : ";
		cin >> midtrem;

		cout << "===========FINAL================" << endl;
		cout << "Enter final (50) : ";
		cin >> final;

		//Sum of quizzes
		total = (first + second + third) / 3;
		cout << "Quizzes Total : " << total << endl;
		cout << "Mid term : " << midtrem << endl;
		cout << "Final : " << final << endl;

		//Total
		total1 = midtrem + final + total;
		cout << "Total : " << total1 << endl;

		if (total1 >= 50){
			cout << "You score is PASS" << endl;
		} else {
			cout << "You score is NOT PASSED" << endl;
		}
	return 0;
}