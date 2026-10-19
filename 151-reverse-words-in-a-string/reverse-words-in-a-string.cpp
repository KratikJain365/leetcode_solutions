class Solution {
public:
    string reverseWords(string s) {
        string ans ="";
        reverse(s.begin(), s.end());// sabse pehle poori string ko reverse kar diya,
        for(int i=0; i<s.length(); i++){
            string word="";
            while(i<s.length() && s[i]!=' '){//jab tk i ki value string ki length s kam hai tk tk loop chalega, aur jb tak space nhi aa jata, space aate hi stop ho jayeag, kyuki new word ho jayega
            word += s[i];
            i++;
            }

            reverse(word.begin(), word.end());

            if(word.length()>0){
                ans += " " +word;
            }

        }
        return ans.substr(1);

    }
};