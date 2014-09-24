//
//  main.c
//  exercise_zigzag
//
//  Created by Adam Albarghouthi on 2014-06-21.
//  Copyright (c) 2014 Adam Albarghouthi. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#import "variablesForZigzag.h"

void whereAndWhatToPrint () {
    
    periodValue();
    if (zigZagB() && zigZagA()) {
        printf("&");
    }
    
    else if (zigZagA()){
        printf("*");
    }
    
    else if (zigZagB()) {
        printf("+");
    }
    
    else {
        printf(" ");
    }
    
    nPeriod(x);
    mPeriod(x);
    
}


int main() {
    
    printf("Enter height:");
    scanf("%d", &height);
    
    printf("Enter offset A:");
    scanf("%d", &offsetA);
    
    printf("Enter offset B:");
    scanf("%d", &offsetB);
    
    for (y = 1 ; y < height + 1; y++) {
        
        n = 0;
        m = 0;
        
        for (x = 1 ; x < 40 ; x++) {
            
            whereAndWhatToPrint();
  
        }
        
        printf("\n");
    }
}