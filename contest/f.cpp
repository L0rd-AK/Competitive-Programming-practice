int maxSubarraySum(int* nums, int numsSize) {
    int ans = INT_MIN;  
    int sum = 0;    

    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];         
        if (sum > ans) {      
            ans = sum;
        }
        if (sum < 0) {           
            sum = 0;
        }
    }

    return ans; 
}