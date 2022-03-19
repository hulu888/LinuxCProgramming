//
// Created by 太乙真人 on 2022/3/19.
//
/*
 * 带参数的函数
 */
#include <stdio.h>
void print_time(int hour, int minute) {
    printf("hour = %d, minute = %d\n", hour, minute);
}

int main() {
    print_time(23, 59);

    return 0;
}