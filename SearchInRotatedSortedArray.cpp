
int searchInRotatedSortedArray(vector<int>&nums,int target){
    int s =0;
    int e = nums.size()-1;
    int mid;
    while(s<=e){
        mid = s+ (e-s)/2;
        if(nums[mid]==target) return mid;

        // Left half
        if (nums[s]<= nums[mid])
        {
              if ( nums[mid]>target && nums[s]<= target)
              {
                e = mid-1;

              }
              else s= mid+1;
              
        }
        // right half
        else{
             if (nums[mid] < target && target <= nums[e]) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
        }
        
    }

    return -1;
}
