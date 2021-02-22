//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int start,end,l;
//    scanf("%d%d",&start,&end);
//    l=(end-start)/100+((end-start)%100>=50?1:0);
//    printf("%02d:%02d:%02d",l/3600,l%3600/60,l%60);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j,k;
//    char a;
//    scanf("%d %c",&n,&a);
//    int arr[200]={0};
//    for(i=1;i*(1+2*i-1)-1<=2000;i++)
//        arr[i-1]=i*(1+2*i-1)-1;
//    for(i=-1;i<200;i++)
//    {
//        if(arr[i+1]>n)
//            break;
//    }
//    for(j=0;j<i;j++)
//    {
//        for(k=0;k<j;k++)
//            printf(" ");
//        for(k=0;k<2*(i+1)-1-2*j;k++)
//        {
//            printf("%c",a);
//        }
//        printf("\n");
//    }
//    for(j=0;j<i;j++)
//        printf(" ");
//    if(n!=0)printf("%c",a);
//    printf("\n");
//    for(j=0;j<i;j++)
//    {
//        for(k=0;k<i-j-1;k++)
//            printf(" ");
//        for(k=0;k<(j+1)*2+1;k++)
//            printf("%c",a);
//        printf("\n");
//    }
//    printf("%d",n-arr[i]);
//    return 0;
//}
