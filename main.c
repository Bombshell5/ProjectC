//
//  main.c
//  ProjectinC
//
//  Created by Shannon Vega on 12/19/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(void) {
    int h,m,s;
    int d = 10; // These are miliseconds and it is for a delay
    printf("Set time : \n");
    scanf("%d, %d, %d ", &h, &m, &s);
    if (h>12 || m>60 || s>60){
        printf("error \n");
        exit(0);
    }
    
    while(1){
        system("clear");
        s++;
        if(s>59)
        {
            m++;
            s = 0;

        }
        if (m>59)
        {
            h++;
            m = 0;
            
        }
        if(h>12)
        {
            h = 1;
            
        }
        printf("\n Clock:");
        printf("\n %02d:%02d:%02d",h,m,s);
        sleep(d);
        
    }
}
