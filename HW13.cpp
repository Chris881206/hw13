#include <iostream>
using namespace std ;

int main (int argc,char** argv)
{
	int gender,age;
	cout<<"��J�A���ʧO�~��: �k�ͬ�A�A�k�ͬ�B"<< endl;
	cout<<"�ʧO:";
	cin>>gender;
	cout<<"�~��:";
	cin>>age;                                                         
	if(gender==1||age<18) 
	{
		cout<<"�w���~�A�i���B"<<endl; 
	}
	else if (gender==1||age>=18) 
	{
		cout<<"�����~�A���i���B"<<endl;
	}
	else if (gender==2||age<16) 
	{
		cout<<"�w���~�A�i���B"<<endl;
	}
	else if (gender==2||age>=16) 
	{
		cout<<"�����~�A���i���B"<<endl;
	}
		system("pause");
		return 0;
}
