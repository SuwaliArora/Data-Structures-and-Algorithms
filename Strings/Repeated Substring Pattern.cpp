class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ss= s+s;
        string sub= ss.substr(1, ss.size()-2);
        //npos (which stands for "no position")
        //string::npos: This is a constant static member of the std::string class in C++. It represents the maximum possible value for the position type used by the find function. It's typically used to indicate that a substring was not found within the string.
        
        if(sub.find(s) != string::npos) return true;
        return false;
    }
};
