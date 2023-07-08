#include<stdio.h>
#include<iostream>
using namespace std;
int func(int num){

    if(num == 1){
        return 1;
    }
    // k+= func(num-1,k);
    return func(num-1)+1;

}
// char reverse_string(char s[]){
//     // cout<<sizeof(s);
//     // int l[]= s/;
//     // cout<<l;
//     for(int i=0; i<17; i++){
//         cout<<s[i]<<',';
//     }
//     *s = 'c';
//     // return "loda";
// }
void f(char *o){
    // s = "fuck off";
    cout<<o;
}


int main(){

    // string s = "eifwnef ue feufwn inef efe ife fwe fe fiu";
    // // char s[] = "eifwnef ue feufwn inef efe ife fwe fe fiu";
    // // int s[] = {1,2,3,4,3,4,2234,3};
    // // cout<<sizeof(s)/4<<endl;
    // // reverse_string(s);
    // char *k = &s[1];
    // *k = 'k';
    // cout<<s;


    // string b  = "don't abuse";
    // cout<<b;
    // f(b);
    // cout<<b;
    // char o[] = {'c','a','k','e'};
    // f(o);
    
    cout<<"hello";

}