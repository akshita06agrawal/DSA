// Kadane's algorithm(maximum subarray sum)
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int kadane(vector<int> &nums){
        int max_sum=nums[0];
        int curr_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            curr_sum=max(nums[i],curr_sum+nums[i]);
            max_sum=max(max_sum,curr_sum);
        }
        cout<<"Maximum subarray sum is: ";
        return max_sum;
    }
};
int main(){
    vector<int> nums;
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    Solution obj;
    cout<<obj.kadane(nums)<<endl;
    return 0;
}



// maximum subarray sum eqauals k
#include<iostream>
using namespace std;
class Solution{
    public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int max_len=0;
        for(int i=0;i<n;i++){
            
        }
    }
};
int main(){
    vector<int>nums;
    int n,k;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"Enter value of k:";
    cin>>k;
    cout<<"Maximum subarray sum equal to k is: ";
    cout<<maxSubArrayLen(nums,k)<<endl;
}