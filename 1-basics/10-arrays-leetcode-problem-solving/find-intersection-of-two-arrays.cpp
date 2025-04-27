#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> findArrayIntersection(vector<int> &A, int n, vector<int> &B, int m){
    
    vector<int> ans;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(A[i] < B[j]){
    //             break;
    //         } // an optimization to make use to non-decreasing sorting order of the given arrays // to save useless processing
    //         if(A[i] == B[j]){
    //             ans.push_back(A[i]);
    //             B[j] = INT_MIN; // replacing the mapped value, so that it doesn't map to any other value
    //             break;
    //         }
    //     }
    // } // time complexity is O(n^2) // very bad, need to rethink the logic


        // two-pointer approach
        int i = 0, j = 0; // using the fact that the arrays are sorted in non-decreasing order

        while(i < n && j < m){
            if(A[i] == B[j]){
                ans.push_back(A[i]);
                i++;
                j++;
            }
            else if(A[i] > B[j]){
                j++;
            }
            else {
                i++;
            }
        } // time complexity is O(max(n, m))


    return ans;
} 

int main(void){
    vector<int>A = {1, 2, 2, 2, 3};
    vector<int>B = {2, 2, 3};

    vector<int> ans = findArrayIntersection(A, 5, B, 3);
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}