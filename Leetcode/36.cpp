class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> newArr = {{},{},{},{},{},{},{},{},{}};
        bool isValid = true;
        char name = '.';
        for (int i=0; i<9;i++){
            vector<char> checker; //sjajd
            for (int j=0; j<9;j++){
                if (board[i][j]!=name){
                    bool available = false;
                    for (int k=0;k<checker.size();k++){
                        if (board[i][j] == checker[k]){
                            available=true;
                        }
                    }
                    if (available){
                        isValid=false;
                        break;
                    }
                    else{
                        checker.push_back(board[i][j]);
                    }
                    // cout<<digitAvailable<<endl;
                    if (i<3 && j<3){
                        newArr[0].push_back(board[i][j]);
                    }
                    else if (i<3 && j>=3 && j<6){
                        newArr[1].push_back(board[i][j]);
                    }
                    else if (i<3 && j>=6){
                        newArr[2].push_back(board[i][j]);
                    }
                    else if (i>=3 && i<6 && j<3){
                        newArr[3].push_back(board[i][j]);
                    }
                    else if (i>=3 && i<6 && j>=3 && j<6){
                        newArr[4].push_back(board[i][j]);
                    }
                    else if (i>=3 && i<6 && j>=6){
                        newArr[5].push_back(board[i][j]);
                    }
                    else if (i>=6 && j<3){
                        newArr[6].push_back(board[i][j]);
                    }
                    else if (i>=6 && j>=3 && j<6){
                        newArr[7].push_back(board[i][j]);
                    }
                    else if (i>=6 && j>=6){
                        newArr[8].push_back(board[i][j]);
                    }
                }
                
                
            }
            if (isValid==false){
                    break;
            }
        }
        if (isValid==false){
            return false;
        }
        for (int i=0; i<9;i++){
            vector<char> checker;
            for (int j=0; j<9;j++){
                if (board[j][i]!=name){
                    bool available = false;
                    for (int k=0;k<checker.size();k++){
                        if (board[j][i] == checker[k]){
                            available=true;
                        }
                    }
                    if (available){
                        isValid=false;
                        break;
                    }
                    else{
                        checker.push_back(board[j][i]);
                    }
                }
            }
            if (isValid==false){
                break;
            }
        }
        if (isValid==false){
            return false;
        }

        // cout<<"y"<<endl; //dahkdjhjd
        for (int i=0; i<9;i++){
            vector<char> checker;
            for (int j=0;j<newArr[i].size();j++){
                bool available = false;
                for (int k=0;k<checker.size();k++){
                    if (newArr[i][j] == checker[k]){
                        available=true;
                    }
                }
                if (available){
                    isValid=false;
                    break;
                }
                else{
                    checker.push_back(newArr[i][j]);
                }
            }
            if (isValid==false){
                break;
            }
            
        }
        if (isValid==false){
            return false;
        }
        else{
            return true;
        }
    }
};