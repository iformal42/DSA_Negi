#include <iostream>
using namespace std;
void  pr(int ****p)
{
     for (int i = 0; i < 2; i++)
    {
        //p[i] = new int **[2];
        for (int j = 0; j < 2; j++)
        {
           // p[i][j] = new int *[2];
            for (int k = 0; k < 2; k++)
            {
                //p[i][j][k] = new int[2];
                for (int l = 0; l < 2; l++)
                    cout<<p[i][j][k][l]<<" ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int ****p = new int ***[2];

    for (int i = 0; i < 2; i++)
    {
        p[i] = new int **[2];
        for (int j = 0; j < 2; j++)
        {
            p[i][j] = new int *[2];
            for (int k = 0; k < 2; k++)
            {
                p[i][j][k] = new int[2];
                for (int l = 0; l < 2; l++)
                    p[i][j][k][l] = l;
            }
        }
    }
    pr(p);
    cout<<"Deletion:-"<<endl;
     for (int i = 0; i < 2; i++)
    {
        //p[i] = new int **[2];
        for (int j = 0; j < 2; j++)
        {
           // p[i][j] = new int *[2];
            for (int k = 0; k < 2; k++)
            {
                delete[]p[i][j][k];
                // for (int l = 0; l < 2; l++)
                //     cout<<p[i][j][k][l]<<" ";
            }
           // cout<<endl;
        }
    }
    pr(p);

   
}