#include<iostream>
#include<cstring>
using namespace std;
class Account{
	private:
		int balance;
	protected:
		int account_number;
	public:
		char holder_name[100];
		Account(int bal,int acc_no,char name[])
		{
			balance=bal;
			account_number=acc_no;
			strcpy(holder_name,name);
	    }
	    void display()
	    {
	    	cout<<"name:"<<holder_name<<endl;
	    	cout<<"account_number:"<<account_number<<endl;
	    	cout<<"Balance:"<<balance<<endl;
		}
};
int main()
{
	int balance,account_no;
	char name[100];
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter account: ";
	cin>>account_no;
	cout<<"Enter balance: ";
	cin>>balance;
	Account a(balance,account_no,name);
	a.display();
	
}

