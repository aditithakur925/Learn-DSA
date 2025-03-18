#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& nums,int target,int low,int high)
{
    if(low>high)
    {
        return -1;
    }
    int mid = low+(high-low)/2;
    if(target==nums[mid])
    {
        return mid;
    }
    if(target>nums[mid])
    {
        return binarySearch(nums,target,mid+1,high);
    }
    else{
        return binarySearch(nums,target,low,mid-1);
    }
    return -1;


}
int main() {
    vector<int> nums = {1,2,5,6,8,10,12};
    int n = nums.size();
    cout<<"Result: "<<binarySearch(nums,5,0,n-1);
    return 0;
}