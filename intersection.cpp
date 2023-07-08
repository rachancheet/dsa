#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

int n ,m;
void fu(vector<int> &arr,vector<int> &arr2,int i,int j,vector<int> &ans){
   if(i >=(n) || j>=(m)){return;}
   
   if(arr[i]==arr2[j]){
       ans.push_back(arr2[j]);
	//    cout<<endl<<i<<" : "<<j<<" --- "<<arr[i]<<"-----"<<arr2[j];
       fu(arr,arr2,++i,++j,ans);
   }
   else if(arr[i]>arr2[j]){
       fu(arr,arr2,i,++j,ans);
   }
   else if (arr[i] < arr2[j]) {
     fu(arr, arr2, ++i, j,ans);
   }
	// return ans;
}
vector <int> findArrayIntersection(vector<int> &arr, int jo, vector<int> &arr2, int po){
	
	vector <int> ans;
	n=jo; m =  po;
	fu(arr,arr2,0,0,ans);
	return ans;
	// Write your code here.
}
int main(){
    vector <int> arr = {1 ,2, 2 ,2 ,3, 4};
    vector <int> arr2 = {2, 2, 3, 3};
    vector <int> arr3 = findArrayIntersection(arr,3,arr2,3);
    for(auto i:arr3){
        // cout<<"hey";
        cout<<i<<" , ";
    }
}