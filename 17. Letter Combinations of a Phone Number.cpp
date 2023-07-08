class Solution {
private:
void solve(string digit, string output, int index, vector<string>& ans, string mapping[]){
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }
    int number=digit[index]-'0';
    string value=mapping[number];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digit,output,index+1,ans,mapping);
        output.pop_back();
    }

}
public:
    vector<string> letterCombinations(string digit) {
        int index=0;
        vector<string> ans;
        string output;
        if(digit.length()==0){
            return ans;
        }
        string mapping[10]={"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digit,output,index,ans,mapping);
        return ans;
    }
};
