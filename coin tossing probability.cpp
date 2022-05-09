#include<iostream>
using namespace std;
int coin,sample_space=1,coin2,probability,base=2;float result ;
int main()
{
	cout<<"\n PROBABILITY TO FIND TOSSED COINS  "<<endl;
	cout<<"\n-----------------------------------"<<endl;
	cout<<"\nENTER HOW MANY COINS YOU WANT TO TOSS : ";
	cin>>coin;
	coin2=coin;
	while(coin!= 0)
	{
	    sample_space=sample_space*base;
		coin--;	
	}
	result=float(coin2)/sample_space;
	cout<<"\nThe Sample Space Is : "<<sample_space<<endl;
	cout<<"\nThe Probability Is : "<<result<<endl;
	return 0;
}
