#include <stdio.h>

int main ()
{
    int gA =0 , gB = 0, gC = 0, gD = 0;
    char gArr[20] = {'A','A','A','A','A','B','B','B','B','C','C','C','C','C','D','D','D','D','D'};
    
    for(int i = 0; i<20;i++){
        if(gArr[i] == 'A'){
            gA++;
        }if(gArr[i] == 'B'){
            gB++;
        }if(gArr[i] == 'C'){
            gC++;
        }if(gArr[i] == 'D'){
            gD++;
        }
    }
    
    printf("Grade Statics,\n- A : %d\n- B : %d\n- C : %d\n- D : %d",gA,gB,gC,gD);
    return 0;
}
