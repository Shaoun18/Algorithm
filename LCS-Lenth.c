#include<stdio.h>
#include<conio.h>
#include<string.h>

int i,j,m,n,a,c[20][20];
char x[15],y[15],b[20][20];

int main(){

     printf("Enter 1st sequence : ");
        gets(x);
        printf("Enter 2nd sequence : ");
        gets(y);
        printf("\nlongest common subsequence is : ");
        lcs_length();
        getch();
}

void lcs_length(void){

        m=strlen(x);    // m = 6
        n=strlen(y);    // n == 7
        for(i=0;i<=m;i++)
                c[i][0]=0;
        for(i=0;i<=n;i++)
                c[0][i]=0;

                //c, u and l denotes cross, upward and downward directions respectively

        for(i=1;i<=m;i++)
        for(j=1;j<=n;j++){

                if(x[i-1]==y[j-1]){

                        c[i][j]=c[i-1][j-1]+1;
                        b[i][j]='c';
                    }
                    else if(c[i-1][j]>=c[i][j-1]){

                        c[i][j]=c[i-1][j];
                        b[i][j]='u';
                    }
                    else{

                    c[i][j]=c[i][j-1];
                    b[i][j]='l';
                    }
                    }
        print_lcs(m,n);
 }

void print_lcs(int i,int j){     // (6,7)

                if(i==0 || j==0)
                                return;
                if(b[i][j]=='c'){

                    print_lcs(i-1,j-1);
                    printf(" %c",x[i-1]);
                }
                else if(b[i][j]=='u')
                        print_lcs(i-1,j);
                else
                        print_lcs(i,j-1);
}
