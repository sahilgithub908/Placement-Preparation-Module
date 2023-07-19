#include <bits/stdc++.h> 
vector<int> maxSlidingWindow(vector<int> &arr, int n, int k){
    vector<int> ans;
    priority_queue<pair<int, int>> pq;

    for(int i = 0; i < k; i++){
        pq.push({arr[i], i});
    }

    ans.push_back(pq.top().first);

    for(int i = k; i < n; i++){
        pq.push({arr[i], i});
        if(pq.top().second <= i-k){
            while(pq.top().second <= i-k){
                pq.pop();
            }
        }
        ans.push_back(pq.top().first);
    }

    return ans;
}
