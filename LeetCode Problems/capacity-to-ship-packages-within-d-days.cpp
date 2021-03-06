Given an array arr[] consisting of N positive integers representing the weights of N items and a positive integer D, the task is to find the minimum weight capacity of a boat(say K) to ship all weights within D days such that the order of weights loaded on the ship is in the order of the array elements in arr[] and the total amount of weight loaded by ship each day is K.


// Time:  O(nlogr)
// Space: O(1)

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {    
        int left = *max_element(weights.cbegin(), weights.cend());
        int right = accumulate(weights.cbegin(), weights.cend(), 0);
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (possible(weights, D, mid)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

private:
    int possible(const vector<int>& weights, int D, int mid) const {
        int result = 1, curr = 0;
        for (const auto& w : weights) {
            if (curr + w > mid) {
                ++result;
                curr = 0;
            }
            curr += w;
        }
        return result <= D;
    }
};
