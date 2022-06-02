// 二分查找

int search(vector<int>& nums, int target) {
    int high=nums.size()-1;
    int low=0;

    while (low<=high)
    {
        int mid=(low+high)/2;
        int num=nums[mid];
        if (num==target)
        {
            return mid;
        }
        else if (num>target)
        {
            mid=high-1;
        }
        else{
            mid=low+1;
        }
        
    }
    return -1;
    
}