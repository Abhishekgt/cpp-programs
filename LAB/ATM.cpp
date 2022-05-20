#include <iostream>
#include <string>
using namespace std;
class atm
{
	public:
		int uid[10];
		int pass[10];
		int bal[10];
		int k=0;
	public:
	atm()
	{
		for(int i=0;i<10;i++)
		{
			bal[i]=0;
		}
	}
	void create()
	{
		cout<<"Please enter your user id:";
		cin>>uid[k];
		cout<<"Please enter your password:";
		cin>>pass[k];
		cout<<"\nThank You! Your account has been created!\n"<<endl;
		k++;
	}	
	void login()
	{
		int ud,ps,p=-1;
		cout<<"Please enter your user id:";
		cin>>ud;
		cout<<"Please enter your password:";
		cin>>ps;
		int i;
		for(i=0;i<10;i++)
		{
			if(ud==uid[i])
			{
				p=i;
			}
		}
		if(p!=-1)
		{
			if(ps==pass[p])
			success(p);
			else{
			cout<<"Password entered is incorrect! \n"<<endl;
			}
		}
		else if(p==-1)
		{
			cout<<"No such user id exist \n"<<endl;;
		}
	}
	void success(int p)
	{
		int wit,dep;
		string ip;
		cout<<"\nAccess Granted!"<<endl;
		while(true)
		{
			cout<<"\n d -> Deposit Money \n w -> Withdraw Money \n r  -> Request Balance"<<endl;
			cin>>ip;
			if(ip=="d")
			{
				cout<<"\nAmount of Deposit: $";
				cin>>dep;
				bal[p]=bal[p]+dep;
			}
			else if(ip=="w")
			{
				cout<<"\nAmount of Withdrawal: $";
				cin>>wit;
				bal[p]=bal[p]-wit;
				if(bal[p]-wit <0){
					cout<<"\nNot Enough Balance!";
				}
				cout<<"\n";
			}
			else if(ip=="r")
			{
				cout<<"\nYour Balance is: $";
				cout<<bal[p];
				cout<<endl;
			}
			else if(ip=="q")
			{
				cout<<"\nThanks for stopping by!"<<endl;
				return;
			}
			else
			{
				cout<<"\nWrong Input"<<endl;
			}
		}
	}
};
int main()
{
	atm obj;
	string inp;
	cout<<"Hi! Welcome to XYZ Atm"<<endl;
	while(true)
	{
		cout<<"Please select an option from the menu below: \n l -> Login \n c -> Create New Account \n q -> Quit"<<endl;
		cin>>inp;
		if(inp=="q")
		{
			cout<<"Thanks for stopping by!";
			return 0;
		}
		else if(inp=="c")
		{
			obj.create();
		}
		else if(inp=="l")
		{
			obj.login();
		}
		else
		{
			cout<<"Wrong Input"<<endl;;
		}
	}
	return 0;
}
