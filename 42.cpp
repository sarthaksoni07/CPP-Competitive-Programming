#include <bits/stdc++.h>
using namespace std;

void solve()
{
    class Solution
    {
    public:
        double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
        {
            // vector<int> nums3 = nums1;
            // nums3.insert(nums3.end(), nums2.begin(), nums2.end());
            // sort(nums3.begin(), nums3.end());
            vector<int> nums4;

            int i, j;
            i = 0;
            j = 0;
            while (i < nums1.size() && j < nums2.size())
            {
                if (nums1[i] <= nums2[j])
                {
                    nums4.push_back(nums1[i]);
                    i++;
                }
                else
                {
                    nums4.push_back(nums2[j]);
                    j++;
                }
            }
            while (i < nums1.size())
            {
                nums4.push_back(nums1[i]);
                i++;
            }
            while (j < nums2.size())
            {
                nums4.push_back(nums2[j]);
                j++;
            }

            int l = nums4.size();
            if (l % 2 != 0)
            {
                return nums4[l / 2];
            }
            else if (l % 2 == 0)
            {
                int m = l / 2;
                float r = (nums4[m] + nums4[m - 1]);
                return r / 2;
            }
            return {};
        }
    };
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}