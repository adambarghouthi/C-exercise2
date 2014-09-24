//
//  variablesForZigzag.h
//  exercise_zigzag
//
//  Created by Adam Albarghouthi on 2014-07-07.
//  Copyright (c) 2014 Adam Albarghouthi. All rights reserved.
//

#ifndef exercise_zigzag_variablesForZigzag_h
#define exercise_zigzag_variablesForZigzag_h

    int x;
    int y;
    int height;
    int n;
    int m;
    int offsetA;
    int offsetB;
    int period;

    void periodValue (){
        period = 2*height - 2;
    }

    bool zigZagA() {
        if ((x + offsetA) - n*period == y || (x + offsetA) - n*period == 2*height - y){
            return true;
            printf("*");
        }
        else {
            return false;
        }
    }

    bool zigZagB() {
        if ((x + offsetB) - m*period == y || ((x + offsetB) - m*period) == 2*height - y) {
            return true;
            printf("+");
        }
        else {
            return false;
        }
    }

    void spaces() {
        printf(" ");
    }

    void nPeriod(x){
        periodValue();
        if ((x + offsetA) % period == 0){
            n++;
        }
    }

    void mPeriod(x){
        periodValue();
        if ((x + offsetB) % period == 0) {
            m++;
        }
    }

#endif
