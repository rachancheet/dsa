#include <bits/stdc++.h> 
#include <set> 
#include <vector> 


vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    set <int> values,m_values;
    for(auto i:arr){
        values.insert(i);
        m_values.insert(k-i);
            }

    for(auto i:arr)
        if (values.find(k-i) != values.end());

}