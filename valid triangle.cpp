#include<iostream>
using namespace std;
int main ()
{
int x,y,z,sum;
cout<<"enter angle x: ";
cin>>x;
cout<<"enter angle y: ";
cin>>y;
cout<<"enter angle z: ";
cin>>z;
sum=x+y+z;
cout<<"the sum is: "<<sum<<endl;
if(x==0||y==0||z==0 && sum!=180){
	cout<<"invalid";		
}
else
	cout<<"valid";
	
return 0;		
}

