#include <stdio.h>
int ProperDiviser(int num);

int main(){
    int n;
printf("enter n:\n");
scanf("%d",&n);
int i,j;
int count=0;
int result=ProperDiviser(n);

for (i = 2; i <= n; i++) {
     int result = ProperDiviser(i);
      if (result > i && result <= n){
         j = result;
         if (ProperDiviser(j) == i) {
             printf("(%d, %d)\n", i, j);
             count++;
      }
    }
 }
if(count==0){
    printf("Its not Amicable pair\n");
}
else{
    printf("total amicable pair is %d",count);
}
    return 0;
}



int ProperDiviser(int num){
    int sum=0;
   int i;
   for(i=0;i<num;i++){
    if(num%i==0){
        sum=sum+i;
    }
   }
    return sum;
}