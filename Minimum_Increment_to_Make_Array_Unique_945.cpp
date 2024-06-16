#include <bits/stdc++.h>
using namespace std;

int minIncrementForUnique(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());

        int sum = 0;
        for(int i=1;i<n;i++){
            while(nums[i] <= nums[i-1]){
                nums[i] += 1;
                sum++;
            }
        }

        return sum;
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }

    cout << minIncrementForUnique(nums);
    return 0;
}