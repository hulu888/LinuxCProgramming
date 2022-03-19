//
// Created by 太乙真人 on 2022/3/19.
//

/*
 * 全局变量
 */
#include <stdio.h>

int hour = 23, minute = 58;

void print_time() {
    printf("hour = %d, minute = %d in print_time\n", hour, minute);
}

int main() {
    print_time();
    printf("hour = %d, minute = %d in main\n", hour, minute);
}
