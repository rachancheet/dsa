#include<iostream>
#include<vector>
using namespace std;
int func_count(vector <int> arr){
 vector <int> count_key;
 vector <int> count;
for(int i =0 ;i<arr.size();i++){
    int k =0;
    for(;k<count_key.size();k++){
        if(count_key[k]==arr[i]){
            count[k]+=1;
            break;
        }
    }
    if(k==count_key.size()){
        count_key.push_back(arr[i]);
        count.push_back(1);
    }

}
 vector <int> count_key_2;
 vector <int> count_2;
    
for(int i =0 ;i<count.size();i++){
    int k =0;
    for(;k<count_key_2.size();k++){
        if(count_key_2[k]==count[i]){
            count_2[k]+=1;
            break;
        }
    }
    if(k==count_key_2.size()){
        count_key_2.push_back(count[i]);
        count_2.push_back(1);
    }
}
for(auto j:count_2){
    if(j>1){
        cout<<"falls";
        return 0;
        // break;
    }
}
    for(auto i:count_key)
        cout<<"count_key:"<<i<<endl;
    for(auto i:count)
        cout<<"count:"<<i<<endl;

    for(auto i:count_key_2)
        cout<<"count_key_2:"<<i<<endl;
    for(auto i:count_2)
        cout<<"count2:"<<i<<endl;
    return 1;

};
int main(){
vector <int> arr = {2,8,8,2,3,2,8,2,8};
 cout<<func_count(arr);
}