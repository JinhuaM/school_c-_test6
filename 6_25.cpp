#include <iostream>
using namespace std;

void move(int newDate[][3]){
	int k,i,j;
	for(i=0;i<3;i++)
		for(j=0;j<i;j++){
			k=newDate[i][j];
			newDate[i][j]=newDate[j][i];
			newDate[j][i]=k;
		}
}

int main(){
	int date[3][3];
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"第"<<i+1<<"行,第"<<j+1<<"列的元素为:";
			cin>>date[i][j];
		}
	}
	cout<<"你输入的矩阵为："<<endl;
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<date[i][j]<<"  ";
		}
		cout<<endl;
	}

	cout<<"转置后的矩阵为："<<endl;
	move(date);
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<date[i][j]<<"  ";
		}
		cout<<endl;
	}

}