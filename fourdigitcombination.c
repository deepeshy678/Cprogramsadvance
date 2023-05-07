#include <stdio.h>

int main()
 {
    
    
    printf("All possible combinations of four integers are:\n");
    
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int k = 1; k <= 2; k++) {
                for (int l = 1; l <= 1; l++) {
                    
                        printf("%d %d %d %d\n", i, j, k, l);
                    
                }
            }
        }
    }
    
    return 0;
}
