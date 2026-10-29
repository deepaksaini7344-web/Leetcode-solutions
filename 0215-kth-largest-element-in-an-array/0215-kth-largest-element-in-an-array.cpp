class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        heapSort(nums,n);
        return nums[n-k];
    }
    void Maxheapify(vector<int>&nums,int n, int i){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;

        if(left<n && nums[left] >= nums[largest]){
            largest = left;
        }
        if(right<n && nums[right] >= nums[largest]){
            largest = right;
        }
        if(i != largest){
            swap(nums[i],nums[largest]);
            Maxheapify(nums,n,largest);
        }
    }
    void BuildMaxheap(vector<int>&nums,int n){
        int lastleafNode = (n/2)-1;
        for(int i = lastleafNode ; i >= 0;i--){
           Maxheapify(nums,n,i);
        }
    }
    void heapSort(vector<int>&nums,int n){
        BuildMaxheap(nums,n);
        for(int i = n-1; i>= 1;i--){
            swap(nums[0],nums[i]);
            Maxheapify(nums,i,0);
        }
    }
};