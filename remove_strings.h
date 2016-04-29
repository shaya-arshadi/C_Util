//
// Created by shaya on 4/29/16.
//

#ifndef C_UTIL_REMOVE_STRINGS_H
#define C_UTIL_REMOVE_STRINGS_H

#include <stdio.h>
class remove_strings {


public:
    void remove()
    {
        char text[1000], blank[1000];
        int c = 0, d = 0;

        printf("Enter some text\n");
        gets(text);

        while (text[c] != '\0') {
            if (text[c] == ' ') {
                int temp = c + 1;
                if (text[temp] != '\0') {
                    while (text[temp] == ' ' && text[temp] != '\0') {
                        if (text[temp] == ' ') {
                            c++;
                        }
                        temp++;
                    }
                }
            }
            blank[d] = text[c];
            c++;
            d++;
        }

        blank[d] = '\0';

        printf("Text after removing blanks\n%s\n", blank);

        //return 0;
    }
};


#endif //C_UTIL_REMOVE_STRINGS_H
