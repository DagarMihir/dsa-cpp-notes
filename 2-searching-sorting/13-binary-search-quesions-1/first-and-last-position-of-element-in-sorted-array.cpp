#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){

    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
    
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){ // go to right part
            start = mid + 1;
        }
        else { // go to left part
            end = mid - 1;
        }
        mid = start + (end - start)/2;

    }

    return ans;
}

int lastOccurence(int arr[], int n, int key){

    int start = 0;
    int end = n - 1;
    int ans = -1;

    while(start <= end){
    int mid = start + (end - start)/2;
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){ // go to right part
            start = mid + 1;
        }
        else { // go to left part
            end = mid - 1;
        }
    }

    return ans;
}

int main(void){
    
    int odd[5] = {1, 2, 3, 3, 5};
    int firstOccurIndex = firstOccurence(odd, 5, 3);
    int lastOccurIndex = lastOccurence(odd, 5, 3);

    cout << "First occurence of the 3 is at index : " << firstOccurIndex << endl;
    cout << "Last occurence of the 3 is at index : " << lastOccurIndex << endl;

    int totalOccurences = lastOccurIndex - firstOccurIndex + 1;
    cout << "The total number of occurences of 3 in the array is : " << totalOccurences << endl;

    return 0;
}