class Solution {
public:
    bool isVowel(char c){
        string v="aeiou";
        for(char ch:v)if(ch==c)return true;
        return false;
    }
    int maxFreqSum(string s) {
        int v[26]={0},c[26]={0};
        for(char ch:s){
            if(isVowel(ch))v[ch-'a']++;
            else c[ch-'a']++;
        }
        int mx_v=0,mx_c=0;
        for(int i=0;i<26;i++){
            mx_v=max(mx_v,v[i]);
            mx_c=max(mx_c,c[i]);
        }
        return mx_c+mx_v;
    }
};