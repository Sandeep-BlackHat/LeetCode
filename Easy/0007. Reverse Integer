class Solution {
    long long int revrse = 0;
public:
    int reverse(int x) {
        int rem;
        if (x > INT_MAX || revrse > INT_MAX || x <INT_MIN || revrse < INT_MIN) return 0;
        else if(x == 0) return revrse;
        rem = x%10;
        revrse = revrse*10+rem;
        x /= 10;
        return reverse(x);
    }
};
