#include <iostream>
using namespace std ;

int main (int argc,char** argv)
{
	int gender,age;
	cout<<"輸入你的性別年齡: 男生為A，女生為B"<< endl;
	cout<<"性別:";
	cin>>gender;
	cout<<"年齡:";
	cin>>age;                                                         
	if(gender==1||age<18) 
	{
		cout<<"已成年，可結婚"<<endl; 
	}
	else if (gender==1||age>=18) 
	{
		cout<<"未成年，不可結婚"<<endl;
	}
	else if (gender==2||age<16) 
	{
		cout<<"已成年，可結婚"<<endl;
	}
	else if (gender==2||age>=16) 
	{
		cout<<"未成年，不可結婚"<<endl;
	}
		system("pause");
		return 0;
}
