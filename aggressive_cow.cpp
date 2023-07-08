int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.


check(int mid,int k,vector <int> stalls){
    int count=1,last = 0;
    for(int i=0 ; i<stalls.size();i++){
        if(abs(stalls[i]-stalls[last])>=mid){
            count++;
            last =i;
        }
    }
    if(count>=k){
      return true;
    }
    return false;
}

    int max = 0;
    for(auto i:stalls)
    max  = (max<i)?i:max;

    sort(stalls);
    int mid,ans,s = 0,e=max;
while(s<e){
if(check(mid,k,vector)){
    ans = mid;
    s=mid+1;
}
else{
    e=mid;
}
}
return ans;
}