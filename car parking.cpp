#include<iostream>
using namespace std;
int main()
{
	int c=0,p=0,b=0,r=0;
	int u_input;
	int amount=0,count=0;
//menu
while(true)
{   cout<<" ************************* MATTA CAR PARKING CENTRE ****************************"<<endl<<endl; 
    cout<<" press 1 for car :"<<endl;
	cout<<" press 2 for coach :"<<endl;
	cout<<" press 3 for bus :"<<endl;
	cout<<" press 4 for richshaw :"<<endl;
	cout<<" press 5 for show record :"<<endl;
	cout<<" press 6 for delete record : "<<endl;
	cout<<"\n *******************************************************************************\n";
	("cls");
	cin>>u_input;
	
	if (u_input==1)
	{
		if (count<50)
		{
		amount=amount+200;
		count=count+1;	
		c=c+1;
		}
	else
	cout<<"no more cars ,parking in full:";	

	}
	else if (u_input==2)
	{
		if (count<50)
		{
		amount=amount+300;
		count=count+1;
		p=p+1;	
		}
	else
	cout<<"no more coachs ,parking in full:";	

	}
	else if (u_input==3)
	{
		if (count<50)
		{
		amount=amount+400;
		count=count+1;
		b=b+1;	
		}
	else
	cout<<"no more buses ,parking in full:";	

	}
	
	else if (u_input==4)
	{
		if (count<50)
		{
		amount=amount+100;
		count=count+1;
		r=r+1;	
		}
	else
	cout<<"no more richshaw ,parking in full:";	

	}
	else if (u_input==5)
	
	{
    cout<<"\a \n**********     DETAIL RECORD  *********\n"<<endl<<endl;
	cout<<"total number of cars :"<<c<<endl;
	cout<<"total number of coach :"<<p<<endl;
	cout<<"total number of buses :"<<b<<endl;
	cout<<"total number of richshaws :"<<b<<endl;
	cout<<"total amount :"<<amount<<endl;
	cout<<"total number of vehicels :"<<count<<endl;	
	cout<<"\n****************************************************\n";
	}
	else if (u_input==6)
	{
		amount=0;
		count=0;
	}
	else
	{
		cout<<"invalid entry";
	}	
}	return 0;
 } 
