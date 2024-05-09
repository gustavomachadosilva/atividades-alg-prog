#include <stdio.h>

int main() {

    int y=12, w=2, x;
    
    for(x=0; x<3; x++) {

        do {
            y=w+x; 
            w--; 
        } while(w>2);

        if (w<0)
            y = y*w; 
        else
            y++;

        printf("%d,%d,%d\n",w,x,y);

    }
    
    return 0;
}

// 1° saida: 1,0,3
// 2° saida: 0,1,3
// 3° saida: -1,2,-2