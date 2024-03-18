class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        float div = n/2147483648.0;
        int last_bit = (div>=1)?1:0;
        int ans = 0;
        for(int i=0;i<31;i++){
            ans += (n&1);

            ans = (ans << 1);

            n = (n >> 1);
        }
        return ans+last_bit;
    }
};