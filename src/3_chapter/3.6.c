//
// Created by 太乙真人 on 2022/3/19.
//

/*
 * 作用域
 */
#include <stdio.h>

int hour = 23, minute = 58;

void print_time() {
    printf("hour = %d, minute = %d in print_time\n", hour, minute);
}

int main() {
    int hour = 0, minute = 30;
    print_time();
    printf("hour = %d, minute = %d in main\n", hour, minute);
}
