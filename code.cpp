class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0,val=0;
        double mx = (-1)*pow(2,31);
        vector <int> check = nums;
        for(int i=0;i<k;i++) sum+=nums[i];
        if(mx<(sum*(1.0)/k)) mx=sum*(1.0)/k;
        for(int i=0;i<check.size();i++){
            val += check[i];
            check[i]=val;
        }
        for(int i=1;i<check.size();i++){
            if(k+i>check.size()) break;
            else{
                double test = (double)((check[i+(k-1)]-check[i-1])*1.0)/k;
                if(mx<test) mx = test;
            }
        }
        return mx;
    }
};
