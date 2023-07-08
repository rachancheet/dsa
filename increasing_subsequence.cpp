class Solution {
public:
    vector<int> arr1;
    vector<int> conts;
    Solution(){
        arr1={};
        conts={};
    }
    int low_recurse(int i ,int prev, int low,int j){
        if(j>(arr1.size()-1)){
            return 0;
        }
        if(arr1[j]>arr1[prev] && arr1[j]<arr1[low]){
            // prev = j;
            return 1+low_recurse(i,j,low,j+1);
        }
        if(arr1[j]>arr1[prev] && j==low){
            return 1+ recurse(i,j,j+1);
        }

        return low_recurse(i,prev,low,j+1);
    }

    int recurse(int i ,int prev,int j){
        if(j>(arr1.size()-1)){
            return 0;
        }
        if(arr1[j]>arr1[prev]){
            // prev = j;
            return 1+recurse(i,j,j+1);
        }
        else if(arr1[j]>arr1[i]){
            conts.push_back(low_recurse(i,i,j,i+1)+1);
        }
        return recurse(i,prev,j+1);
    }
    int lengthOfLIS(vector<int> arr) {
        arr1=arr;
        for(int i =0;i<arr.size();i++){
            conts.push_back(recurse(i,i,i+1)+1);
        }
        int max=0;
        for(auto k:conts){
            cout<<k;
            max = (k>max)?k:max;
        }
        return max;
        
    }
};