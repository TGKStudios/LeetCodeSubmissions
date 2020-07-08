//given a vector (nums), I return all numbers with an even number of digits.

class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int count =0;
       for(int i =0; i < nums.size(); i++)
       {
           int t = log10(nums[i])+1;
          if(t%2==0){count++;}
       }
   return count;
  }};
