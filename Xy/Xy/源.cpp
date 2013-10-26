#include<iostream>
using namespace std;
float cal(float x,int y){
	float result=NULL;
if(y==1){
result = x;
}else if(y!=1){
	result = cal(x,y-1)*x;
}
return result; 
}
int main(){
	float x;
	int y;
cout<<"Please input x:\t";
cin>>x;
cout<<"Please input y:\t";
cin>>y;
cout<< "The result is :\t"<<cal(x,y);
system("Pause");
return 0;
}
