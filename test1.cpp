#include<iostream>
using namespace std;

int main(){
	int a[5]={2,54,11,3,32};
	int max=a[0];
	int min=a[0];
	int indexMax=0,indexMin=0;
	for(int i=0;i<5;i++){
		if(a[i]>max){
			max=a[i];
			indexMax=i;
		}
		if(a[i]<min){
			min=a[i];
			indexMin=i;
		}
	}
	int t=a[indexMax];
	a[indexMax]=a[indexMin];
	a[indexMin]=t;

	for(int j=0;j<5;j++)
		cout<<a[j]<<" ";
	cout<<endl;
	return 0;
}