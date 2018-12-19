#include <iostream>
using namespace std;

void div(double num,long *a,long *b)
{
	num*=10;*b*=10;
	if((num-(long)num)!=0)div(num,a,b);
	else *a=num;
}

long gcd(long a,long b)//Greatest common divisor 最大公因数的缩写 
{
    if(b>a){a+=b;b=a-b;a-=b;}a%=b;
    if(a==0)return b;
    else gcd(b,a);
}

int main()//@bilibili咩2016 
{
	double num[7]={0,2,1.5,0.25,8.125,0.88932,7.25};
	for(int i=0;i<7;i++)
	{
		long a,b=1;
		div(num[i],&a,&b);
		if(num[i]==0)cout<<"0 = 0"<<endl;
		else cout<<num[i]<<" = "<<a/gcd(a,b)<<" / "<<b/gcd(a,b)<<endl;
	}
}
