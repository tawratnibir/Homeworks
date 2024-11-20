#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    char cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9;
    int move, move_p1, move_p2, winner, move_validity, player, bot_move;
    move = 9;
    winner = 0;
    move_validity = 0;

    printf("How do you want to play?\nSingle player: press 1\nMultiplayer: press 2\n");
    scanf("%d", &player);

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
    for(int i=1;i<=9;i++) {
        move=i;
        if(move%2!=0) {
            move_validity = 0;
            while(!move_validity) {
                printf("Which block do you want to make your move, player1?(o)\n\n");
                scanf("%d", &move_p1);

                if(move_p1<1&&move_p1>9) {
                    move_validity = 0;
                    printf("Invalid move.\n");
                }
                else{
                    if(move_p1 == 1) {
                        if(cell1 != 'o' && cell1 != 'x') {
                            cell1 = 'o';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }
                    }
                    if(move_p1 == 2) {
                        if(cell2 != 'o' && cell2 != 'x') {
                            cell2 = 'o';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p1 == 3) {
                        if(cell3 != 'o' && cell3 != 'x') {
                            cell3 = 'o';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p1 == 4) {
                        if(cell4 != 'o' && cell4 != 'x') {
                            cell4 = 'o';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p1 == 5) {
                        if(cell5 != 'o' && cell5 != 'x') {
                            cell5 = 'o';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p1 == 6) {
                        if(cell6 != 'o' && cell6 != 'x') {
                            cell6 = 'o';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }
                    }
                    if(move_p1 == 7) {
                        if(cell7 != 'o' && cell7 != 'x') {
                            cell7 = 'o';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }
                    }
                    if(move_p1 == 8) {
                        if(cell8 != 'o' && cell8 != 'x') {
                            cell8 = 'o';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }
                    }
                    if(move_p1 == 9) {
                        if(cell9 != 'o' && cell9 != 'x') {
                            cell9 = 'o';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }
                    }
                }
            }
            
        }
        else if(player == 1) {
            move_validity = 0;
            srand(time(NULL));
            while(!move_validity) {
                // printf("Which block do you want to make your move, player2?(x)\n");
                // scanf("%d", &move_p2);
                bot_move = rand();
                int move_p2 = bot_move % 10;
                if(move_p2<1&&move_p2>9) {
                    move_validity = 0;
                    // printf("Invalid move.\n");
                }
                else{
                    if(move_p2 == 1) {
                        if(cell1 != 'o' && cell1 != 'x') {
                            cell1 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            // printf("Invalid move.\n");
                        }
                    }
                    if(move_p2 == 2) {
                        if(cell2 != 'o' && cell2 != 'x') {
                            cell2 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            // printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p2 == 3) {
                        if(cell3 != 'o' && cell3 != 'x') {
                            cell3 = 'x';
                            move_validity = 1;
                            // printf("Invalid move.\n");
                        }
                        else{
                            move_validity = 0;
                            // printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p2 == 4) {
                        if(cell4 != 'o' && cell4 != 'x') {
                            cell4 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            // printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p2 == 5) {
                        if(cell5 != 'o' && cell5 != 'x') {
                            cell5 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            // printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p2 == 6) {
                        if(cell6 != 'o' && cell6 != 'x') {
                            cell6 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            // printf("Invalid move.\n");
                        }
                    }
                    if(move_p2 == 7) {
                        if(cell7 != 'o' && cell7 != 'x') {
                            cell7 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            // printf("Invalid move.\n");
                        }
                    }
                    if(move_p2 == 8) {
                        if(cell8 != 'o' && cell8 != 'x') {
                            cell8 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            // printf("Invalid move.\n");
                        }
                    }
                    if(move_p2 == 9) {
                        if(cell9 != 'o' && cell9 != 'x') {
                            cell9 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            // printf("Invalid move.\n");
                        }
                    }
                }
            }
        }
        else{
            move_validity = 0;
            while(!move_validity) {
                printf("Which block do you want to make your move, player2?(x)\n");
                scanf("%d", &move_p2);
                if(move_p2<1&&move_p2>9) {
                    move_validity = 0;
                    printf("Invalid move.\n");
                }
                else{
                    if(move_p2 == 1) {
                        if(cell1 != 'o' && cell1 != 'x') {
                            cell1 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }
                    }
                    if(move_p2 == 2) {
                        if(cell2 != 'o' && cell2 != 'x') {
                            cell2 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p2 == 3) {
                        if(cell3 != 'o' && cell3 != 'x') {
                            cell3 = 'x';
                            move_validity = 1;
                            printf("Invalid move.\n");
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p2 == 4) {
                        if(cell4 != 'o' && cell4 != 'x') {
                            cell4 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p2 == 5) {
                        if(cell5 != 'o' && cell5 != 'x') {
                            cell5 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }                    
                    }
                    if(move_p2 == 6) {
                        if(cell6 != 'o' && cell6 != 'x') {
                            cell6 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }
                    }
                    if(move_p2 == 7) {
                        if(cell7 != 'o' && cell7 != 'x') {
                            cell7 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }
                    }
                    if(move_p2 == 8) {
                        if(cell8 != 'o' && cell8 != 'x') {
                            cell8 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }
                    }
                    if(move_p2 == 9) {
                        if(cell9 != 'o' && cell9 != 'x') {
                            cell9 = 'x';
                            move_validity = 1;
                        }
                        else{
                            move_validity = 0;
                            printf("Invalid move.\n");
                        }
                    }
                }
            }
            
        }
        if(cell1 == cell2 && cell2 == cell3) {
            if(cell1 == 'o') {
                winner = 1;
            }
            else{
                winner = 2;
            }
            break;
        }
        if(cell1 == cell4 && cell4 == cell7) {
            if(cell1 == 'o') {
                winner = 1;
            }
            else{
                winner = 2;
            }
            break;
        }
        if(cell1 == cell5 && cell5 == cell9) {
            if(cell1 == 'o') {
                winner = 1;
            }
            else{
                winner = 2;
            }
            break;
        }
        if(cell4 == cell5 && cell5 == cell6) {
            if(cell4 == 'o') {
                winner = 1;
            }
            else{
                winner = 2;
            }
            break;
        }
        if(cell7 == cell8 && cell8 == cell9) {
            if(cell7 == 'o') {
                winner = 1;
            }
            else{
                winner = 2;
            }
            break;
        }
        if(cell7 == cell5 && cell5 == cell3) {
            if(cell7 == 'o') {
                winner = 1;
            }
            else{
                winner = 2;
            }
            break;
        }
        if(cell2 == cell5 && cell5 == cell8) {
            if(cell2 == 'o') {
                winner = 1;
            }
            else{
                winner = 2;
            }
            break;
        }
        if(cell3 == cell6 && cell6 == cell9) {
            if(cell3 == 'o') {
                winner = 1;
            }
            else{
                winner = 2;
            }
            break;
        }       
        if(player==1) {
            printf("Bot has made it's move. :V\n");
        } 
        printf("%c|%c|%c\n-----\n%c|%c|%c\n-----\n%c|%c|%c\n\n", cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9);
    }
    if(winner == 0) {
        printf("Match is drawn!\n");
    }
    else if(winner == 1) {
        printf("%c|%c|%c\n-----\n%c|%c|%c\n-----\n%c|%c|%c\n\n", cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9);
        if(player==1) {
            printf("Congratulations :D\nYour are the winner. You defeated your own bot.");
        }
        else{
            printf("Congratulations! :D\nPlayer 1 is the winner.");
        }
    }
    else if(winner == 2) {
        printf("%c|%c|%c\n-----\n%c|%c|%c\n-----\n%c|%c|%c\n\n", cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9);
        if(player==1) {
            printf("Sorry you lost! :(\nBot is the winner.");
        }
        else{
        printf("Congratulations! :D\nPlayer 2 is the winner.");

        }
    }
}