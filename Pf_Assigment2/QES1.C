//qestion #01
#include <stdio.h>
int main(){


int rows, col;

printf("ENTER ROWS:\n");
scanf("%d",&rows);

printf("ENTER COLUMS:\n");
scanf("%d",&col);

printf("\n\n SEATING ARRANGMENT\n\n");

printf("enter 0 for vacant\nenter 1 for reserved\n");

int i,j;
int  seat[rows][col];

for(i=0;i<rows;i++){
    for(j=0;j<col;j++){
        scanf("%d",&seat[i][j]);
    }
}

for(i=0;i<rows;i++){
    for(j=0;j<col;j++){
        printf(" %d ",seat[i][j]);
    }
    printf("\n");
}



for(i=0;i<rows;i++){
    printf("      row = %d     \n",i+1);
    int avalible=0;
    for(j=0;j<col;j++){
    if(seat[i][j]==1){
        printf("  X  ");
    }
    else{
        printf("  _  ");
    }
}

printf("\n");
}
int k;
printf("enter number of custemer want to seat together:\n");
scanf("%d",&k);
int vacant=0;
for(i=0;i<rows;i++){
    int count=0;
    for(j=0;j<col;j++){
    if(seat[i][j]==0){
        count++;
        vacant++;
    }
    else{
        count=0;
        
    }
    if(k==count){
       int  starts=j-k+1;
        printf("seat starts =%d",starts);
    }
}
return 0;
}