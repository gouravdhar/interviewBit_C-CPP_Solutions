#define f(i, l, n) for(int i=l; i<n; i++)
vector<int> coord(vector<vector<char>> sam){
    vector<int> ans(2, -1);
    f(i, 0, sam.size())
        f(j, 0, sam[0].size())
            if(sam[i][j] == '.'){
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
    return ans;
}
vector<int> box(int i){
    vector<int> ans(2, 0);
    ans[0] = 3*floor(1.0*i/3);
    ans[1] = ans[0] + 2;
    return ans;
}
bool check(vector<vector<char>> sam, int x, int y){
    char a = sam[x][y];
    
    f(i, 0, sam.size())
        if(i!=x && sam[i][y]==a)
            return false;
    f(j, 0, sam[0].size())
        if(j!=y && sam[x][j]==a)
            return false;
            
    vector<int> xs = box(x);
    vector<int> ys = box(y);
    
    f(i, xs[0], xs[1]+1)
        f(j, ys[0], ys[1]+1)
            if(!(i==x && j==y) && sam[i][j]==a)
                return false;
    return true;
}
void rec(vector<vector<char>> &A, vector<vector<char>> sam, int &flag){
    vector<int> ord = coord(sam);
    int x = ord[0], y = ord[1];
    if(x == -1){
        A = sam;
        flag = 1;
        return ;
    }
    f(i, 1, 10){
        if(flag == 1)
            return;
        vector<vector<char>> temp(sam);
        temp[x][y] = '0'+i;
        if(check(temp, x, y))
            rec(A, temp, flag);
    }
}
void Solution::solveSudoku(vector<vector<char> > &A) {
    vector<vector<char>> sam(A);
    int f = 0;
    rec(A, sam, f);
}
