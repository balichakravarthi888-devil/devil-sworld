#include <stdio.h>
#include <conio.h>

char board[3][3];

void initializeBoard();
void displayBoard();
int checkWin();
int checkDraw();
void playerMove(char playerSymbol);

void main() {
    char currentPlayer = 'X';
    int winner = 0;

    clrscr();
    initializeBoard();

    while (1) {
        displayBoard();
        playerMove(currentPlayer);

        winner = checkWin();
        if (winner != 0) {
            displayBoard();
            printf("Player %c wins!\n", winner == 1 ? 'X' : 'O');
            break;
        }

        if (checkDraw()) {
            displayBoard();
            printf("It's a draw!\n");
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    getch();
}

void initializeBoard() {
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void displayBoard() {
    int i;
    clrscr();
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2)
            printf("---|---|---\n");
    }
    printf("\n");
}

void playerMove(char playerSymbol) {
    int row, col;
    while (1) {
        printf("Player %c, enter row (1-3) and column (1-3): ", playerSymbol);
        scanf("%d %d", &row, &col);
        row--; col--;

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = playerSymbol;
            break;
        } else {
            printf("Invalid move. Try again.\n");
        }
    }
}

int checkWin() {
    int i;

    // Check rows and columns
    for (i = 0; i < 3; i++) {
        if (board[i][0] != ' ' &&
            board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return (board[i][0] == 'X') ? 1 : 2;

        if (board[0][i] != ' ' &&
            board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return (board[0][i] == 'X') ? 1 : 2;
    }

    // Diagonals
    if (board[0][0] != ' ' &&
        board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return (board[0][0] == 'X') ? 1 : 2;

    if (board[0][2] != ' ' &&
        board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return (board[0][2] == 'X') ? 1 : 2;

    return 0; // No winner yet
}

int checkDraw() {
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0; // Not a draw yet
    return 1;
}
