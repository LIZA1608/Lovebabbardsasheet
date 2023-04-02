/*https://www.codingninjas.com/codestudio/problems/remove-consecutive-duplicates_893195?topList=love-babbar-dsa-sheet-problems*/


void solve(string &s,string &ans,int i,int n,char prev){
    if(i==n){
        return;
    }
    if(s[i]==prev){
        solve(s,ans,i+1,n,prev);
    }
    else if(s[i]!=prev){
        ans.push_back(s[i]);
        prev=s[i];
        solve(s,ans,i+1,n,prev);
    }
}

string removeDuplicate(string &s)
{
    string ans="";
    char prev='\0';
    solve(s,ans,0,s.length(),prev);
    return ans;
    
}
