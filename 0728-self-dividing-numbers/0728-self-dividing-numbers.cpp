class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            int temp = i;
            bool isSelfDividing = true;
            while (temp != 0) {
                int ld = temp % 10;
                if (ld == 0 || i % ld != 0) {
                    isSelfDividing = false;
                    break;
                }
                temp /= 10;
            }
            if (isSelfDividing) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};