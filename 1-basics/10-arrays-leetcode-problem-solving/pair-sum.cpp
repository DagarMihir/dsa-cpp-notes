#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &A, int target){

    vector<vector<int>> ans;

    for(int i = 0; i < A.size(); i++){
        for(int j = i + 1; j < A.size(); j++){
            if(A[i] + A[j] == target){
                ans.push_back({min(A[i], A[j]), max(A[i], A[j])});
            }
        }
    }
    sort(ans.begin(), ans.end()); // a predefined function to sort the array
    return ans;
}

int main(void){
    // vector<int>A = {1, 2, 3, 4, 5};
    vector <int>A = {2, -3, 3, 3, -2};
    vector<vector<int>> ans;

    // ans = pairSum(A, 5);
    ans = pairSum(A, 0);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < 2; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}