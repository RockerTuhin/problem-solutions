#include<iostream>
using namespace std;
#include<queue>
#include<string>
#include<utility>
int main()
{
    int num_of_row,num_of_col;
    while(cin>>num_of_row>>num_of_col)
    {
        int fx[] = {1,-1,0,0};
        int fy[] = {0,0,1,-1};
        if(num_of_row == 0 && num_of_col == 0)
            break;
        int cell[num_of_row+1][num_of_col+1];
        int bomb_present_in_number_of_row;
        cin>>bomb_present_in_number_of_row;
        while(bomb_present_in_number_of_row--)
        {
            int row_num;
            cin>>row_num;
            int bomb_present_in_number_of_col;
            cin>>bomb_present_in_number_of_col;
            while(bomb_present_in_number_of_col--)
            {
                int col_num;
                cin>>col_num;
                cell[row_num][col_num] = -1;
            }
        }
        int sx,sy,dx,dy;
        cin>>sx>>sy>>dx>>dy;
        queue< pair<int,int> >q;
        q.push(make_pair(sx,sy));
        int level[num_of_row+1][num_of_col+1];
        bool vis[num_of_row+1][num_of_col+1];
        memset(vis,0,sizeof(vis));
        level[sx][sy] = 0;
        while(!q.empty())
        {
            pair<int,int> top;
            top = q.front();
            if(top.first == dx && top.second == dy)
                break;
            q.pop();
            for(int k = 0 ; k < 4 ; k++)
            {
                int tx = top.first + fx[k];
                int ty = top.second + fy[k];
                if( tx >= 0 && tx < num_of_row && ty >= 0 && ty < num_of_col && cell[tx][ty] != -1 && vis[tx][ty] == 0 )
                {
                    vis[tx][ty] = 1;
                    level[tx][ty] = level[top.first][top.second] + 1;
                    q.push( make_pair(tx,ty) );
                }
            }
        }
        cout<<level[dx][dy]<<endl;
    }
}
/*
10 10
9
0 1 2
1 1 2
2 2 2 9
3 2 1 7
5 3 3 6 9
6 4 0 1 2 7
7 3 0 3 8
8 2 7 9
9 3 2 3 4
0 0
9 9
*/
