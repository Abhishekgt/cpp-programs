#include<iostream>
#include<string.h>
using namespace std;
class String
{
	private:
		char *str;
		int len;
	public:
		String()
		{
			len=0;
			str=NULL;
		}
		String(char *s)
		{
			len=strlen(s);
			str=new char[len+1];
			strcpy(str,s);
		}
		void show_data()
		{
			cout<<str;
		}
		String & operator+=(String &s);
		int operator==(String &s);
		int operator>(String &s);
};
String & String :: operator+=(String &S)
{
	len += strlen(S.str)+1;
	strcat(str,S.str);
	return *this;
}
int String :: operator==(String &S)
{
	if(strcmp(str,S.str)==0)
		return 1;
	else
		return 0;
}
int String :: operator>(String &S)
{
	if(strcmp(str,S.str)>0)
		return 1;
	else
		return 0;
}
int main()
{
	char s[10];
	String S1("Hello");
	cout<<"\n Enter a String: ";
	cin>>s;
	String S2(s);
	if(S1==S2)
		cout<<"\n EQUAL STRINGS : ";
	if(S1>S2)
		cout<<"\n FIRST STRING IS GREATER THAN SECOND";
	else
		cout<<"\n SECOND STRING IS GREATER THAN FIRST";
	S1 += S2;
	cout<<"\n AFTER CONCATENATION : ";
	S1.show_data();
	
	return 0;
}
