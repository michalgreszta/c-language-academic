//author: Michal Greszta
#include <stdio.h>

int if_is_full(int *board)
{
    int j;
    for(j=0; j<9; j++)
        if(board[j]==' ')
        {
            return 0;
        }
    return 1;
}

int if_winner(int name, int *board)
{
    char checkpoint = 'X';
    if(name == -1)
        checkpoint = 'O';

    int j;
    for(j=0; j<3; j++)
    {
        if(board[(j+1)*1-1] == checkpoint && board[2*(j+1)-1] == checkpoint && board[3*(j+1)-1] == checkpoint)
        {
            return 1;
        }

        if(board[3*j] == checkpoint && board[3*j+1] == checkpoint && board[3*j+2] == checkpoint)
        {
            return 1;
        }
    }
    if(board[4] == checkpoint && board[2] == checkpoint && board[6] == checkpoint)
    {
        return 1;
    }
    if(board[4] == checkpoint && board[0] == checkpoint && board[8] == checkpoint)
    {
        return 1;
    }

    return 0;
}

void draw_board(int *board)
{
    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("___|___|___\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("___|___|___\n");
    printf(" %c | %c | %c \n", board[6], board[7], board[8]);
    printf("   |   |   \n");
}

int main(void)
{
    char name1[30], name2[30];
    printf("Name of player 1:\n");
    scanf("29s", name1);
    printf("Name of player 2:\n");
    scanf("%29s", name2);
    printf("Welcome %s and %s\n 1 | 2 | 3\n___|___|___\n 4 | 5 | 6\n___|___|___\n 7 | 8 | 9\n   |   |  \n", name1, name2);

    int i = 0, j = 1, k = -1;
    int board[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    while(!i)
    {
        if(j == 1)
        {
            while(k<1 || k>9)
            {
                printf("%s put your X [1,9]:\n", name1);
                if(1 != scanf(" %d", &k))
                {
                    printf("Not a number!\n");
                    return 0;
                }
                if(k>=1 && k<=9)
                {
                    if(board[k-1] != ' ')
                    {
                        k = -1;
                    }
                }
            }
            board[k-1] = 'X';
        }
        else
        {
            while(k<1 || k>9)
            {
                printf("%s put your O [1,9]:\n", name2);
                if(1 != scanf(" %d", &k))
                {
                    printf("Not a number!\n");
                    return 0;
                }
                if(k>=1 && k<=9)
                {
                    if(board[k-1] != ' ')
                    {
                        k = -1;
                    }
                }
            }
            board[k-1] = 'O';
        }
        draw_board(board);
        if(if_winner(j, board))
        {
            if(j == 1)
            {
                printf("%s (X) won!", name1);
            }
            else
            {
                printf("%s (O) won!", name2);
            }
            i=1;
            return 0;
        }
        if(if_is_full(board))
        {
            printf("Neigher %s nor %s won, it's a draw!", name1, name2);
            return 0;
        }
        k = -1;
        j = j*(-1);
    }
    return 0;
}
