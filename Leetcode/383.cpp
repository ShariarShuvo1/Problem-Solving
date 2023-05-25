#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<char>ran;
        vector<char>mag;
        int r_length = ransomNote.length();
        int m_length = magazine.length();

        for (int i =0; i<r_length;i++){
            ran.push_back(ransomNote[i]);
        }
        for(int i=0; i<m_length;i++){
            mag.push_back(magazine[i]);
        }
        for(int i=0;i<m_length;i++){
            for(int j=0;j<r_length;j++){
                if (mag[i] ==ran[j]){
                    ran[j] = NULL;
                    break;
                }
            }
        }
        bool found = false;
        for(int i=0; i<r_length;i++){
            if (ran[i] !=NULL){
                found = true;
                break;
            }
        }
        if(found){
            return false;
        }
        else{
            return true;
        }
    }
};