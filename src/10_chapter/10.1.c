//
// Created by 太乙真人 on 2022/3/19.
//
/*
 * 函数调试实例
 */

#include <stdio.h>

int add_range(int low, int high) {
    int i, sum;
    for (i = low; i <= high; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int result[2];
    result[0] = add_range(1, 10);
    result[1] = add_range(1, 100);

    printf("result[0] = %d, result[1] = %d\n", result[0], result[1]);
}