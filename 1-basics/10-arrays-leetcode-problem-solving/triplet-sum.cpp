#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> tripleSum(vector<int> &A, int target){

    vector<vector<int>> ans;   

    for(int i = 0; i < A.size(); i++){
        for(int j = i + 1; j < A.size(); j++){
            for(int k = j + 1; k < A.size(); k++){
                if(A[i] + A[j] + A[k] == target){
                    ans.push_back({A[i], A[j], A[k]});
                }
            }
        }
    }

    return ans;
}

int main(void){

    vector<int>A ={1, 2, 3, 4, 5};

    vector<vector<int>> ans = tripleSum(A, 12);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}