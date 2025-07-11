#include <iostream>
#include <vector>
using namespace std;

int Container_With_Most_water(vector<int> &nums){
    int left = 0, right = nums.size() - 1, max_water = 0,curr_water=0;
    int width,height;
    while(left < right){
        width = right - left;
        height = min(nums[left],nums[right]);
        curr_water = width * height;
        max_water = max(max_water,curr_water);
        nums[left] < nums[right] ? left++ : right--;
    }
    return max_water;
}

int main(){
    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    cout<<Container_With_Most_water(vec);
}