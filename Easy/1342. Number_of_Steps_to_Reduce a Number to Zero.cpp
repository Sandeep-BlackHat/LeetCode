//1. Onw line answer

class Solution {
public:
    int numberOfSteps (int num) {
        return num == 0 ? 0 : log2(num) + bitset<32>(num).count();
    }
};


//2. Easy Way to write
class Solution {
public:
    int numberOfSteps (int num) {
        int count=0;
        while(num){
            if(num%2){ // odd
                --num;
            }
            else{ // even
                num=num/2;
            }
            ++count;
        }
        return count;
    }
};
