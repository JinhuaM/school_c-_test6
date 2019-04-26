#include <iostream>
using namespace std;

int main(){
	int a[5];
	cout<<"请输入5个整数:"<<endl;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<"你输入的数组是："<<endl;
	for (int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}