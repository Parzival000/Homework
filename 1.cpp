/*#include <iostream>
using namespace std;
int swap(int a ,int b);
int main()
{
	int x =5, y=3;
	cout<<swap(x , y) <<endl;
	cout<<"x = " << x <<endl;
	cout<<"y = " << y <<endl;
	return 0;
}
int swap(int a ,int b)
{
	a = 6;
	b = 5;
	return a+b;
}*/

/*#include<iostream>
#include<string>
using namespace std;
void ParseName(string &First , string &Last , const string FullName);
int main()
{
	string Name;
	string LastName , FirstName;
	char sub;
	cout << "Enter String : ";
	cin >> Name;
	cout << "Enter Substring : ";
	cin >> sub;
	ParseName(FirstName , LastName , Name);
	Name = FirstName + " " + LastName;
	cout << "Name : " << Name << endl;
	return 0;
}
void ParseName(string &First , string &Last , const string FullName)
{
	int I = FullName.find(",");
	Last = FullName.substr(0 , I);
	First = FullName.substr(I + 2 , FullName.size());
}*/

/*#include<iostream>
#include<string>
using namespace std;
void ParseName(string &str1 , string &str2 ,string &str, const string sub_str);
int main()
{
	string str,sub_str;
	string str1, str2;
	cout<<"Enter string :";
	cin>>str;
	cout<<"Enter Substring :";
	cin>>sub_str;
	ParseName(str1 , str2,str , sub_str);
	cout<<"String 1 = "<<str1<<endl;
	cout << "String2 = " << str2 << endl;
	return(0);

}
void ParseName(string &str1 , string &str2,string &str , const string sub_str)
{
	int I = str.find(sub_str);
	str1 = str.substr(0 , I);
	str2 = str.substr(I + 2 ,str.size());
}*/


#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length,const float widht);
double Area(const double based ,const double high);
int main()
{
	char Choice;
	bool Flag =true;
	do{
		DisplayMenu();
		cin>>Choice;
		if (Choice == '1'){
			float Radius;
			cout<<"\nEnter radius : ";
			cin>>Radius;
			cout<<"Area of Circle = "<< fixed;
			cout<< setprecision(2)<< Area(Radius)<<endl;
		}
		else if(Choice == '2'){
			float Length,Widht;
			cout <<"Enter Length and width :";
			cin >>Length>>Widht;
			cout <<"Area of Rectangle = " <<fixed;
			cout <<setprecision(2)<<Area(Length,Widht);
		}
		else if(Choice == '3'){
			double based ,high;
			cout <<"Enter Length and based :";
			cin >>based>>high;
			cout <<"Area of Rectangle = " <<fixed;
			cout <<setprecision(2)<<Area(based,high);
		}
		else if (Choice =='4') Flag = false;
		else {
			cout <<"\nYou choose out of range is";
			cout <<"not process.\n";
		}
	}while (Flag);
	cout<<"\n. . .Exit Program . . .\n";
	return(0);
}
float Area(const float Radius)
{
	return(3.14159F *Radius *Radius);
}
float Area(const float Length,const float widht)
{
	return(Length *widht);
}
double Area(const double based ,const double high)
{
	return(0.5 *(based *high));
}
void DisplayMenu()
{
	cout<<endl;
	cout<<"Program Calulate Area"<<endl;
	cout<<"1.Clrcle"<<endl;
	cout<<"2.Rectangle"<<endl;
	cout<<"3.Trlangle"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter your choose number: ";
}



	



