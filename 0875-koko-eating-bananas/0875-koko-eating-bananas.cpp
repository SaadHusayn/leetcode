class Solution {
public:
    bool khaSaktah(vector<int>& piles, int h, int k){
        for(int i=0;i<piles.size();i++){
            if(h<=0) return false;
            
            if(piles[i] <= k) h--;
            else{
                h -= (int)ceil(piles[i]*1.0/k);
            }
        }
        
        if(h>=0) return true;
        return false;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        
        int low = 1;
        int high = piles[piles.size() - 1]; //maximum possible
        int result = 0;
        
        while(low<=high){//Binary Search condition
            
            int mid = low + (high - low)/2;
            
            if(khaSaktah(piles, h, mid)){
                result = mid;
                high = mid-1;//aur chota krdete hn
            }
            
            else{
                //nhi khaa paya
                low = mid+1;
            }
            
        }
        
        return result;
    }
};