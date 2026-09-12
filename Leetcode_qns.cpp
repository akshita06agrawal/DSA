// 14. Longest Common Prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        string result="";
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]==last[i]){
                result+=first[i];
            }
            else{
                return result;
            }
        }
        return result;
    }
};



// 167 Two Sum II-Input Array is Sorted
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        vector<int>temp;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                temp.push_back(i+1);
                temp.push_back(j+1);
                break;
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
        return temp;
    }
};



// 53. Maximum subarray sum
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum=nums[0];
        int max_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            curr_sum=max(nums[i],curr_sum+nums[i]);
            max_sum=max(curr_sum,max_sum);
        }
        return max_sum;
    }
};



// 1108 Defanging an IP Address
class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for(char c:address){
            if(c=='.'){
                result+="[.]";
            }
            else{
                result+=c;
            }
        }
        return result;
        }
};



// 709 To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        string result;
        for(char c:s){
            if(c>=65 && c<=90){
                result+=(c+32);
            }
            else{
                result+=c;
            }
        }
        return result;
    }
};



// 344. Reverse String
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
    }
};



// 26. Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int i=0;
        int j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};



// 1480. Running Sum of 1d Array
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>result;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            result.push_back(sum);
        }
        return result;
    }
};



// 2390 Removing stars from string
class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch=='*'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


// 3903 Smallest Stable Index I
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int maxi=nums[0];
            for(int j=0;j<=i;j++){
                maxi=max(nums[j],maxi);
            }
            int mini=nums[i];
            for(int j=i;j<n;j++){
                mini=min(nums[j],mini);
            }
            if(maxi-mini<=k){
                return i;
            }
        }
        return -1;
    }

};


// 345 Reverse vowels of a string
class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        int right=s.size()-1;
        set<char>vowels={'a','e','i','o','u'};
        while(left<right){
            while(left<right && vowels.find(tolower(s[left]))==vowels.end()){
                left++;
            }
            while(left<right && vowels.find(tolower(s[right]))==vowels.end()){
                right--;
            }           
            if(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            } 
        }
        return s;
    }
};

