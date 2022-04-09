class Solution {
public:
    void reverseString(vector<char>& str)
{
    int n=str.size();
    for(int i=0;i<n;i++){
        swap(str[i],str[n-1]);
        n--;
    }
}
};
