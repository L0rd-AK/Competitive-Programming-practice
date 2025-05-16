#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char> st;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;
                if(st.count(board[i][j]))return false;
                st.insert(board[i][j]);
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<char> st;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.')continue;
                if(st.count(board[j][i]))return false;
                st.insert(board[j][i]);
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                unordered_set<char> st;
                for(int row=0;row<3;row++){
                    for(int col=0;col<3;col++){
                        if(board[row+i][col+j]=='.')continue;
                        if(st.count(board[row+i][col+j]))return false;
                        st.insert(board[row+i][col+j]);
                    }
                }
            }
        }
        return true;
    }
};