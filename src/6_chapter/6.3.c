//
// Created by 太乙真人 on 2022/3/19.
//
/*
 * 打印小九九
 */

#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%dx%d = %d      ", j, i, i * j);

        }
        printf("\n");

    }
    return 0;
}
