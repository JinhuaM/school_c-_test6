#include<iostream>
using namespace std;

int main(){
	int a[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
		cout<<a[i];
	cout<<endl;
	int t;
	for(int i=0;i<5;i++){
		t=a[i];
		a[i]=a[5-i-1];
		a[5-i-1]=t;
	}
	for(int i=0;i<5;i++){
		cout<<a[i];
	}
}