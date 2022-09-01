class Solution {
public:
    string reverseWords(string s) {
        if (s.size() == 0) return s;
            string result;
            stack <string> stack;
            
            for (int i = 0; i < s.size(); i++){
                    string word;
                    if(s[i] == ' ') continue;
                    while (i < s.size() && s[i] != ' '){
                            word += s[i]; 
                            i++;
                    }
                    stack.push(word);
            }
            while(stack.size() > 0){
                    result += stack.top();
                    stack.pop();
                    if(stack.size() > 0) result += " ";
            }
            return result;
    }
};