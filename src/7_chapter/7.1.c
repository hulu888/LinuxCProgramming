//
// Created by 太乙真人 on 2022/3/19.
//

/*
 * 定义和访问结构体
 */

#include <stdio.h>

int main() {
   struct complex_struct{
       double x, y;
   }cs;
   cs.x = 3.0;
   cs.y = 4.0;

   printf("z = %fi + %fj\n", cs.x, cs.y);
}