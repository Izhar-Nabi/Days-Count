#include<iostream>
using namespace std;
int main()
{
	int month,Days,Total_Days;
	int Days_Per_Month[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cout<<"\n Enter the month (1 to 12) : ";
	cin>>month;
	cout<<"Enter the Day (1 to 31) : ";
	cin>>Days;
	Total_Days= Days;
	for(int j=0; j<month-1; j++)
	{
		Total_Days +=Days_Per_Month[j];
	}
	cout<<"The Total Days From the Start of Year = "<<Total_Days<<endl;
	return 0;
}
