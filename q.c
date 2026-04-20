#include<stdio.h>//BF算法的进阶KMP算法
void getnext(char *t,int *next ){
    int i=1,j=0;
    next[0]=strlen(t);
    next[1]=0;
    while(i<next[0]){
        if(j==0||t[i]==t[j]){
            i++;
            j++;
            if(t[i]==t[j]){
                next[i]=next[j];
            }else{
                next[i]=j;
            }
        }
        else{
            j=next[j];
        }
    }
}
int Index_kmp(char *S,char *t,int pos){
    int i=pos;
    int j=1;
    int next[100];
    getnext(t,next);
    while(i<S[0]&&j<t[0]){
        if( j==0||j==0||S[i]==t[j]){
            i++;
            j++;
        }
        else{
            j=next[j];
        }
        if(j>t[0]){
            return i-t[0];
        }   
    }
}