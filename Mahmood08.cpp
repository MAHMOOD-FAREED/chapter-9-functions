#include <iostream>
using namespace std;
void max(int a,int b);
int main(){
	int x,y;
	cout<<"enter two numbers";
	cin>>x>>y;
	max(x,y);
	return 0;
}
void  max(int a , int b){
	if(a>b){
		cout<<a<<"is a greater number";
	}
	if(b>a){
		cout<<b<<"is a greater number";
	}
  
}
