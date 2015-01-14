/* 
 * File:   main.c
 * Author: liumiao
 *
 * 统计一些电话号码的别称，转化成真正的电话号码
 * 然后统计真正电话号码的出现次数
 * 然后将重复出现的电话号码的次数排序输出
 * 
 * 应该用一个结构体，
 * 保存电话号码表，和出现的次数。
 * 
 * Created on 2015年1月13日, 下午9:51
 */

#include <stdio.h>
#include <stdlib.h>


int Totel;

struct TelBook{
    char Tels[8];
    //int  Count;
    int  Ntmp;
};
/*
 * 
 */
//int main(int argc, char** argv) {
int main(){
    scanf("%d",&Totel);//read in the totel number of telphone
    
    int i = 0;
    int j = 0;
    char tmp;
    scanf("%c",&tmp);
    struct TelBook Tel[Totel];
    //char Tel[Totel][7];
    for (i = 0 ; i < Totel ; i++){// read in all the telphone number and translate
        j = 0;
        while(scanf("%c",&tmp) && (tmp != '\n')){
            //if (tmp == "\n") break;
            switch(tmp){
                case 'A':
                    Tel[i].Tels[j]= '2';
                    break;
                case 'B':
                    Tel[i].Tels[j] = '2';
                    break;
                case 'C':
                    Tel[i].Tels[j] = '2';
                    break;
                case 'D':
                    Tel[i].Tels[j] = '3';
                    break;
                case 'E':
                    Tel[i].Tels[j] = '3';
                    break;
                case 'F':
                    Tel[i].Tels[j] = '3';
                    break;
                case 'G':
                    Tel[i].Tels[j] = '4';
                    break;
                case 'H':
                    Tel[i].Tels[j] = '4';
                    break;
                case 'I':
                    Tel[i].Tels[j] = '4';
                    break;
                case 'J':
                    Tel[i].Tels[j] = '5';
                    break;
                case 'K':
                    Tel[i].Tels[j] = '5';
                    break;
                case 'L':
                    Tel[i].Tels[j] = '5';
                    break;
                case 'M':
                    Tel[i].Tels[j] = '6';
                    break;
                case 'N':
                    Tel[i].Tels[j] = '6';
                    break;
                case 'O':
                    Tel[i].Tels[j] = '6';
                    break;
                case 'P':
                    Tel[i].Tels[j] = '7';
                    break;
                case 'R':
                    Tel[i].Tels[j] = '7';
                    break;
                case 'S':
                    Tel[i].Tels[j] = '7';
                    break;
                case 'T':
                    Tel[i].Tels[j] = '8';
                    break;
                case 'U':
                    Tel[i].Tels[j] = '8';
                    break;
                case 'V':
                    Tel[i].Tels[j] = '8';
                    break;
                case 'W':
                    Tel[i].Tels[j] = '9';
                    break;
                case 'X':
                    Tel[i].Tels[j] = '9';
                    break;
                case 'Y':
                    Tel[i].Tels[j] = '9';
                    break;
                case '-':
                    j--;
                    break;
                default:
                    Tel[i].Tels[j] = tmp;
            }
            j++;
        }
        Tel[i].Tels[7]='\0';
        Tel[i].Ntmp = atoi(Tel[i].Tels);
   
    }
    
    struct TelBook TTmp;
    for (i = 0 ; i < Totel; i++){
        for (j = i+1; j < Totel; j++){
            if ( Tel[i].Ntmp > Tel[j].Ntmp){
                TTmp = Tel[i];
                Tel[i] = Tel[j];
                Tel[j] = TTmp;
                
            }
        }
        
    }
    
/*    printf("\n----------------------------------------!\n");
    for (i = 0 ; i < Totel; i++){
        for (j= 0 ; j < 7 ; j++){
            if (j==3){
                printf("-");
            }
            printf("%c",Tel[i].Tels[j]);
            
        } 
        printf("||||   %d    \n",Tel[i].Ntmp);
    }
  */ 
    int Count = 1;
    //printf("!!!!!\n");
    for (i = 1 ; i < Totel; i++){
        if (Tel[i].Ntmp == Tel[i-1].Ntmp){
            Count++;
        //    printf("\n     + 1  \n");
        }else{
            if (Count > 1 ){
                //如果个数大于一，打印
                for (j= 0 ; j < 7 ; j++){
                    if (j==3){
                        printf("-");
                    }
                    printf("%c",Tel[i-1].Tels[j]);
                } 
                printf(" %d\n",Count);
                
            }//   }else if (Count ==1) printf("  \n ~~~ \n");
            Count = 1;
            
        }
        
        //printf("~~~~~~~~~~~~~~~\n");
    }
    

    return (EXIT_SUCCESS);
}

