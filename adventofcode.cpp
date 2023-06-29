#include<iostream>
#include<vector>
#include<bitset>   
using namespace std;

// ehefsiseufefuasihfiehsaoeshfiseiseuifiueahshfosehfishfhdihfw
// finding the index after 14 consecutive unique characters
int q1(string s){
    // int a =0;
    int arr = (int *) calloc(26*4);
    for(int i=0; i<s.length(); i++){
        for(int j   = i; j  <  i+14;j++){
            // 1<<(s[i]%32);
            if(arr[((int)s[j]%32)]){
                i = j+1;
                break;
                
            }
            else{
                arr[((int)s[j]%32)] =1;
            }

        }

    }    

};
int main(){

cout<<(int)'y';


}

