//
// Created by shaya on 4/29/16.
//

#ifndef C_UTIL_LCM_HCF_H
#define C_UTIL_LCM_HCF_H


#include <stdio.h>

class lcm_hcf {


public:
    int lcm() {
        int a, b, x, y, t, gcd, lcm;

        printf("Enter two integers\n");
        scanf("%d%d", &x, &y);

        a = x;
        b = y;

        while (b != 0) {
            t = b;
            b = a % b;
            a = t;
        }

        gcd = a;
        lcm = (x*y)/gcd;

        printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
        printf("Least common multiple of %d and %d = %d\n", x, y, lcm);

        return 0;
    }
};


#endif //C_UTIL_LCM_HCF_H
