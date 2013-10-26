#include<iostream>
using namespace std;
void move(int n,char start,char medium,char end){
	if(n==1){
		cout<<"put"<<n<<"from"<<start<<"to"<<end<<endl;
	}
	if(n!=1){
		move(n-1,start,end,medium);
	cout<<"put"<<n<<"from"<<start<<"to"<<end<<endl;
	move(n-1,medium,start,end);
	}
}
int main(){
		int n;
		char start,medium,end;
		cout<<"Please input the number of tower:\t";
		cin>>n;
		cout<<"Please input the start position:\t";
		cin>>start;
		cout<<"Please input the medium position:\t";
		cin>>medium;
		cout<<"Please input the end position:\t";
		cin>>end;
		cout<<"The processes:\t"<<endl;
		move(n,start,medium,end);
		getchar();
		getchar();
		return 0;
}
