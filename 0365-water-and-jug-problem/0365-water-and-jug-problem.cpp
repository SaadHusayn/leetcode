class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        if (x+y<target) return false;
        if(x+y==target || x==target || y==target) return true;
        
        return target%GCD(x, y)==0;
        
    }
    
    // b is bigger of the two
    int GCD(int a, int b){
        if(a==0) return b;
        
        return GCD(b%a, a);
    }
};