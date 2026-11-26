#include <stdio.h>
void inputTemp(int rows,int col,int sensor[rows][col] );
void  SensorAnalysis(int rows,int col,int sensor[rows][col]);
int main(){
    int rows,col;

    printf("Enter rows:\n");
    scanf("%d",&rows);
    printf("Enter colum:\n");
    scanf("%d",&col);
    int sensor[rows][col];
    inputTemp(rows,col,sensor);
    SensorAnalysis(rows,col,sensor);
    return 0;
}
void inputTemp(int rows,int col,int sensor[rows][col]){
    int i,j;
    printf("Enter temp:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<col;j++){
            scanf("%d",&sensor[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<col;j++){
            printf("%d",sensor[i][j]);
        }
    }   
}
void SensorAnalysis(int rows,int col,int sensor[rows][col]){
    int i,j;
    float avg;
    int critical=0;
    int warning=0;
    int longest;
    int hig_avg=0;
    int sum_highest=0;
    for(i=0;i<rows;i++){
        int highest=sensor[i][0];
        int lowest=sensor[i][0];
        int sum=0;
        int longest=0;
        int count=0;
        for(j=0;j<col;j++){
            sum=sum+sensor[i][j];
            if(sensor[i][j]>highest){
                highest=sensor[i][j];

            }
            if(sensor[i][j]<lowest){
                lowest=sensor[i][j];
            }
            if(sensor[i][j]>=40){
                critical++;
              }
            if(sensor[i][j]>=35 && sensor[i][j]<=39){
                warning++;
            }
            if(sensor[i][j]>=35){
                count++;
                if(longest<count){
                    longest=count;
                } 
            }
            else{
                    count=0;
                }

        }
        
        avg = (float)sum / col;
        sum_highest = sum_highest + highest;
        printf("row = %d\n",i+1);
        printf("sum= %d\n",sum);
        printf("avg = %.2f\n",avg);
        printf("highest=%d\n",highest);
        printf("lowest=%d\n",lowest);
        printf("critical =%d\n",critical);
        printf("the longest streak = %d\n",longest);
        

    }
    
        hig_avg = (float)sum_highest / rows; 
        printf("\nAverage of highest temperatures = %.2f\n", hig_avg);

   
}