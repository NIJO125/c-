/*Given N, and an N * N matrix, print the integers of the matrix (in a space separated format) in the spiral order, clockwise starting from the top left corner.

Input:
The first line will contain N.
N*N matrix follows, i.e the next N lines contain N integers each.
Output:
Print the elements of the array separated by space in the manner as described above.

Constraints
1≤N≤1000
Sample Input:
4
1 2 3 4
12 13 14 5
11 16 15 6
10 9 8 7

Sample Output:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16*/
#include<bits/stdc++.h>
using namespace std;

#define		nn              "\n"
#define 	S(a)            scanf("%d",&a)
#define 	SS(a,b)         scanf("%d %d",&a,&b)
#define 	SSS(a,b,c)      scanf("%d %d %d",&a,&b,&c)

int main()
{
    int a[101][101],i,j,n;
    // freopen("input.txt","r",stdin);
    while(S(n)==1)
    {
        int i,m=n;
        int t=0,b=n-1,l=0,r=n-1,dir=0;
         for(int i=0;i<n;i++)
	      {
		        for(int j=0;j<n;j++)
		                {
			                 S(a[i][j]);
		                  }
	      }

    while(t<=b && l<=r)
    {
        if(dir==0)
        {
            for(i=l;i<=r;i++)
            {
                printf("%d ",a[t][i]);

            }
                t++;
        }

      else  if(dir==1)
        {
            for(i=t;i<=b;i++)
            {
                printf("%d ",a[i][r]);

            }
              r--;
        }

      else  if(dir==2)
        {
            for(i=r;i>=l;i--)
            {
                printf("%d ",a[b][i]);

            }
             b--;
        }

      else  if(dir==3)
        {
            for(i=b;i>=t;i--)
            {
                printf("%d ",a[i][l]);

            }
               l++;
        }
        dir=(dir+1)%4;

    }

    }

}

