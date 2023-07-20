#include <iostream>
#include<vector>
using namespace std;


class Solution {
	public:
		vector<int> arr1;
		vector<int> conts;
		Solution(){
			arr1={3,2,5,12,65};
			conts={};
		
		}


		int recurse(int i , int n ){
			if(n==arr1.size())
				return 0;
			if(arr1[n]>arr1[i]){

			
				return max(recurse(i,n+1),recurse(n,n+1)+1);
			
			}
			return recurse(i,n+1);



		}
};

int main(){

Solution fuck;
for(int i=0;i<5;i++)
cout<<fuck.recurse(i,0)<<endl;
}
