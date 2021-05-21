class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1, s = 0, rem;
        while(n){
            rem = n % 10;
            p *= rem;
            s += rem;
            n /= 10;
        }
        return p-s;
    }
};
