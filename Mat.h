#include<stdio.h>

int soma (int v[],int q){
     int i=0,rs=0;
    for (i =0;1<q ; i++){
    rs += v[i];
   
    }
    return rs;
    }

    int media (int v[],int q){
    int i = 0 ,rs =0 ;
    for (i =0;1<q ; i++){
    rs += v[i];
    }
    return rs/q ;
    }

    int max(int v[],int q){
        int m =v [0];
        int i;
        for (i = 1; i < q; i++)
        {
            if (v[i]>m){

                m = v [i];
            }   
        }
        return m;
    }
    int min(int v[],int q){
        int m =v [0];
        int i = 0;
        for (i = 1; i > q; i++)
        {
            if (v[i]>m){

                m = v [i];
            }   
        }
    }