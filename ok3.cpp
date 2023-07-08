#include<vector>
// #include<Stdlib.h>
#include<iostream>
#include <set>
using namespace std;



    
    bool uniqueOccurrences(vector<int>& arr) {
     int n = arr.size();
    // cout<<n<<endl;
    int *parr = (int *)calloc(1001,4);
    int *narr = (int *)calloc(1001,4);


    

    for(auto i:arr){
    // cout<<i<<endl;
        // cout<<i;
        if(i<0){
        *(narr-i) +=1;
        // cout<<*(narr-i)<<endl;
        }
        else{
        *(parr+ i) +=1;
        // cout<<*(parr+i)<<endl;
        }
    }
    









    }

int main(){
    vector <int> ok = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2};
    cout<< uniqueOccurrences(ok);
}