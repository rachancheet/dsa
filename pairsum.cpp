#include<iostream>
#include<vector>
using namespace std;

//  use for()  
//       for()
//             if()
//             push_back

vector<vector<int>> pairSum(vector<int> &arr, int s) {

   vector<vector<int>> ans;
   int k =0;
  int *pcount = (int *)calloc(100000, 4);
  int *ncount = (int *)calloc(100000, 4);

  for (auto i : arr){
    if (i > 0)
      pcount[i] += 1;
    else
      ncount[i] += 1;
}
   for(auto i: arr){
      if(0<(s-i)<100000){
         if(pcount[s-i] || ncount[abs(s-i)]){
         cout<<s-i<<":"<<i<<endl;
         ans.push_back(vector<int>());
         ans[k].push_back(i);
         ans[k].push_back(s-i);
         k++;
         }
      }
      // else if(0< abs(s-i)<100000){
      //    if(abs(s-1)< 100000 &&  ncount[abs(s-i)]){
      //    ans[i].push_back(i);
      //    ans[i].push_back(s-i);
      //             cout<<"loda";

      //    i++;
      //    }
      }


   return ans;
   // Write your code here.
}



int main(){
    vector<int> arr ={1,2,3,4,5};
    pairSum(arr,5);
}