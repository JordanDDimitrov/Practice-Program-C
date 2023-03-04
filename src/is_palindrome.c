#include "is_palindrome.h"


static bool solution_is_palindrome(const char *str_in);

void is_palindrome(){


    printf("%s \n", solution_is_palindrome("a") ? "true" : "false");
    printf("%s \n", solution_is_palindrome("aba") ? "true" : "false");
    printf("%s \n", solution_is_palindrome("Abba") ? "true" : "false");
    printf("%s \n", solution_is_palindrome("hello") ? "true" : "false");

}

bool solution_is_palindrome(const char *str_in) {
    int len = 0;
    int last_element = 0;
    while (str_in[len] != '\0'){
        len++;
    }

    last_element = len - 1;

    for (int i = 0 ; i <= last_element ; i++){

        if(tolower(str_in[i]) == tolower(str_in [last_element])) {
            last_element--;
        }
        else return 0;
    }
    return 1;
}

//#include <stdbool.h>
//#include <string.h>
//#include <ctype.h>
//
//bool is_palindrome(const char *s)
//{
//    int l = strlen(s);
//    for(int i = 0; i < l; i++)
//        if (tolower(s[i]) != tolower(s[--l]))
//            return false;
//    return true;
//}