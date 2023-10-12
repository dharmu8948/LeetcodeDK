/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findPeakIdx(MountainArray &mountainArr) {
        int left = 0;
        int right = mountainArr.length() - 1;

        // find earliest value where x[i] > x[i+1]
        // do [left, right] so mid is biased left

        while (left < right) {
            auto mid = left + (right - left) / 2;
            if (mountainArr.get(mid) > mountainArr.get(mid + 1)) {
                // go left, include mid
                right = mid;
            } else {
                // go right, discard mid
                left = mid + 1;
            }
        }

        return left;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        // find peak
        // binary search both sides

        // O(3 logn) ~ O(logn)
        auto peak_idx = findPeakIdx(mountainArr);
        if (mountainArr.get(peak_idx) == target) return peak_idx;

        // scan both sides
        // left side first
        int left = 0;
        int right = peak_idx - 1; // [left, right]
        while  (left <= right) {
            auto mid = left + (right - left) / 2;
            auto midval = mountainArr.get(mid);

            if (midval == target) {
                return mid;
            } else if (midval < target) {
                // go right
                left = mid + 1;
            } else {
                // go left
                right = mid - 1;
            }
        }

        left = peak_idx + 1;
        right = mountainArr.length() - 1;
        while (left <= right) {
            auto mid = left + (right - left) / 2;
            auto midval = mountainArr.get(mid);

            if (midval == target) {
                return mid;
            } else if (midval < target) {
                // go left
                right = mid - 1;
            } else {
                // go right
                left = mid + 1;
            }
        }

        return -1;
    }
};