//
// Created by zhang on 2022/4/9.

// 10.2 断点调试
//

#include <stdio.h>


int main() {
    char input[5];
    int sum = 0;
    int i = 0;
    while(1) {
        scanf("%s", input);
        for (i = 0; input[i] != '\0'; i++) {
            sum = 10 * sum + input[i] - '0';
        }
        printf("sum = %d\n", sum);
    }
}

