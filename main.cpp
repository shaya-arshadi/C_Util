#include <iostream>
#include "lcm_hcf.h"
#include "remove_strings.h"

using namespace std;

int main() {

    printf("What you wanna do? enter associated number : \n");
    printf("0 : lcm_hcf \n 1 : remove irrelevant strings \n");
    int x;
    scanf("%d", &x);



    switch (x) {
        case 0 :
            lcm_hcf l;
            l.lcm();
            break;
        case 1 :
            remove_strings rs;
            rs.remove();
            break;
    }

}