//
//  ManyNumbersSum.h
//  cpp
//
//  Created by 林跃南 on 15/9/12.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//
/*
 读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
 输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。
 输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。
 输入样例：
 1234567890987654321123456789
 输出样例：
 yi san wu
 */

#ifndef cpp_ManyNumbersSum_h
#define cpp_ManyNumbersSum_h

const char* nums[]= {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

void func_print(int result,int ar,int count)
{
    if (result >= 10) {
        func_print(result/10,result/10/10*10,count+1);
    }
    if (count == 0) {
        printf("%s\n",nums[result-ar]);
    }
    else
    {
        printf("%s ",nums[result-ar]);
    }
}

void ManyNumbersSum()
{
    
    char a[10101] = {'\0'};
    char b[2] = {'\0'};
    
    printf("Input : ");
    scanf("%s",a);
    
    size_t len = strlen(a);
    size_t count = 0;
    
    int result = 0;
    
    while (a[count] != '\0') {
        
        b[0] = a[count];
        int re = atof(b);
        
        printf("%d \n",re);
        
        result += re;
        count ++;
    }
    
    printf("%d \n",result);
    printf("Output : ");
    func_print(result,result/10*10,0);
    
}

#endif
