class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> map;
        priority_queue<pair<int,char>> heap;
            
            for(int i=0;i<s.size();i++){
                    map[s[i]]++;
            }
            for(auto x=map.begin();x!=map.end();x++){
                    heap.push({x->second,x->first});
            }
            string result="";
            pair<int,char> block = {-1,'$'};
            
            while(heap.size()>0){
             
            auto temp=heap.top();
                    heap.pop();
            result+=temp.second;
            temp.first--;
            if(block.first>0){
                    heap.push(block);
            }
                    block=temp;
            }
            if(block.first>0){
                    return "";
            }
            return result;
    }
};