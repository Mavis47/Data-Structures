#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Moore_Voting_algo(vector<int> &nums){
    int n=nums.size();
    int freq=0,ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

int main(){
   vector<int> vec = {1,2,2,2,2,1};
   cout<<Moore_Voting_algo(vec);
}