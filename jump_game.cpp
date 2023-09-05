 int maxResult(vector<int>& a, int k) {
        priority_queue<pair<int,int>>q;
        int n=a.size();
        vector<int> s(n,0);
        for(int i=0;i<n;i++)
        {
            while(!q.empty() && q.top().second<i-k)
            {
                q.pop();
            }
            s[i]+=a[i];
            if(!q.empty())
            {
                s[i]+=q.top().first;
            }
            q.push({s[i],i});
        }
        return s[n-1];
        
    }
