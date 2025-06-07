#include<iostream>
using namespace std;
bool isFreqSame(int freq[26], int windowFreq[26]){
    for(int i=0; i<26; i++){
        if(freq[i]!=windowFreq[i]){
            return false;
        }
    }
    return true;
}
bool isPermutation(string s1 , string s2){
    int freq[26] = {0};
    for(int i=0; i<s1.size(); i++){
        freq[s1[i]-'a']++;
    }
    int windowSize = s1.size();
    for(int i=0; i<s2.size(); i++){
        int windowInd = 0;
        int index = i;
        int windowFreq[26] = {0};
        while(windowInd<windowSize && index<s2.size()){
            windowFreq[s2[index]-'a']++;
            windowInd++;
            index++;
        }
        if(isFreqSame(freq,windowFreq)){
            return true;
        }
    }
    return false;
}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    if(isPermutation(s1,s2)){
        cout <<  "Permutation";
    }else{
        cout << "Not Permutation";
    }
}