class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        
        for (int i = left; i <= right; ++i) {
            int temp = i;
            bool isDividedByAll = true;
            
            while (temp != 0) {
                int remainder = temp % 10;
                
                if (remainder == 0) {
                    isDividedByAll = false;
                    break;
                }
                else {
                    if (i % remainder != 0) {
                        isDividedByAll = false;
                        break;                        
                    }
                }
                
                temp /= 10;
            }
            
            if (isDividedByAll) {
                res.push_back(i);
            }
        }
        return res;
    }
};
