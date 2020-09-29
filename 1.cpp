/*#include<iostream>
#include<string>
using namespace std;
int a[5];
string name[5];

int main()
{
	
	for(int x= 0; x<5; x++)
	{
		cout<<"Enter name ["<<x+1<<"] : ";
		cin >>name[x];
		cout<<"Enter score ["<<x+1<<"] : ";
		cin >>a[x];
		cout<<endl;
		
	}
	cout<<"No. \tName \tscore"<<endl;
	cout<<setw(50)<<setfill"-"<<endl;
	for(int x = 0; x < 5 ; x++)
	{
		cout<<x+1<<"\t";
		cout<<name[x]<<"\t"<<a[x]<<endl;

	}


}*/



/*#include<iostream>
#include<string>
#include<array>
using namespace std;

int main()
{

	int a[4] ={-1,6,9,2};
	int max = a[0];
	int min = a[0];
	int sum
	for(int i=1;i<4;i++){
		if(a[i]>max)
		 max =a[i];
		if(a[i]<max)
		 min =a[i];
	}
	cout<<"Maximum value is "<< max <<endl;
	cout<<"Mainimum value is "<< max <<endl;
	int n = sizeof(a) / sizeof(a[0]);
	sort(a,a+n);
	cout <<"Sorted Array :";
	for(int i = 0 ; i < n ;i++)
	{ cout<< a[i]<<" ";
	 cout << sum += a[i] << endl;
	}
	return 0;
	
}*/


/*#include<iostream>
#include<string>
#include<array>
using namespace std;
float average(float num[10]);
int main()		
{
	int i; float score[10],avg_score;
	for(i=0;i<10;i++)
	 cout<< "Enter score ["<<i<<"]";
	cin >> score[i];
	avg_score = average(score);
	cout <<"Average score is "<<avg_score <<endl;
	}
	return 0;
}
float average(float num[10])

{
	float total = 0.0 , avg = 0.0;
	for(int i=0; i<10;i ++)
	{
		total =total+num[i];
		avg = total /10;
	}
	return avg;

}*/


#include<iostream>
#include<iomanip>
using namespace std;
void display(int salary[] , int num);
int cal_bonus(int salary);
int main()
{
	int num , bonus;
	cout << "Enter Number of Person : ";
	cin >> num;
	int *salary = new int[num];
	for(int i = 0 ; i < num ; i++)
	{
		cout << "Enter the salary "<< i+1 << " : ";
		cin >> salary[i];
	}
	bonus = cal_bonus(*salary);
	display(salary , num);
}
int cal_bonus(int salary)
{
	int total;
	total = salary * 2;
	return (total);
}
void display(int salary[] , int num)
{
	cout << fixed << setw(80) << setfill('-') << "\n";
	cout << "There are " << num << " person" << endl;
	for(int i = 0 ; i < num ; i++)
	{
		cout << "The salary for person " << i+1 << " =" << salary[i] << " and Bonus = " <<cal_bonus(salary[i])<< endl;
	}
}
