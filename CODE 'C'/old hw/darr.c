#include<stdio.h>
#include<math.h>
int i,j,x,y,a=0,si=1;
double s=0;
int main(){
    printf("ENTER VALUE OF X:");
    scanf("%d",&x);
    printf("ENTER VALUE OF Y:");
    scanf("%d",&y);
    for(i=2,j=4;i<=40;i+=2,j+=2){
        a=pow(pow(x,i),j)/pow(y,j);
        si=si*-1;
        s+=a;
    }
    printf("SUM:%d",s);
}