class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       vector<string> a = {".-","-...","-.-.","-..",".","..-.","--.","....",
                  "..",".---","-.-",".-..","--","-.","---",".--.",
                  "--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> s;
        int n=words.size();
        for(int i=0;i<n;i++){
            string str=words[i], temp="";
            for(int j=0;j<words[i].length();j++){
                temp+=a[str[j]-'a'];
            }
            s.insert(temp);  // log n
        }
        return s.size();
    }
};
