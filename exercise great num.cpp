#include<iostream>
using namespace std;
int main ()
{
int x;
cout<<"enter x: ";
cin>>x;

if (x<0 || x>100)	
	cout<<"invalid number!";
else
	if (x>49)
		cout<<"passed!";
	else
		cout<<"failed!";	
	
return 0;	
	
}
