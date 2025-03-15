#include<iostream>
using namespace std;
int fact(int num){
if(num>1){

	return num;
}
else
 	return(num*fact(num-1));
}
int main(){

int i;
cout<<"enter num: ";
cin>>i;
cout<<fact(i);
	
return 0;


}
