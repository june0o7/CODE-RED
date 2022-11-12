#include<stdio.h>
int main()
{
    int sub,math=1,sc=2,both=3;
    printf("which sub you have passed\n1)math\n2)sc\n3)both\ninput:");
    scanf("%d",&sub);
    if (sub==3)  
    {   
        printf("congratulation you passed the both exam and yourr prize is the gift worth 45$");
    }
    else if (sub==1)
    {
        printf("congratulation you only have passsed the math exam and you won the prize worth 15$",math);
    }
    else if (sub==2)
    {
        printf("congratulation you only have passsed the sc exam and you won the prize worth 15$",sc);

    }
    
    
    
}