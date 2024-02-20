class Solution {
public:
    int check(string s, int i,int j){
       int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    
    int countSubstrings(string s) {
        int totalcount =0;
        for(int center=0;center<s.length();center++){
            int oddkaans=check(s,center,center);
            int evenkaans =check(s,center,center+1);
            totalcount=totalcount+oddkaans+evenkaans;
        }
        return totalcount;
    }
};