class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 0;
        int right = 46340;
        
        while(left<= right){
            int mid = (left+right)/2;
            
            int sq = mid*mid;
            if(sq == num){
                return true;
            }
            else if(sq > num){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return false;
    }
};