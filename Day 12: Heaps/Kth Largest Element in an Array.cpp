class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        priority_queue<int,vector<int>,greater<int>> minpq;
        int n = v.size();

        for(int i = 0;i < n;i++){
            if(minpq.size() < k) minpq.push(v[i]);
            else{
                if(minpq.top() < v[i]){
                    minpq.pop();
                    minpq.push(v[i]);
                }
            }
        }
        return minpq.top();
    }
};
