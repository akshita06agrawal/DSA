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



// maximum subarray sum whose window size equals to k
#include<bits/stdc++.h>
using namespace std;
 
int maxSumSubarray(vector<int> &arr, int k){
    int windowSum = 0;
 
    for(int i=0; i<k; i++){
        windowSum += arr[i];
    }
 
    int maxSum =  windowSum;
 
    for(int i=k; i<arr.size(); i++){
        windowSum += arr[i];
        windowSum -= arr[i-k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}
 
int main(){
     vector<int> arr = {2, 1, 5, 1, 3, 2};
 
    cout<<maxSumSubarray(arr, 3);
    return 0;
}
