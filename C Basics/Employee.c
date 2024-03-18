// program to print ID and salary(with two decimal places) of employee for a particular month//
 #include<stdio.h>
  
  int main() {

       // INTRODUCTION//
          printf("Name: Aryan saud\n");
          printf("Roll no: 3\n");
          printf("Q: program to print ID and salary of employee for a particular month\n");

      // Declaring variables //
  float  TWH, ARPH, TSPM;   /*TWH= total work hour, ARPH= amount recieve per hour, TSPM=total salary of particular month                                     month */
          
   int ID;

        // Taking Inputs//
            printf("enter ID of employee:");
            scanf("%d", &ID);

             printf("enter TWH of employee:");
             scanf("%f", &TWH);

            printf("enter ARPH of employeee:");
            scanf("%f", &ARPH);

            // calculating total salary of employee of particular month//

                 TSPM= TWH*ARPH*30;

             // output //

             printf("Employee id is %d\n", ID);
             printf("total salary is %.2f\n", TSPM);

           return 0;  }
             