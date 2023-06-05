#include<iostream>
#include <set>
#include <vector>

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;
    set <int> set1;
    for(auto i:arr){
        set1.insert(i);
    }
    int k = 0;
    for(auto i:arr){
        if((s-1>0) && set1.count(s-i)){
            ans[k].push(i,s-i);
            k+=1;

        }
    }
    return ans;
}
int main(){

}