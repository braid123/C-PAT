#include <stdio.h>
 
char *remove_repeat(char *str);
char *compare(char *s1, char *s2);
 
int main (){
    char str1[80], str2[80];
    scanf("%s %s", str1, str2);
    remove_repeat(str1);
    remove_repeat(str2);
    compare(str1, str2);
    printf ("%s\n", str1);
    return 0;
}
 
char *remove_repeat(char *str){
    char *t = str;
    for ( ; *t; t++){
        if (*t>='a' && *t<='z'){
            *t -= 32;
        }
    }
    for ( ; *str; str++){
        char *p = str+1;
        for ( ; *p; p++){
            if (*str==*p){
                char *q = p;
                for ( ; *q; q++){
                    *q = *(q+1);
                }
                p--;
            }
        }
    }
    return str;
}
char *compare(char *s1, char *s2){
    for ( ; *s2; ){
        char *s = s1;
        for ( ; *s; s++){
            if (*s==*s2){
                char *t = s;
                for ( ; *t; t++){
                    *t = *(t+1);
                }
                s--;
                s2++;
                break;
            }
        }
    }
    return s1;
}
