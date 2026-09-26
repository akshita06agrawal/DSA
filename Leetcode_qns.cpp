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


// 58. Length of last word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int len=0;
        while(i>=0 && s[i]==' '){
            i--;
        }
        while(i>=0 && s[i]!=' '){
            len++;
            i--;
        }
        return len;
    }
};


// 415. Add Strings
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;

        string ans = "";

        while(i >= 0 || j >= 0 || carry) {

            int a = 0;
            int b = 0;

            if(i >= 0)
                a = num1[i] - '0';

            if(j >= 0)
                b = num2[j] - '0';

            int sum = a + b + carry;

            ans += (sum % 10) + '0';

            carry = sum / 10;

            i--;
            j--;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};




// 836 Rectangle Overlap
class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1[0]<rec2[2] && rec2[0]<rec1[2] && rec1[1]<rec2[3] && rec2[1]<rec1[3]){
            return true;
        }
        
        return false;
    }
};



//747. Largest Number at least twice of others
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=nums[0];
        int maxi_index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                maxi_index=i;
            }  
        }
        for(int i=0;i<nums.size();i++){
            if(2*nums[i]>maxi && nums[i]!=maxi){
                return -1; 
            }
        }
        return maxi_index;
    }
};



// 88. Merge sorted array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};



// 1903. Largest Odd number in a string 
class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};



// 69. Sqrt(x)
class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int left=0;
        int right=x;
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(mid<=x/mid){
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return ans;
    }
};




// 367. Valid Perfect Square
class Solution {
public:
    bool isPerfectSquare(int num) {
        int left=1;
        int right=num;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(mid==num/mid && num%mid==0){
                return true;
            }
            else if(mid<num/mid){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return false;
    }
};



// 20. Valid parentheses
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else {
                if (st.empty()) {
                    return false;
                }
                char top = st.top();
                st.pop();
                if (ch == ')' && top != '(') return false;
                if (ch == ']' && top != '[') return false;
                if (ch == '}' && top != '{') return false;
            }
        }
        return st.empty();
    }
};





// 74. Search a 2D Matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int right=m*n-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            int row=mid/n;
            int col=mid%n;
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }

            }
            return false;
        }
};




// 832. Flipping an image
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &row:image){
            reverse(row.begin(),row.end());

            for(auto &x:row){
                x=1-x;
            }
        }
        return image;
    }
};



// 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=0;
        for(auto &row:accounts){
            int sum=0;
            for(auto &x:row){
                sum+=x;
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};




// 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];   //primary diagonal
            sum+=mat[i][n-i-1];  //secondary diagonal
        }
        if(n%2==1){
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
};


//54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0;
        int bottom=m-1;
        int left=0;
        int right=n-1;
        vector<int>spiral;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                spiral.push_back(matrix[top][i]);
            }   
            top=top+1;
            for(int i=top;i<=bottom;i++){
                spiral.push_back(matrix[i][right]);
            }
            right=right-1;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    spiral.push_back(matrix[bottom][i]);
                }
                bottom=bottom-1;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    spiral.push_back(matrix[i][left]);
                }
                left=left+1;
            }
        }
        return spiral;
    }
};




// 941. Valid Mountain Array
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int left=0,right=n-1;
        if(n<3){
            return false;
        }
        while(left+1<n && arr[left]<arr[left+1]){
            left++;
        }
        while(right>0 && arr[right-1]>arr[right]){
            right--;
        }
        return left==right && left!=0 && left!=n-1;
    }
};





//742. Find pivot index
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int low=0,high=0;
            for(int j=i-1;j>=0;j--){
                low+=nums[j];
            }
            for(int k=i+1;k<nums.size();k++){
                high+=nums[k];
            }
            if(low==high){
                return i;
            }
        }
        return -1;
    }
};



// 1299. Replace Elements with Greatest Element on Right Side
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>res;
        for(int i=0;i<arr.size()-1;i++){
            int maxi=0;
            for(int j=i+1;j<arr.size();j++){
                maxi=max(maxi,arr[j]);
            }
            res.push_back(maxi);
        }
        res.push_back(-1);
        return res;
    }
};




//566. Reshape the Matrix
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c){
            return mat;
        }
        int row=0,col=0;
        vector<vector<int>>ans(r,vector<int>(c));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[row][col]=mat[i][j];
                col++;
                if(col==c){
                    col=0;
                    row++;
                }
            }
        }
        return ans;
    }
};





// 844. Backspace String Compare
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;

        // Process s
        for(char c : s) {
            if(c != '#') {
                st1.push(c);
            }
            else if(!st1.empty()) {
                st1.pop();
            }
        }

        // Process t
        for(char c : t) {
            if(c != '#') {
                st2.push(c);
            }
            else if(!st2.empty()) {
                st2.pop();
            }
        }

        return st1 == st2;
    }
};




// 1832. Check if the Sentence Is Pangram
class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>s;
        for(char c:sentence){
            s.insert(c);
        }
        if(s.size()==26){
            return true;
        }
        else{
            return false;
        }
    }
};







// 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }        
    }
};