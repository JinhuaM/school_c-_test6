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
			cout<<"��"<<i+1<<"��,��"<<j+1<<"�е�Ԫ��Ϊ:";
			cin>>date[i][j];
		}
	}
	cout<<"������ľ���Ϊ��"<<endl;
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<date[i][j]<<"  ";
		}
		cout<<endl;
	}

	cout<<"ת�ú�ľ���Ϊ��"<<endl;
	move(date);
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<date[i][j]<<"  ";
		}
		cout<<endl;
	}

}