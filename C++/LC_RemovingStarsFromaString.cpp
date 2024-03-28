#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>

std::string removeStars(std::string& s) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        std::cout.tie(0);

        std::stack<char>st;
        std::vector<char>v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }s="";
        while(!st.empty()){
             v.push_back(st.top());
             st.pop();
             
        } s="";
        for(int i=v.size()-1;i>=0;i--){
          s+=v[i];
        }return s;
    }

std::string removeStars2(std::string& s) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        std::cout.tie(0);
        
        std::string ans= "";

        int i=0, len = s.size();

        while(i<len) {
            if(s[i]=='*') {
                ans.pop_back();
            } else {
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }

int main()
{
    std::string s,res;
    std::cin >> s;

    std::cout << removeStars(s);

    return 0;
}
