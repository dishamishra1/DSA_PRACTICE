class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n=arr.size()+1;
        long long n_sum= n*(n+1)/2;
        long long sum=0;
        for(int i=0 ; i<arr.size() ; i++)
        {
            sum+=arr[i];
            
        }
        return n_sum-sum;
    }
};
