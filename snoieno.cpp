#include <bits/stdc++.h>
#include<iostream>
using namespace std; 
int squareRoot(int a)
{
	int mid;
	if(!a || a==1)
	return a;
	if(a==2)
	return 1;
	int s = 0;
	int e = a/2;
	while(s<e){
        cout<<"e:"<<e<<endl;
        cout<<"s:"<<s<<endl;
		mid = (e+s)/2;
        cout<<"mid:"<<mid<<endl;
		if(mid*mid ==a )
		return mid;
		if(mid*mid > a){
			e=mid;
		}
		if(mid*mid < a){
			s=mid+1;
		}
	}
	return s-1;


	// return arr-1;
	// Write your code here.
}

int main(){
    squareRoot(10);
}