#include<bits/stdc++.h>
using namespace std;

class gfg 
{ 
 public : int gcd(int a, int b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
 int lcm(int a, int b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
} ; 

int main()
{
	gfg g; 
	int x,y,p,q,d1,d2;int b1,b2,b3=1;
	cin>>x>>y>>p>>q;
    b1=b3*p;b2=b3*q;
    d1=g.gcd(b1,x);b1=b1/d1;x=x/d1;
	d2=g.gcd(b2,y);b2=b2/d2;y=y/d2;
    if(b1%x!=0 && b2%y==0)
	  {b1=b1;b2=(b2*x)/y;b3=b3*x;}
    else if(b1%x==0 && b2%y!=0) 
	   {b1=(b1*y)/x;b2=b2;b3=b3*y;}
	else if(b1%x!=0 && b2%y!=0){
		 int l=g.lcm(x, y);
		 b1=(b1*l)/x;b2=(b2*l)/y;b3=b3*l;}
	else
	    {b1=b1/x;b2=b2/y;}
    cout<<b1<<" "<<b2<<" "<<b3;			 
	return 0;
}