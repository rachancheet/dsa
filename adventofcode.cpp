#include<iostream>
#include<vector>
#include<bitset>   
#include <string.h>
using namespace std;

// ehefsiseufefuasihfiehsaoeshfiseiseuifiueahshfosehfishfhdihfw
// finding the index after 14 consecutive unique characters
int q1(string s){
    // int a =0;
    int *arr = (int *) calloc(26,4);
    int i=0;
    for(; i<s.length(); i++){
        int j   = i;
        for(; j  <  i+14;j++){
            if(arr[((int)s[j])%32]){
                i = j;
                break;

            }   
            else{
                arr[((int)s[j]%32)] =1;
            }

        }
        if(j==i+14)
            return j;
    }    
    return i;

};
int main(){

//  string s="qqwertyuipoasdfhjklzxcvbnm";
//  int k = q1(s);
// cout<<k<<" : "<<s.substr(k-9, k-1);
    int num = 234;
    cout<<num[0];

}

