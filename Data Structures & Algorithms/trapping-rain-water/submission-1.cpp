class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        stack<int> pre;
        pre.push(0);
        stack<int> suf;
        suf.push(0);
        vector<int> prefix;
        vector<int> sufix;
        int n = height.size();
        int i = 0;
        int j = n - 1;

        while(i < n){
            if(height[i] >= pre.top()){
                prefix.push_back(0);
                pre.push(height[i]);
                i++;
            }
            else{
                prefix.push_back(pre.top());
                i++;
            }
            if(height[j] >= suf.top()){
                sufix.push_back(0);
                suf.push(height[j]);
                j--;
            }
            else{
                sufix.push_back(suf.top());
                j--;
            }
        }
        reverse(sufix.begin(), sufix.end());
        // for (int x : prefix) {
        //     cout << x << " ";
        // }
        // cout<<endl;
        // for (int x : sufix) {
        //     cout << x << " ";
        // }


        for(int k = 0; k < n; k++){
            int mini = min(prefix[k],sufix[k]);
            int trap = mini - height[k];
            cout<<ans;
            if(trap > 0){
                
                ans += trap;
            }
        }
        return ans;


    }
};
