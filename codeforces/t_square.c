/* solution to 1a */

#include<stdio.h>
#include<math.h>

long long int row, col, a;

int main()
{
    while(scanf("%I64d %I64d %I64d",&row,&col,&a)!=EOF)
    {
        int ctr = 0;
		long long int left_col = col;
		if (a == 1) printf("I64d\n", row*col);
		else{
			while(left_col>0){
				ctr++;
				left_col-=a;
			}
			printf("I64d\n", ((long long int)(ceil)((double)row/a)) * ctr );
		}
    }
    return 0;
}