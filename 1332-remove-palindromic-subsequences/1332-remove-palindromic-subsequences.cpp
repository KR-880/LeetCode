class Solution {
public:
    int removePalindromeSub(string s) {
        int n=s.size();
        if(n==0)
            return 0;
        int i=0,j=n-1;
        while(i<j)
        {
            if(s[i]!=s[j])
                return 2;
            i++;
            j--;
        }
        return 1;
    }
};