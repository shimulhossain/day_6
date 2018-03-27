#include<stdio.h>
#include<string.h>

int main(){
    char a[100],str1[10]={"printf"},str2[10]={"scanf"};
    int l,flag=0,s;
    while(1){
    printf("\nenter the string:");
    gets(a);
    if(strcmp(a,str1)==0 || strcmp(a,str2)==0){
    printf("\nnot allow!!");
    }else{
    l=strlen(a);
    if(a[0]==' '||a[0]=='@'){
    printf("\ninvalid identifier");
    goto m;
    }else{
    s=0;
    while(s!=l){
        if(a[s]==' '||a[s]=='1'||a[s]=='2'||a[s]=='3'|| a[s]=='4'||a[s]=='5' ||a[s]=='6'
        ||a[s]=='7' ||a[s]=='8'||a[s]=='9'||a[s]=='0'){

            printf("\ninvalid identifier");
            goto m;
        }else{
        flag=0;
        }
        s++;
    }
    if(flag==1){
        printf("\ninvalid identifier \n");
    }
    if(flag==0){
        printf("\nvalid identifier \n");
    }
    }
    }m:
    getch();
    }
return 0;
}
