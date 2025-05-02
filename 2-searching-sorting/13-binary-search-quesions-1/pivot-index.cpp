#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum;
        int index = 0;
        int sumTillIndex = 0;
        while(index < nums.size()){
            sumTillIndex += nums[index];
            prefixSum.push_back(sumTillIndex);
            index++;
        }

        index = 0;
        int totalSum = prefixSum[prefixSum.size() - 1];
        if(totalSum - nums[0] == 0){
            return 0;
        }
        for(index = 1; index < prefixSum.size(); index++){
            int leftSum = prefixSum[index - 1];
            int rightSum = totalSum - prefixSum[index];
            if(leftSum == rightSum){
                return index;
            }
        }

        return -1;
    }

int main(void){
    vector<int> nums = {-1, -1, 0, 1, 1, 0};

    cout << "The pivot index in the given array is : " << pivotIndex(nums) << endl;
}