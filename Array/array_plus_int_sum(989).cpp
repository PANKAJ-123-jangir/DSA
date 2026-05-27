//i have to find more optimize solution of this leetcode(989)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        int i = num.size() - 1;   // like arr1 pointer
        vector<int> vec;          // result
        int carry = 0;

        // similar to: while(i>=0 && j>=0)
        while (i >= 0 && k > 0) {
            int val1 = num[i];
            int val2 = k % 10;   // last digit of k

            int sum = val1 + val2 + carry;
            carry = sum / 10;
            sum = sum % 10;

            vec.push_back(sum);

            i--;
            k = k / 10;
        }

        // similar to: while(i>=0)
        while (i >= 0) {
            int sum = num[i] + carry;
            carry = sum / 10;
            sum = sum % 10;

            vec.push_back(sum);
            i--;
        }

        // similar to: while(j>=0)
        while (k > 0) {
            int sum = (k % 10) + carry;
            carry = sum / 10;
            sum = sum % 10;

            vec.push_back(sum);
            k = k / 10;
        }

        // similar to: while(carry!=0)
        while (carry != 0) {
            int sum = carry;
            carry = sum / 10;
            sum = sum % 10;

            vec.push_back(sum);
        }

        reverse(vec.begin(), vec.end());
        return vec;
    }
};
