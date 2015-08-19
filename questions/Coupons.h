//
//  Coupons.h
//  cpp
//
//  Created by 林跃南 on 15/8/19.
//  Copyright (c) 2015年 N.Jack. All rights reserved.
//


//Coupons
//一共有N种不同的Coupons，每种Coupons的概率相同，求所有Coupons都出现的期望


/*
 思路：
 当前已出现k种，一共为n种，则下一个出现不同的概率为(n-k)/n,期望值为n/(n-k)
 所有总期望为 n/n + n/(n-1) + ... + n/1
 */

#ifndef cpp_Coupons_h
#define cpp_Coupons_h

float Coupons(int num)
{
    if (num <= 0) {
        return 0;
    }
    
    float pRe = 0;
    
    for (int i = 1; i <= num; i ++) {
        pRe += num/(float)i;
    }
    
    return pRe;
}

#endif
