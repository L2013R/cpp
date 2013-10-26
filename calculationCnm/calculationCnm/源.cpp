#include<iostream>
using namespace std;
float cnm(int n,int m){
	int pn = 1,pm = 1;
	float result = NULL;
	for(int i=m;i>(m-n);i--){
	pn = pn*i;
	}
	for(int j=1;j<=n;j++){
	pm = pm*j;
	}
	result =1.0*(pn/pm);
	return result;
}
int main(){
	int n,m;
cout<<"Please n:";
cin>>n;
cout<<"Please m:";
cin>>m;
cout<<"cnm is:"<<cnm(n,m);
	getchar();
	getchar();
return 0;
}