#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float num1,num2,num3;
cout<<"Please inputthree numbers:";
cin>>num1>>num2>>num3;
cout<<setw(8)<<setprecision(12);
cout<<"The average of "<<num1<<", "<<num2<<"and "<<num3;
cout<<"is:"<<setw(20)<<(num1+num2+num3)/3<<endl;
getchar();
getchar();
return 0;
}