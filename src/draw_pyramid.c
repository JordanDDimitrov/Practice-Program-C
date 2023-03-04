#include "draw_pyramid.h"

static void draw_reverse_pyramid(int row);
static void draw_normal_pyramid(int row);
void draw_pyramid() {

    draw_normal_pyramid(3);
    draw_normal_pyramid(4);
    draw_normal_pyramid(5);
    draw_normal_pyramid(10);
}

static void draw_normal_pyramid(int row){
    if (row > 1) {
        int last_row_size = 2*row - 1;
        int left = row;
        int right = row;
        for (int i = 0; i < row; i++) {
            for (int j = 1 ; j <= last_row_size ; j++){
                if (left <= j && right >= j){
                    printf("*");
                    continue;
                }
                printf("_");
            }
            left--;
            right++;
            printf("\n");
        }
    }
    draw_reverse_pyramid( row);
}

void draw_reverse_pyramid(int row) {
    if (row > 1) {
        int last_row_size = 2*row - 1;
        int left = 1;
        int right = last_row_size;
        for (int i = 0; i < row; i++) {
            if (i){
                for (int j = 1 ; j <= last_row_size ; j++){
                    if (left <= j && right >= j){
                        printf("*");
                        continue;
                    }
                    printf("_");
                }
                printf("\n");
            }
            left++;
            right--;
        }
    }
}