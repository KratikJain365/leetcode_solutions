class Solution {
public:
    int compress(vector<char>& chars) {
        int idx =0;
        for(int i=0; i<chars.size();){
            char ch = chars[i];
            int count=0;
            while(i<chars.size() && chars[i]== ch){
                count++; i++;
            }
            chars[idx]=ch;
            idx++;// isko to dono case mai execute hona hi hai
            if(count >1){
                string str = to_string(count);
                for(char dig: str){// string, jisme count hai, usko alag alag digits mai todna hai ek ek karke
                chars[idx]= dig;
                idx++;

                }
            }
        }  
        return idx;
    }
};