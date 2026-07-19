class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        // Always binary search on the smaller array
        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int m = nums1.size();
        int n = nums2.size();

        int low = 0;
        int high = m;

        while (low <= high) {

            // Partition position in nums1
            int mid1 = (low + high) / 2;

            // Partition position in nums2
            int mid2 = (m + n + 1) / 2 - mid1;

            // Left and Right values of nums1
            int left1  = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
            int right1 = (mid1 == m) ? INT_MAX : nums1[mid1];

            // Left and Right values of nums2
            int left2  = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
            int right2 = (mid2 == n) ? INT_MAX : nums2[mid2];

            // Correct partition
            if (left1 <= right2 && left2 <= right1) {

                // Odd number of elements
                if ((m + n) % 2)
                    return max(left1, left2);

                // Even number of elements
                return (max(left1, left2) + min(right1, right2)) / 2.0;
            }

            // Move left
            else if (left1 > right2) {
                high = mid1 - 1;
            }

            // Move right
            else {
                low = mid1 + 1;
            }
        }

        return 0;
    }
};