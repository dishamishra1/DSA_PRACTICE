class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        int n=arr.size();
        for(int i=0 ; i<n ; i++)
        {
             int left_sum=0;
             int right_sum=0;
             for(int j=0 ; j<i ; j++)
             {
                 left_sum+=arr[j];
             }
             for(int k=i+1 ; k<n ; k++)
             {
                 right_sum+=arr[k];
             }
             if(left_sum==right_sum) return i;
        }
        return -1;
    }
};
