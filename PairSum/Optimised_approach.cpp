#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int> &nums,int target){
    vector<int> ans;
    int start = 0,end = nums.size() - 1;
    while(start <= end){
        if(nums[start] + nums[end] > target){
            end--;
        }
        if(nums[start] + nums[end] < target){
            start++;
        }
        if(nums[start] + nums[end] == target){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
    return {};
}

int main(){
    vector<int> vec = {2,7,11,15};
    int k = 17;
    vector<int> ans = PairSum(vec,k);
    cout<<ans[0]<<" "<<ans[1];
}