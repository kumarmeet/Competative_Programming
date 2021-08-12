#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int low{0}, high = (arr.size() - 1);
        int mid{0};

        if (arr[1] > arr[2] && arr[1] > arr[0])
            return 1;

        while (low <= high)
        {
            mid = ((low + high) / 2);
            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
                return mid;
            else if (arr[mid] > arr[mid - 1])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};

int main()
{
    vector<int> arr{3, 5, 3, 2, 0};
    Solution s;
    s.peakIndexInMountainArray(arr);
    return 0;
}
