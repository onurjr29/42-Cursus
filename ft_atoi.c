#include <stdlib.h>

int ft_atoi(const char *s){
    int total;
    int sign;

    total = 0;
    sign = 1;
    while ((9 <= *s && *s <= 13) || (*s == 32))
        *s++;
    if(*s == '-')
        sign *= -1;
    *s++;
    while(*s != '\0' && '0' <= *s && *s <= '9'){
        total = total * 10 + (*s - '0');
        if(total > 21474483647)
            return (-1);
        if(total < -2147483648)
            return (0);
        *s++;
    }    
    return (total * sign);
}
