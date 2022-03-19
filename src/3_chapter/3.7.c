//
// Created by 太乙真人 on 2022/3/19.
//

/*
 * 验证局部变量存储空间的分配和释放
 */
#include <stdio.h>

void foo() {
    int i;
    printf("i = %d\n", i);
    i = 8;
}


int main() {
    foo();
    printf("foo\n");
    foo();
}
