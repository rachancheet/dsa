#include<iostream>
#include<vector>
#include<set>
usinf namespace std;
 
 
#include <bits/stdc++.h> 
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	int max_booktime;
	for(int i : Time)
	max_booktime = i>max_booktime?i:max_booktime;


	// int per_day = total/n;
	int rem_time,book = 0;
	int dayz[n];
	// vector <int> ans;
	for(int day=0;day<n;day++){
		rem_time = max_booktime;
		while(rem_time){
			if(Time[book]<rem_time){
			dayz[day] += Time[book];
			book++;
			rem_time -= Time[book];
			}
			else{
				break;
			}
		}

	}
	int ans;
	for(int i =0;i<n;i++)
	ans = dayz[i]>ans?dayz[i]:ans;


	return ans;

}

int main(){
 
 
 
 
 
return 0;
}