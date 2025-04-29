#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    vector<int> countArray;
    sort(arr.begin(), arr.end());
    int i = 0;
    while (i < arr.size())
    {
        int count = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        countArray.push_back(count);
        i = i + count;
    }

    sort(countArray.begin(), countArray.end());

    for (int i = 0; i < countArray.size() - 1; i++)
    {
        if (countArray[i] == countArray[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    if (uniqueOccurrences(arr))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "Fasle" << endl;
    }
}