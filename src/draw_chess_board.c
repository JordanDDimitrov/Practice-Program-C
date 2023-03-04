#include "draw_chess_board.h"

static char* chessBoard(int rows, int columns);

void draw_chess_board() {

    chessBoard(6,4);
    chessBoard(5,5);

}

char* chessBoard(int rows, int columns) {
    for (int i = 0 ; i < rows ; i++){
        for (int j = 0 ; j < columns ; j++){

            if ((i + j ) % 2){
                printf("X ");
            } else printf("0 ");

        }
        printf("\n");

    }
}


