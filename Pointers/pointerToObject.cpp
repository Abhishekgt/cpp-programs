#include<iostream>
using namespace std;
class item
{
	int code;
	float price;
	public:
	getdata(int a,int b)
	{
		code=a;
		price=b;
	}
	show()
	{
		cout<<"code"<<code;
		cout<<"price"<<price;
	}
};
int main()
{
	item *p=new item[2];
	item *d=p;
	int x,i;
	float y;
	for(i=0;i<2;i++)
	{
		cin>>x>>y;
		p->getdata(x,y);
		p++;
	}
	for(i=0;i<2;i++)
	{
		cout<<i<<"\n";
		d->show();
		d++;
	}
	return 0;
}
