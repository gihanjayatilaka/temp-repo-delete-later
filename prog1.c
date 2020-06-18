#include <stdio.h>
#include <string.h>

int main(){
		printf("Prog1.c\n");
        int YY;
        int XX;
        int a;

        char aa[20];
        scanf("%d",&a);
        printf("a : %d\n",a);
        scanf("%s",aa);
        // printf("%d : %s len=%ld\n",a,aa,strlen(aa));
        sscanf(aa,"E/%d/%d",&YY,&XX);        
        printf("Batch: %d\n",YY);
        printf("Idx :%d\n",XX);
        
}

