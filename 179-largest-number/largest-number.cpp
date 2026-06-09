class Solution {
public:

static bool cmp(string a, string b){
    return a+b>b+a;
}
    string largestNumber(vector<int>& nums) {
        
int n=nums.size();

string s[n];
for(int i=0;i<n;i++){


string temp=to_string(nums[i]);

s[i]=temp;
}

sort(s,s+n,cmp);

string ans="";

for(int i=0;i<n;i++){

ans+=s[i];

}

if(s[0]=="0"){
    return "0";
}else{
    return ans;
}

    }
};