#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortColors(vector<int> &nums)
{
    int zeros = 0, ones = 0, n = nums.size();
    for (int num : nums)
    {
        if (num == 0)
            zeros++;
        else if (num == 1)
            ones++;
    }

    for (int i = 0; i < zeros; ++i)
    {
        nums[i] = 0;
    }

    for (int i = zeros; i < zeros + ones; ++i)
    {
        nums[i] = 1;
    }

    for (int i = zeros + ones; i < n; ++i)
    {
        nums[i] = 2;
    }
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}