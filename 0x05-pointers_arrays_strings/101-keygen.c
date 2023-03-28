#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char random_char() {
    int r = rand() % 62;
    if (r < 26) {
        return 'a' + r;
    } else if (r < 52) {
        return 'A' + r - 26;
    } else {
        return '0' + r - 52;
    }
}

int main() {
    
    char password[21];
    int i;
    
    srand(time(NULL));
    for (i = 0; i < 20; i++) {
        password[i] = random_char();
    }
    password[20] = '\0';

  
    printf("%s\n", password);

    return 0;
}
