#include<iostream>
#include<Queue>
using namespace std;

int main(){

    string str = "aabc";
    int freq[26] = {0};
    queue<char>q;

    string ans =" ";
    for(int i = 0; i<str.length(); i=+){
        char ch = str[i];

        //increment freq
        freq[ch - 'a']++;
        //q.push
        q.push(ch);

        while(!q.empty()){
            if(freq[q.front() - 'a'])>1
            q.pop();
        }
        else{
            ans.push_back(q.front) //if freq is = to 1 then store tht answer in char 
        }

    }

}
