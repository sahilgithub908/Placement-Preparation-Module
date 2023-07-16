vector<int> ans;
    
    void solve(int id,int sum,vector<int> arr, int N)
    {
        if(id>=N)return;
        
        ans.push_back(sum+arr[id]); // this line is the main thing
        
        solve(id+1,sum+arr[id],arr,N);
        
        solve(id+1,sum,arr,N);
        
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {

          ans.push_back(0);
        solve(0,0,arr,N);
              
        return ans;
    }
