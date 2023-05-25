class Solution {
public:
    int strStr(string haystack, string needle) {
        int idx = -1;
        for (int i=0;i<haystack.length();i++){
            if (haystack[i] == needle[0]){
                bool foundIt=true;
                for (int j=0,x=i;j<needle.length();j++,x++){
                    if (haystack[x] != needle[j]){
                        foundIt = false;
                        break;
                    }
                }
                if (foundIt){
                    idx = i;
                    break;
                }
            }
        }
        return idx;
    }
};