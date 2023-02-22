//
//  main.c
//  Question 4
//
//  Created by Ahmet Furkan Yorulmaz on 25.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
       
    int x;
    int y;
    y=-128;
    int list[]={0,0,0,0,0,0,0,0};
    
    printf("please enter a number: ");
    scanf("%d", &x);
   
    if(x==y){
        printf("negative binary form is: %d%d%d%d%d%d%d%d \n",list[0]=1,list[1],list[2],list[3],list[4],list[5],list[6],list[7]);
    }
        else{
        
        if(x<0){
            x= x * -1;        // negatif saıyı pozitif sayıya çevirme
        }
        
        
        if(x>=64 && x<=127){
            list[1]= 1;
            x= x-64;
        }
        
        if(x>=32 && x<64){
            list[2]=1;
            x= x-32;
        }
        
        if(x>=16 && x<32){
            list[3]=1;
            x= x-16;
        }
        
        if(x>=8 && x<16){
            list[4]=1;
            x= x-8;
        }
        
        if(x>=4 && x<8){
            list[5]=1;
            x=x-4;
        }
        
        if(x>=2 && x<4){
            list[6]=1;
            x=x-2;
        }
        
        if(x>=1 && x<2){
            list[7]=1;
            x=x-1;
        }
        
        printf("positive binary form is: %d%d%d%d%d%d%d%d \n", list[0],list[1],list[2],list[3],list[4],list[5],list[6],list[7]);
        
        
        if(list[0]==1)
            list[0]=0;
        else
            list[0]=1;
        
        if(list[1]==1)
            list[1]=0;
        else
            list[1]=1;
        
        if(list[2]==1)
            list[2]=0;
        else
            list[2]=1;
        
        if(list[3]==1)
            list[3]=0;
        else
            list[3]=1;
        
        if(list[4]==1)
            list[4]=0;
        else
            list[4]=1;
        
        if(list[5]==1)
            list[5]=0;
        else
            list[5]=1;
        
        if(list[6]==1)
            list[6]=0;
        else
            list[6]=1;
        
        if(list[7]==1)
            list[7]=0;
        else
            list[7]=1;     // 0 ları 1'e 1leri 0'a çevirme
        
        
        if(list[7]==0){
            list[7]=1;
        }
        else if (list[7]==1 && list[6]==0){
            list[7]=0;
            list[6]=1;
        }
        else if (list[7]==1 && list[6]==1 && list[5]==0){
            list[7]=0;
            list[6]=0;
            list[5]=1;
        }
        else if (list[7]==1 && list[6]==1 && list[5]==1 && list[4]==0){
            list[7]=0;
            list[6]=0;
            list[5]=0;
            list[4]=1;
        }
        else if (list[7]==1 && list[6]==1 && list[5]==1 && list[4]==1 && list[3]==0){
            list[7]=0;
            list[6]=0;
            list[5]=0;
            list[4]=0;
            list[3]=1;
        }
        else if (list[7]==1 && list[6]==1 && list[5]==1 && list[4]==1 && list[3]==1 && list[2]==0){
            list[7]=0;
            list[6]=0;
            list[5]=0;
            list[4]=0;
            list[3]=0;
            list[2]=1;
        }
        else if (list[7]==1 && list[6]==1 && list[5]==1 && list[4]==1 && list[3]==1 && list[2]==1 && list[1]==0){
            list[7]=0;
            list[6]=0;
            list[5]=0;
            list[4]=0;
            list[3]=0;
            list[2]=0;
            list[1]=1;
        }
        else if (list[7]==1 && list[6]==1 && list[5]==1 && list[4]==1 && list[3]==1 && list[2]==1 && list[1]==1 && list[0]==0){
            list[7]=0;
            list[6]=0;
            list[5]=0;
            list[4]=0;
            list[3]=0;
            list[2]=0;
            list[1]=0;
            list[0]=1;
        }                        //1 ekleme kısmı
        
        
        printf("negative binary form is: %d%d%d%d%d%d%d%d \n", list[0],list[1],list[2],list[3],list[4],list[5],list[6],list[7]);
        
    }
        
        return 0;
}
