#include <iostream>
using namespace std;
int main(){
	
	
	int myarray[10],value=100;
	for (int i=0; i<10; i++){
	
	myarray[i]=value;
	value=value+1;
	
	cout<<"index: "<<i<<"\t element: "<<myarray[i]<<endl;
}
	return 0;
}
