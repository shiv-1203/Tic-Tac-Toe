#include<bits/stdc++.h>
using namespace std;
int a[8],b[8];
string s1,s2;
char c[8];
void format()
{
    printf("\nThe format of Tic-Tac-Toe is as below.");
    printf("\n--------------------------------------------------------------------\n");
    printf("  1 | 2 | 3\n-------------\n  4 | 5 | 6\n-------------\n  7 | 8 | 9\n");
    printf("--------------------------------------------------------------------\n");
}
int input(int i)
{
    if(i==1)
    {
        printf("Choose the number from 1 to 9\n");
        //For player 1
        printf("Choose for Player 1 (%s) : ",s1.c_str());
        cin>>a[i-1];
        for(int j=1;j<=9;j++)
        {
            if(j==a[i-1])
            {
                c[j-1]='X';
                break;
            }
        }
        printf("********** Available Places **********\n");
        for(int j=0;j<9;j++)
        {
            if(c[j]==' ')
            {
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
        label2:
        printf("Choose for Player 2 (%s) : ",s2.c_str());
        cin>>b[i-1];
            for(int j=1;j<=9;j++)
            {
                if(j==b[i-1] && c[j-1]!=' ')
                {
                    printf("Enter number from Available Places\n");
                    goto label2;
                }
                else if(j==b[i-1])
                {
                    c[j-1]='O';
                    break;
                }
            }
            //Net progress board
            printf("  %c | %c | %c\n-------------\n  %c | %c | %c\n-------------\n  %c | %c | %c\n",c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8]);
    }
    else{
        printf("--------------------------------------------------------------------\n");
        printf("Choose the number between 1 to 9 according to available places\n");
        printf("********** Available Places **********\n");
        for(int j=0;j<9;j++)
        {
            if(c[j]==' ')
            {
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
        label1:
        printf("Choose for Player 1 (%s) : ",s1.c_str());
        cin>>a[i-1];
        for(int j=1;j<=9;j++)
        {
            if(j==a[i-1] && c[j-1]!=' ')
            {
                printf("Enter number from Available Places\n");
                goto label1;
            }
            else if(j==a[i-1])
            {
                c[j-1]='X';
                break;
            }
        }
        if((c[0]==c[3] && c[3]==c[6] && c[6]=='X') || (c[0]==c[1] && c[1]==c[2] && c[2]=='X') || (c[0]==c[4] && c[4]==c[8] && c[8]=='X') || (c[2]==c[5] && c[5]==c[8] && c[8]=='X') || (c[6]==c[7] && c[7]==c[8] && c[8]=='X') || (c[3]==c[4] && c[3]==c[5] && c[5]=='X') || (c[2]==c[4] && c[4]==c[6] && c[6]=='X'))
        {
            printf("  %c | %c | %c\n-------------\n  %c | %c | %c\n-------------\n  %c | %c | %c\n",c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8]);
            printf("****************** Player 1 (%s) won the game ******************\n",s1.c_str());
            return 1;
        }
        if(c[0]!=' ' && c[1]!=' ' && c[2]!=' ' && c[3]!=' ' && c[4]!=' ' && c[5]!=' ' && c[6]!=' ' && c[7]!=' ' && c[8]!=' ')
        {
            printf("  %c | %c | %c\n-------------\n  %c | %c | %c\n-------------\n  %c | %c | %c\n",c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8]);
            printf("****************** Game Draw ******************\n");
            return 1;
        }
        printf("********** Available Places **********\n");
        for(int j=0;j<9;j++)
        {
            if(c[j]==' ')
            {
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
        label:
        printf("Choose for Player 2 (%s) : ",s2.c_str());
        cin>>b[i-1];
            for(int j=1;j<=9;j++)
            {

                if(j==b[i-1] && c[j-1]!=' ')
                {
                    printf("Enter number from Available Places\n");
                    goto label;
                }
                else if(j==b[i-1])
                {
                    c[j-1]='O';
                    break;
                }
            }
            //Net progress board
            printf("  %c | %c | %c\n-------------\n  %c | %c | %c\n-------------\n  %c | %c | %c\n",c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8]);
        
        if((c[0]==c[3] && c[3]==c[6] && c[6]=='O') || (c[0]==c[1] && c[1]==c[2] && c[2]=='O') || (c[0]==c[4] && c[4]==c[8] && c[8]=='O') || (c[2]==c[5] && c[5]==c[8] && c[8]=='O') || (c[6]==c[7] && c[7]==c[8] && c[8]=='O') || (c[3]==c[4] && c[3]==c[5] && c[5]=='O') || (c[2]==c[4] && c[4]==c[6] && c[6]=='O'))
        {
            printf("****************** Player 2 (%s) won the game ******************\n",s2.c_str());
            return 1;
        }
        if(c[0]!=' ' && c[1]!=' ' && c[2]!=' ' && c[3]!=' ' && c[4]!=' ' && c[5]!=' ' && c[6]!=' ' && c[7]!=' ' && c[8]!=' ')
        {
            printf("****************** Game Draw ******************\n");
            return 1;
        }
        return 0;
    }
}
int main()
{
    int k=0;
    for(int i=0;i<9;i++)
    {
        c[i]=' ';
    }
    printf("Enter the name of Player 1 (X) : ");
    cin>>s1;
    printf("Enter the name of Player 2 (O) : ");
    cin>>s2;

    // Function to display style of Tic-Tac-Toe
    format();
    for(int i=1;i<=9;i++)
    {
        k=input(i);
        if(k==1)
        {
            break;
        }
    }
}
