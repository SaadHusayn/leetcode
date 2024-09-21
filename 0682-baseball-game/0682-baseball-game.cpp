class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(int i=0;i<operations.size();i++){
            if(operations[i] == "C") s.pop();
            
            else if(operations[i] == "D") s.push(s.top()*2);
            
            else if(operations[i] == "+"){
                auto prev = s.top();
                s.pop();
                auto secPrev = s.top();
                s.pop();
                s.push(secPrev);
                s.push(prev);
                s.push(prev+secPrev);
            }
            
            
            else s.push( stoi(operations[i]));
        }
        
        int sum =0 ;
        while(!s.empty()){
            sum += s.top();
            s.pop();
        }
        
        return sum;
    }
};