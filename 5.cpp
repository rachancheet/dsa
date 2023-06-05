#include <bits/stdc++.h>

  bool if_possible(int t,int n,int m,vector<int> time) {
    int i = 0;
    for (int k = 0; k < n; k++) {
      int time_rem = t;
	  if(i>m)
	  break;
      while (time[i] <= time_rem) {
        time_rem -= time[i];
        i++;
      }
    }
	// cout<<"i :"<<i<<endl;
    if (i >= m) {
      return true;
    }
    return false;
  }

long long ayushGivesNinjatest(int n, int m, vector<int> time) {
  // Write your code here
  int max=0;
  for (auto i : time) {
    max += i;
	// cout<<"loda: "<<i<<endl;
  }

	// cout<<"toatal"<<max<<endl;

  int s = 0, e = max;
  int mid, ans =max;
  while (s < e) {
    mid = (s + e) / 2;
	// cout<<"mid :"<<mid<<endl;
    if (if_possible(mid,n,m,time)) {
      ans = mid;
      e = mid;
    } else {
      s = mid + 1;
    }
  }
  return ans;
}