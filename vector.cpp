// #include<stdlib>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int countingoccurances(vector<int> &arr) 
{
    // Write your code here
    int n = arr.size();
    // cout<<n<<endl;
    int *arr2 = (int *)calloc(n,4);

    // for(int i =0;i<n;i++){
    //         cout<<(arr2[i])<<endl;
    // }

        for(auto i:arr){
        // cout<<i<<endl;
            *(arr2+ i) +=1;
        }
    for(int i=0;i<n;i++){
        // cout<<i<<arr2[i]<<endl;
        if(arr2[i]>1){

            return i;
        }
    }
    return 0;
}
int main(){
    vector<int> arr = {1,4,2,3,2};
        // cout<<"loda";

    // arr.insert(arr.begin(),0);
    // arr.push_back(12);
    // for(auto i :arr){
    //     cout<<i;
    //     }
    // cout<<arr;
    cout<<countingoccurances(arr);
}

// class Solution {
// public:
//     bool uniqueOccurrences(vector <int> arr) {
//         int *arr2 = (int *)calloc(1000,4);
//         for(auto i=arr.begin();i!=arr.end();++i){
//             *(arr2+ *i) +=1;
//         }
//         cout<<all_of(arr2, arr2+1000));
//         //     return true;
//         // }

//         return false;
        
//     }
// };