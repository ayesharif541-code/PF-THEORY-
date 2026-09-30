#include <stdio.h>
int main() {




    //qestion 01




    int number;
    int total;
 printf("input number:\n");
 scanf("%d",&number);
  while(number>0){
    char season,room_type ;
    int night;
    printf("input season\n");
    scanf(" %c",&season);
    printf("input room type\n");
    scanf(" %c",&room_type);
    printf("input night\n");
    scanf(" %d",&night);
 if(season=='p' && room_type=='s'){
        total= 5000*night;
        printf("your bill is %d\n",total);
    }

        else if(season=='p' && room_type=='d'){
             total= 8000*night;
        printf("your bill is %d\n",total);
        }

        else if(season=='p'  && room_type=='u'){
        total= 12000*night;
        printf("your bill is %d\n",total);
    }
else if(season=='o' && room_type=='s'){
        total= 3000*night;
        printf("your bill is %d\n",total);
    }

        else if(season=='o'  && room_type=='d'){
             total= 5000*night;
        printf("your bill is %d\n",total);
        }

        else if(season=='o'  && room_type=='u'){
        total= 8000*night;
        printf("your bill is %d\n",total);

    }
    else {
        printf("invalid input\n");
    }
    int final_bill;
if (night>7 ){
   final_bill = total - (total * 0.15);
   printf("you stay more than 7 nights here so your final bill is %d\n", final_bill);

}
  
else{
    printf("0% discount\n");
}
number= number-1;
  }



  //qestion 2




  int current_floor , reqested_floor;
  printf("enter current floor\n");
  scanf("%d",& current_floor);
  printf("enter reqested floor\n");
  scanf("%d",&reqested_floor);
  
  if(current_floor<reqested_floor){
    printf("moving up\n");
  }
  else if(current_floor>reqested_floor){
     printf("moving down\n");
  }
else{
    printf("door opening\n");
}



//qestion 3




int student1;
int sum;
int m1, m2 ,m3, m4, m5;
int marks;
int avarage;

printf("enter m1,m2,m3,m4,m5");
scanf(" %d %d %d %d %d", &m1 ,&m2,&m3,&m4,&m5);
sum= m1+ m2+m3+m4 +m5;
avarage =sum / 5 ;


    if(marks<33){
        printf("fail\n");

    }
    else if (avarage>=60)
    {
       printf("pass\n");
    }
    else if (avarage>=80)
    {
       printf("distinction\n");
    }
    else {
        printf("fail\n");
    }
    





//qestion 4


int p,q,d,t ,s,a;
int final_bill;
printf("enter p\n");
scanf("%d",&p);
printf("enter q\n\n");
scanf("%d",&q);
printf("enter d\n");
scanf("%d",&d);
printf("enter t\n");
scanf("%d",&t);

s=q*p;
a=s-(s*d)/100;
final_bill=a+(a*t)/100;
printf("the subtotal is %d\n",s);
printf("the total discount amount is %d\n",a);
printf("the final bill is %d\n",final_bill);

printf("genrate bill\n");

//qestion 5 




    int n, i = 1;
    int faculty = 20, student = 40, visitor = 15;
    int accept = 0, reject = 0;
    int car = 0, bike = 0, van = 0;
    char vehicle, category, permit, emergency;

    printf("Enter number of vehicles: ");
    scanf("%d", &n);

    while(i <= n)
    {
        printf("\nEnter vehicle type C/B/V: ");
        scanf(" %c", &vehicle);

        if(vehicle != 'C' && vehicle != 'B' && vehicle != 'V')
        {
            printf("Invalid. Enter again: ");
            scanf(" %c", &vehicle);
        }
        else{
            printf("valid");
        }

        printf("Enter category F/S/G: ");
        scanf(" %c", &category);

        if(category != 'F' && category != 'S' && category != 'G')
        {
            printf("Invalid. Enter again: ");
            scanf(" %c", &category);
        }
        else{
           printf("valid");
        }
        printf("Enter permit Y/N: ");
        scanf(" %c", &permit);

        if(permit != 'Y' && permit != 'N')
        {
            printf("Invalid. Enter again: ");
            scanf(" %c", &permit);
        }
        else{
        printf("valid");
    }
printf("Emergency vehicle Y/N: ");
scanf(" %c", &emergency);
     

        if(permit == 'Y' || emergency == 'Y')
        {
            printf("valid: ");
            if(category == 'F')
            {
                if(faculty >= 1)
                {
                    faculty = faculty - 1;
                    accept = accept + 1;

                    if(vehicle == 'C')
                        car = car + 1;
                    else if(vehicle == 'B')
                        bike = bike + 1;
                    else
                        van = van + 1;

                    printf("Accepted: Zone A\n");
                    printf("Remaining: %d\n", faculty);
                }
                else
                {
                    printf("Rejected: No space in Zone A\n");
                    reject = reject + 1;
                }
            }
             else if(category == 'S')
{
    if(vehicle == 'V')
    {
        if(student >= 1)
        {
            student = student - 1;
            accept = accept + 1;
            van = van + 1;

            printf("Accepted: Zone B\n");
            printf("Remaining: %d\n", student);
        }
        else if(visitor >= 2)
        {
            visitor = visitor - 2;
            accept = accept + 1;
            van = van + 1;

            printf("Accepted: Zone C\n");
            printf("Remaining: %d\n", visitor);
        }
        else
        {
            printf("Rejected: No space\n");
            reject = reject + 1;
        }
    }
    else {
        if(student >= 1)
        {
            student = student - 1;
            accept = accept + 1;

            if(vehicle == 'C')
                car = car + 1;
            else
                bike = bike + 1;

            printf("Accepted: Zone B\n");
            printf("Remaining: %d\n", student);
        }
        else
        {
            printf("Rejected: No space in Zone B\n");
            reject = reject + 1;
              }
           }
      }

            else if(vehicle == 'V')
                {
                    if(visitor >= 2)
                    {
                        visitor = visitor - 2;
                        accept = accept + 1;
                        van = van + 1;

                        printf("Accepted: Zone C\n");
                        printf("Remaining: %d\n", visitor);
                    }
                    else
                    {
                        printf("Rejected: No space for van\n");
                        reject = reject + 1;
                    }
                   
                    }


        }

        else{
                printf("Invalid. Enter again: ");
                scanf(" %c", &emergency);
            }
             i=i+1;
       
    }
   
       
            

    printf("\nParking Summary\n");
    printf("Total processed: %d\n", n);
    printf("Accepted: %d\n", accept);
    printf("Rejected: %d\n", reject);
    printf("Cars: %d\n", car);
    printf("Bikes: %d\n", bike);
    printf("Vans: %d\n", van);

    printf("\nZone A occupied: %d\n", 20 - faculty);
    printf("Zone A remaining: %d\n", faculty);

    printf("Zone B occupied: %d\n", 40 - student);
    printf("Zone B remaining: %d\n", student);

    printf("Zone C occupied: %d\n", 15 - visitor);
    printf("Zone C remaining: %d\n", visitor);

    if(faculty < student && faculty < visitor)
        printf("Highest occupancy: Zone A\n");
    else if(student < faculty && student < visitor)
        printf("Highest occupancy: Zone B\n");
    else
        printf("Highest occupancy: Zone C\n");

    if(faculty == 0 && student == 0 && visitor == 0)
        printf("Campus parking is FULL\n");
    else
        printf("Campus parking is NOT FULL\n");







//qestion 6










int type, charge, need, duration, clock;
int member, disabled, available;
int units, chargeCost, parkCost, off, pay;
char vtype, mem, dis, station;

printf("Enter vehicle type E/H: ");
scanf(" %c", &vtype);

printf("Enter current battery percentage: ");
scanf("%d", &charge);

printf("Enter required charging percentage: ");
scanf("%d", &need);

printf("Enter parking duration in hours: ");
scanf("%d", &duration);

printf("Enter current time: ");
scanf("%d", &clock);

printf("Enter membership Y/N: ");
scanf(" %c", &mem);

printf("Enter disabled priority Y/N: ");
scanf(" %c", &dis);

printf("Enter charging station availability Y/N: ");
scanf(" %c", &station);

printf("\nVehicle type: %c\n", vtype);
printf("Current battery: %d%%\n", charge);
printf("Required charging: %d%%\n", need);

if(station == 'N')
{
    if(vtype == 'H')
        printf("Charging unavailable - Parking only.\n");
    else
        printf("No charging slot available.\n");
}
else if(vtype == 'H' && charge >= 40)
{
    printf("Vehicle does not qualify for EV charging.\n");
}
else
{
    units = need - charge;

    if(units <= 0)
    {
        printf("No charging required.\n");
    }
    else
    {
        if(charge <= 15 && need >= 80)
        {
            printf("Charging Priority: Emergency Charging Priority\n");
        }
        else if(dis == 'Y' || (mem == 'Y' && charge <= 30))
        {
            printf("Charging Priority: Priority Charging\n");
        }
        else
        {
            printf("Charging Priority: Normal Charging\n");
        }

        if(clock < 17 || clock > 22)
        {
            printf("Off-peak hours\n");

            chargeCost = units * 35;

            if(mem == 'Y' && !(charge <= 15 && need >= 80))
            {
                off = chargeCost * 20 / 100;
            }
            else
            {
                off = 0;
            }
        }
        else
        {
            printf("Peak hours\n");

            chargeCost = units * 50;
            off = chargeCost * 10 / 100;
        }

        chargeCost = chargeCost - off;
    }

    if(dis == 'Y')
    {
        parkCost = 0;
    }
    else if(duration <= 2)
    {
        parkCost = 200;
    }
    else if(duration <= 5)
    {
        parkCost = 400;
    }
    else
    {
        parkCost = 700;
    }

    if(dis != 'Y' && mem == 'Y')
    {
        parkCost = parkCost - (parkCost * 20 / 100);
    }

    pay = chargeCost + parkCost;

    printf("\nCharging cost: Rs. %d\n", chargeCost);
    printf("Parking cost: Rs. %d\n", parkCost);
    printf("Discount: Rs. %d\n", off);
    printf("Final payable amount: Rs. %d\n", pay);

    if(duration > 8)
        printf("Long-stay warning: Please relocate your vehicle after charging.\n");
    else
        printf("Standard parking duration.\n");
}
















return 0;
}