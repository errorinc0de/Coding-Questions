class Solution {
public:
    bool find(string word,vector<vector<char>>&board,int i,int j,int len,int count,int n,int m)
    {
        if(count==len)
            return true;
        if(i<0||i>=n||j<0||j>=m||word[count]!=board[i][j])
            return false;
        
        char temp=board[i][j];
        board[i][j]='*';
        bool f=find(word,board,i+1,j,len,count+1,n,m)||find(word,board,i-1,j,len,count+1,n,m)
                ||find(word,board,i,j+1,len,count+1,n,m)||find(word,board,i,j-1,len,count+1,n,m);
        if(!f)
        board[i][j]=temp;
        return f;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        int len=word.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(word[0]==board[i][j]&&find(word,board,i,j,len,0,n,m))
                {
                    return true;   
                }
                                     
            }
        }
        
        return false;
        
    }
};