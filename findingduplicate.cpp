#include<iostream>
#include<vector>

using namespace std;
int func(int arr[],int size){
 
};

// int findDuplicate(vector<int> &arr) 
// {
//     int sum =0;
//     int gh;
//    for(int i:arr)
//         sum+=i;
//     int n = arr.size();
//     gh = sum - (n*(n-1))/2;
//     return gh;

// }

// int findDuplicate(vector<int> &arr) {

//   // int arr2[arr.size()];
//   int ans = 0;

// //   xoring vector
//   for (auto i:arr){
//     ans ^= i 
// }
//     // xoring to [1,n-1]
//     for(int i=1;i<arr.size();i++)
//     ans ^= i;
//         // arr2[i] = i;
//     return ans;
// }


// multiplyiing the n-numth position with -1 and checking for negative values noice 
 vector<int> findDuplicates(vector<int>& nums) {
    vector<int> ans;

    for (const int num : nums) {
      nums[abs(num) - 1] *= -1;
    cout<< abs(num)<<" : "<<nums[abs(num) - 1]<<endl;
    //   if (nums[abs(num) - 1] > 0)
    //     ans.push_back(abs(num));
    }

    return ans;
  }

//coutning
// class Solution {
// public:
// //coutning is always there
//     vector<int> findDuplicates(vector<int>& nums) {
//         int n = nums.size();
//         int *arr = (int *)calloc(n+1,4);
//         vector <int> gh;
//         for(auto i:nums){
//             *(arr+i) +=1;
//             if(*(arr+i)==2){
//                 gh.push_back(i);

//             }
//         }


//         return gh;
//     }
// };


//sort counting
// vector <int>findDuplicates(vector<int>& nums){
//       int count = 1;
//       vector<int> res;
//       if(nums.size()==0)
//          return res;
//       sort(nums.begin(),nums.end());
//       for(int i=0;i< nums.size()-1;i++){
//           if(nums[i]==nums[i+1])
//           {
//               count++;
//               if(count == 2)
//               {
//                   res.push_back(nums[i]);
//                   count =1;
//               }
//           }
//           else
//           {
//               count =1;
//           }
//       }
//       sort(res.begin(),res.end());
//       return res;

int main(){
 vector<int> arr = {1,2,2,6,3,5,6,1};
findDuplicates(arr);

}
