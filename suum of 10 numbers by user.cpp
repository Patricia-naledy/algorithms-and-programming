#include<iostream>
using namespace std;
int main ()

{
	
	int cnt=1,num,sum=0;
	float avg;
	while(cnt<=10)
	{
		cout<<"enter a value: ";
		cin>>num;
		sum=sum+num;
		cnt++;
		avg=(float)sum/10;
	}
cout<<sum<<endl;
cout<<avg;
return 0;
}
