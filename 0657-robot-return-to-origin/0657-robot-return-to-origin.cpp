class Solution {
public:
    bool judgeCircle(string moves) {

        int u=0;
        int d=0;
        int r=0;
        int l=0;

        for(int i=0;i<moves.size();i++){
            char c = moves[i];
            if(c=='U'){
                u++;
            }else if(c=='D'){
                d++;
            }else if(c=='R'){
                r++;
            }else{
                l++;
            }
        }

        if(u==d && l==r){
            return true;
        }else{
            return false;
        }
        
    }
};