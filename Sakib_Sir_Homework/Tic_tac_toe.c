/*
The following code is instructed to build a game.
The game is commonly known "Tic Tac Toe"
This code has some charecteristics:
1. The game consists of two mode: Single player and multiplayer.
2. Single player is played against a computer, the computer will generate random moves from 1 to 9, it will not make the best move.
3. User input maybe invalid, if any character or string or anything except an integer is given input as a move,
it will automatically show invalid move on the screen.
4. Input from 1 to 9 will be a valid move on the grid shown on the screen.
5. Note that if any integer outside this range is given input, it will take the first digit
of that integer as an input and make the move.
6. Multiplayer consists of simultaneous move from player 1 and player 2.
7. If any player put 'q' or 'Q' as an input, it will be treated as a resign,
the program will be terminated and the other player will be declared the winner.
8. If a player can make 3 consecutive block with same fixed input, he will be declared winner.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    while (1)
    {
        char cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9;
        char continuty;
        int move, winner, move_validity, player, bot_move;
        char move_p1, move_p2;
        move = 9;
        winner = 0;
        move_validity = 0;

        printf("How do you want to play?\nSingle player: press 1\nMultiplayer: press 2\n");
        scanf("%d", &player);
        printf("\tPress q or Q at any time to quit.\n");
        cell1 = '0' + 1;
        cell2 = '0' + 2;
        cell3 = '0' + 3;
        cell4 = '0' + 4;
        cell5 = '0' + 5;
        cell6 = '0' + 6;
        cell7 = '0' + 7;
        cell8 = '0' + 8;
        cell9 = '0' + 9;

        printf("%c|%c|%c\n-----\n%c|%c|%c\n-----\n%c|%c|%c\n", cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9);
        for (int i = 1; i <= 9; i++)
        {
            move = i;
            if (move % 2 != 0)
            {
                move_validity = 0;
                while (!move_validity)
                {
                    printf("Which block do you want to make your move, player1?(o)");
                    printf("\tPress q or Q at any time to quit.\n");
                    scanf(" %c", &move_p1);
                    if (move_p1 == 'q' || move_p1 == 'Q')
                    {
                        if (player == 2)
                        {
                            printf("Game terminated!\nPlayer 2 is announced winner.");
                            return 0;
                        }
                        else
                        {
                            printf("Game terminated!\nBot is announced winner.");
                            return 0;
                        }
                    }
                    if (move_p1 < '1' || move_p1 > '9')
                    {
                        move_validity = 0;
                        printf("Invalid move.\n");
                    }
                    else
                    {
                        if (move_p1 == '1')
                        {
                            if (cell1 != 'O' && cell1 != 'X')
                            {
                                cell1 = 'O';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p1 == '2')
                        {
                            if (cell2 != 'O' && cell2 != 'X')
                            {
                                cell2 = 'O';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p1 == '3')
                        {
                            if (cell3 != 'O' && cell3 != 'X')
                            {
                                cell3 = 'O';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p1 == '4')
                        {
                            if (cell4 != 'O' && cell4 != 'X')
                            {
                                cell4 = 'O';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p1 == '5')
                        {
                            if (cell5 != 'O' && cell5 != 'X')
                            {
                                cell5 = 'O';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p1 == '6')
                        {
                            if (cell6 != 'O' && cell6 != 'X')
                            {
                                cell6 = 'O';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p1 == '7')
                        {
                            if (cell7 != 'O' && cell7 != 'X')
                            {
                                cell7 = 'O';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p1 == '8')
                        {
                            if (cell8 != 'O' && cell8 != 'X')
                            {
                                cell8 = 'O';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p1 == '9')
                        {
                            if (cell9 != 'O' && cell9 != 'X')
                            {
                                cell9 = 'O';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                    }
                }
            }
            else if (player == 1)
            {
                move_validity = 0;
                srand(time(NULL));
                while (!move_validity)
                {
                    // printf("Which block do you want to make your move, player2?(x)\n");
                    // scanf("%d", &move_p2);
                    bot_move = rand();
                    int move_bot = bot_move % 10;
                    if (move_bot < 1 && move_bot > 9)
                    {
                        move_validity = 0;
                        // printf("Invalid move.\n");
                    }
                    else
                    {
                        if (move_bot == 1)
                        {
                            if (cell1 != 'O' && cell1 != 'X')
                            {
                                cell1 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                // printf("Invalid move.\n");
                            }
                        }
                        if (move_bot == 2)
                        {
                            if (cell2 != 'O' && cell2 != 'X')
                            {
                                cell2 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                // printf("Invalid move.\n");
                            }
                        }
                        if (move_bot == 3)
                        {
                            if (cell3 != 'O' && cell3 != 'X')
                            {
                                cell3 = 'X';
                                move_validity = 1;
                                // printf("Invalid move.\n");
                            }
                            else
                            {
                                move_validity = 0;
                                // printf("Invalid move.\n");
                            }
                        }
                        if (move_bot == 4)
                        {
                            if (cell4 != 'O' && cell4 != 'X')
                            {
                                cell4 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                // printf("Invalid move.\n");
                            }
                        }
                        if (move_bot == 5)
                        {
                            if (cell5 != 'O' && cell5 != 'X')
                            {
                                cell5 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                // printf("Invalid move.\n");
                            }
                        }
                        if (move_bot == 6)
                        {
                            if (cell6 != 'O' && cell6 != 'X')
                            {
                                cell6 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                // printf("Invalid move.\n");
                            }
                        }
                        if (move_bot == 7)
                        {
                            if (cell7 != 'O' && cell7 != 'X')
                            {
                                cell7 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                // printf("Invalid move.\n");
                            }
                        }
                        if (move_bot == 8)
                        {
                            if (cell8 != 'O' && cell8 != 'X')
                            {
                                cell8 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                // printf("Invalid move.\n");
                            }
                        }
                        if (move_bot == 9)
                        {
                            if (cell9 != 'O' && cell9 != 'X')
                            {
                                cell9 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                // printf("Invalid move.\n");
                            }
                        }
                    }
                }
            }
            else
            {
                move_validity = 0;
                while (!move_validity)
                {
                    printf("Which block do you want to make your move, player2?(x)");
                    printf("\tPress q or Q at any time to quit.\n");
                    scanf(" %c", &move_p2);
                    if (move_p2 == 'q' || move_p2 == 'Q')
                    {
                        printf("Game terminated!\nPlayer 1 is announced winner.");
                        return 0;
                    }
                    if (move_p2 < '1' || move_p2 > '9')
                    {
                        move_validity = 0;
                        printf("Invalid move.\n");
                    }
                    else
                    {
                        if (move_p2 == '1')
                        {
                            if (cell1 != 'O' && cell1 != 'X')
                            {
                                cell1 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p2 == '2')
                        {
                            if (cell2 != 'O' && cell2 != 'X')
                            {
                                cell2 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p2 == '3')
                        {
                            if (cell3 != 'O' && cell3 != 'X')
                            {
                                cell3 = 'X';
                                move_validity = 1;
                                printf("Invalid move.\n");
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p2 == '4')
                        {
                            if (cell4 != 'O' && cell4 != 'X')
                            {
                                cell4 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p2 == '5')
                        {
                            if (cell5 != 'O' && cell5 != 'X')
                            {
                                cell5 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p2 == '6')
                        {
                            if (cell6 != 'O' && cell6 != 'X')
                            {
                                cell6 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p2 == '7')
                        {
                            if (cell7 != 'O' && cell7 != 'X')
                            {
                                cell7 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p2 == '8')
                        {
                            if (cell8 != 'O' && cell8 != 'X')
                            {
                                cell8 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                        if (move_p2 == '9')
                        {
                            if (cell9 != 'O' && cell9 != 'X')
                            {
                                cell9 = 'X';
                                move_validity = 1;
                            }
                            else
                            {
                                move_validity = 0;
                                printf("Invalid move.\n");
                            }
                        }
                    }
                }
            }
            if (cell1 == cell2 && cell2 == cell3)
            {
                if (cell1 == 'O')
                {
                    winner = 1;
                }
                else
                {
                    winner = 2;
                }
                break;
            }
            if (cell1 == cell4 && cell4 == cell7)
            {
                if (cell1 == 'O')
                {
                    winner = 1;
                }
                else
                {
                    winner = 2;
                }
                break;
            }
            if (cell1 == cell5 && cell5 == cell9)
            {
                if (cell1 == 'O')
                {
                    winner = 1;
                }
                else
                {
                    winner = 2;
                }
                break;
            }
            if (cell4 == cell5 && cell5 == cell6)
            {
                if (cell4 == 'O')
                {
                    winner = 1;
                }
                else
                {
                    winner = 2;
                }
                break;
            }
            if (cell7 == cell8 && cell8 == cell9)
            {
                if (cell7 == 'O')
                {
                    winner = 1;
                }
                else
                {
                    winner = 2;
                }
                break;
            }
            if (cell7 == cell5 && cell5 == cell3)
            {
                if (cell7 == 'O')
                {
                    winner = 1;
                }
                else
                {
                    winner = 2;
                }
                break;
            }
            if (cell2 == cell5 && cell5 == cell8)
            {
                if (cell2 == 'O')
                {
                    winner = 1;
                }
                else
                {
                    winner = 2;
                }
                break;
            }
            if (cell3 == cell6 && cell6 == cell9)
            {
                if (cell3 == 'O')
                {
                    winner = 1;
                }
                else
                {
                    winner = 2;
                }
                break;
            }
            if (player == 1)
            {
                printf("Bot has made it's move. :V\n");
            }
            printf("%c|%c|%c\n-----\n%c|%c|%c\n-----\n%c|%c|%c\n\n", cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9);
        }
        if (winner == 0)
        {
            printf("Match is drawn!\n");
        }
        else if (winner == 1)
        {
            printf("%c|%c|%c\n-----\n%c|%c|%c\n-----\n%c|%c|%c\n\n", cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9);
            if (player == 1)
            {
                printf("Congratulations :D\nYour are the winner. You defeated your own bot.");
            }
            else
            {
                printf("Congratulations! :D\nPlayer 1 is the winner.");
            }
        }
        else if (winner == 2)
        {
            printf("%c|%c|%c\n-----\n%c|%c|%c\n-----\n%c|%c|%c\n\n", cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9);
            if (player == 1)
            {
                printf("Sorry you lost! :(\nBot is the winner.");
            }
            else
            {
                printf("Congratulations! :D\nPlayer 2 is the winner.");
            }
        }
        printf("\nWill you want to play again?: Y or y for Yes and any other key for No: \n");

        scanf(" %c", &continuty);
        if (continuty == 'Y' || continuty == 'y')
        {
            continue;
        }
        else
        {
            printf("Thanks for playing. :D\n");
            break;
        }
    }
}
