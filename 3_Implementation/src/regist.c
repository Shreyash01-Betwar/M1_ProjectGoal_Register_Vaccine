#include <stdio.h>
#include "regist.h"

int regStat(long p){

    // Checks for registration details of new patients
    // Detailed about each persons…
    pd[0].aadhar=p;
    int i=1;
    while(i<=1000){
        if(pd[i].aadhar==pd[0].aadhar){
            if(pd[i].vaccine_type==0)
                return 0;
            else
                return 1;
        }
        i++;
    }
    return -1;
}


int vacineStat(int i){
     
    if (pd[i].vaccine_doses==0){
        pd[i].vaccine_doses++;
        return 1;}
    else if(pd[i].vaccine_doses==1){
        pd[i].vaccine_doses++;
        return 2;}
    else if (pd[i].vaccine_doses==2){
        return 3;}
    else
        return 0;

}
// The above line of code helps to check the no of Vacines taken…
