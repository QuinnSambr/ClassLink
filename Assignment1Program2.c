//Jonathan Le
//CS 1325.001
//09-13-2020
//Program #2 Write a program to evaluate any function of order 5 or less at a given interval [xmin,xmax]
//and display the values as a table with the values of x, and f(x)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declare variables
    int f_order;

    //asks user to enter the order of the function
    printf("Enter the order of the function: ");
    scanf("%d",&f_order);

    if(f_order>5 || f_order<1)
    {
        //error message
        printf("Order of the function is greater than 5 or less than 1.");
        return(0);
    }
    else
    {
        //declare the variables
        float a,b,c,d,e,f,xmin,xmax;
        int alpha;
        //define switch expression
        switch(f_order)
        {
            //if the order of the function is 1
            case 1:

            //enter coefficients of e and f
            printf("\nEnter the coefficient of e = ");
            scanf("%f",&e);
            printf("\nEnter the coefficient of f = ");
            scanf("%f",&f);

            //prompt user to enter the xmin,xmax,and alpha values
            printf("\nEnter the value of xmin = ");
            scanf("%f",&xmin);
            printf("\nEnter the value of xmax = ");
            scanf("%f",&xmax);
            printf("\nEnter the value of alpha = ");
            scanf("%d",&alpha);

            //if value of alpha is greater than 360 or less than 0
            if(alpha<0)
            {
                alpha = 360-alpha;
            }
            else if(alpha>360)
            {
                alpha = alpha/10;
            }
            //error message of xmin xmax if xmax is smaller or equal to xmin
            if(xmax<=xmin)
            {
                printf("xmax is smaller or equal to xmin");
                return(0);
            }
            else
            {
                //display the table of x and f(x)
                printf("x\t\t f(x)");
                //declare variables
                float i,x,count,dx,fx;
                i=x=count=dx=fx=0;
                printf("\n-----------|-------------------");

                //start for loop
                for(i=xmin;i<=xmax;i++)
                {
                    //check if it is first iteration
                    if(i==xmin)
                    {
                        //assign the value of xmin to the variable x
                        x = xmin;
                    }
                    //check if it is the last iteration
                    else if(i==xmax)
                    {
                        //assign the value of xmax to the variable x
                        x = xmax;
                    }
                    else
                    {
                        //increment the value of x by count*dx
                        x = x + count*dx;
                    }
                    //calculate the value of f(x) at the value of x
                    fx=(e*x)*sin(alpha)+f;

                    //display the value of x and f(x) in the next row
                    printf("\n%.2f       |    %.2f",x,fx);

                    //increment the count
                    count = count + 1;

                    //calculate the value of dx
                    dx = (xmax-xmin)/10;
                }
                printf("\n-----------|------------------\n");
            }
            break;

            //case 2 if the order of the function is 2
            case 2:

            //enter coefficients of d,e and f
            printf("\nEnter the coefficient of d = ");
            scanf("%f",&d);
            printf("\nEnter the coefficient of e = ");
            scanf("%f",&e);
            printf("\nEnter the coefficient of f = ");
            scanf("%f",&f);

            //prompt user to enter the xmin,xmax,and alpha values
            printf("\nEnter the value of xmin = ");
            scanf("%f",&xmin);
            printf("\nEnter the value of xmax = ");
            scanf("%f",&xmax);
            printf("\nEnter the value of alpha = ");
            scanf("%d",&alpha);

            //if value of alpha is greater than 360 or less than 0
            if(alpha<0)
            {
                alpha = 360-alpha;
            }
            else if(alpha>360)
            {
                alpha = alpha/10;
            }

            //error message of xmin xmax if xmax is smaller or equal to xmin
            if(xmax<=xmin)
            {
                printf("xmax is smaller or equal to xmin");
                return(0);
            }

             else
            {
                //display the table of x and f(x)
                printf("x\t\t f(x)");
                //declare variables
                float i,x,count,dx,fx;
                i=x=count=dx=fx=0;
                printf("\n-----------|-------------------");

                //start for loop
                for(i=xmin;i<=xmax;i++)
                {
                    //check if it is first iteration
                    if(i==xmin)
                    {
                        //assign the value of xmin to the variable x
                        x = xmin;
                    }
                    //check if it is the last iteration
                    else if(i==xmax)
                    {
                        //assign the value of xmax to the variable x
                        x = xmax;
                    }
                    else
                    {
                        //increment the value of x by count*dx
                        x = x + count*dx;
                    }
                    //calculate the value of f(x) at the value of x
                    fx=(d*pow(x,2))*cos(alpha) + (e*x)*sin(alpha) + f;

                    //display the value of x and f(x) in the next row
                    printf("\n%.2f       |    %.2f",x,fx);

                    //increment the count
                    count = count + 1;

                    //calculate the value of dx
                    dx = (xmax-xmin)/10;
                }
                printf("\n-----------|------------------\n");
            }
            break;

            //if order of the function is 3
            case 3:
            //enter coefficients of c,d,e and f
            printf("\nEnter the coefficient of c = ");
            scanf("%f",&c);
            printf("\nEnter the coefficient of d = ");
            scanf("%f",&d);
            printf("\nEnter the coefficient of e = ");
            scanf("%f",&e);
            printf("\nEnter the coefficient of f = ");
            scanf("%f",&f);

            //prompt user to enter the xmin,xmax,and alpha values
            printf("\nEnter the value of xmin = ");
            scanf("%f",&xmin);
            printf("\nEnter the value of xmax = ");
            scanf("%f",&xmax);
             printf("\nEnter the value of alpha = ");
            scanf("%d",&alpha);

            //if value of alpha is greater than 360 or less than 0
            if(alpha<0)
            {
                alpha = 360-alpha;
            }
            else if(alpha>360)
            {
                alpha = alpha/10;
            }

            //error message of xmin xmax if xmax is smaller or equal to xmin
            if(xmax<=xmin)
            {
                printf("xmax is smaller or equal to xmin");
                return(0);
            }

             else
            {
                //display the table of x and f(x)
                printf("x\t\t f(x)");
                //declare variables
                float i,x,count,dx,fx;
                i=x=count=dx=fx=0;
                printf("\n-----------|-------------------");

                //start for loop
                for(i=xmin;i<=xmax;i++)
                {
                    //check if it is first iteration
                    if(i==xmin)
                    {
                        //assign the value of xmin to the variable x
                        x = xmin;
                    }
                    //check if it is the last iteration
                    else if(i==xmax)
                    {
                        //assign the value of xmax to the variable x
                        x = xmax;
                    }
                    else
                    {
                        //increment the value of x by count*dx
                        x = x + count*dx;
                    }
                    //calculate the value of f(x) at the value of x
                    fx=(c*pow(x,3))*sin(alpha) + (d*pow(x,2))*cos(alpha) + (e*x)*sin(alpha) + f;

                    //display the value of x and f(x) in the next row
                    printf("\n%.2f       |    %.2f",x,fx);

                    //increment the count
                    count = count + 1;

                    //calculate the value of dx
                    dx = (xmax-xmin)/10;
                }
                printf("\n-----------|------------------\n");
            }
            break;

            //if order of the function is 4
            case 4:
            //enter coefficients of b,c,d,e and f
            printf("\nEnter the coefficient of b = ");
            scanf("%f",&b);
            printf("\nEnter the coefficient of c = ");
            scanf("%f",&c);
            printf("\nEnter the coefficient of d = ");
            scanf("%f",&d);
            printf("\nEnter the coefficient of e = ");
            scanf("%f",&e);
            printf("\nEnter the coefficient of f = ");
            scanf("%f",&f);

            //prompt user to enter the xmin,xmax,and alpha values
            printf("\nEnter the value of xmin = ");
            scanf("%f",&xmin);
            printf("\nEnter the value of xmax = ");
            scanf("%f",&xmax);
            printf("\nEnter the value of alpha = ");
            scanf("%d",&alpha);

            //if value of alpha is greater than 360 or less than 0
            if(alpha<0)
            {
                alpha = 360-alpha;
            }
            else if(alpha>360)
            {
                alpha = alpha/10;
            }

            //error message of xmin xmax if xmax is smaller or equal to xmin
            if(xmax<=xmin)
            {
                printf("xmax is smaller or equal to xmin");
                return(0);
            }

             else
            {
                //display the table of x and f(x)
                printf("x\t\t f(x)");
                //declare variables
                float i,x,count,dx,fx;
                i=x=count=dx=fx=0;
                printf("\n-----------|-------------------");

                //start for loop
                for(i=xmin;i<=xmax;i++)
                {
                    //check if it is first iteration
                    if(i==xmin)
                    {
                        //assign the value of xmin to the variable x
                        x = xmin;
                    }
                    //check if it is the last iteration
                    else if(i==xmax)
                    {
                        //assign the value of xmax to the variable x
                        x = xmax;
                    }
                    else
                    {
                        //increment the value of x by count*dx
                        x = x + count*dx;
                    }
                    //calculate the value of f(x) at the value of x
                    fx=(b*pow(x,4))*cos(alpha)+(c*pow(x,3))*sin(alpha)+(d*pow(x,2))*cos(alpha) + (e*x)*sin(alpha) + f;

                    //display the value of x and f(x) in the next row
                    printf("\n%.2f       |    %.2f",x,fx);

                    //increment the count
                    count = count + 1;

                    //calculate the value of dx
                    dx = (xmax-xmin)/10;
                }
                printf("\n-----------|------------------\n");
            }
            break;

            //if order of the function is 5
            case 5:
            //enter coefficients of a,b,c,d,e and f
            printf("\nEnter the coefficient of a = ");
            scanf("%f",&a);
            printf("\nEnter the coefficient of b = ");
            scanf("%f",&b);
            printf("\nEnter the coefficient of c = ");
            scanf("%f",&c);
            printf("\nEnter the coefficient of d = ");
            scanf("%f",&d);
            printf("\nEnter the coefficient of e = ");
            scanf("%f",&e);
            printf("\nEnter the coefficient of f = ");
            scanf("%f",&f);

            //prompt user to enter the xmin and xmax values
            printf("\nEnter the value of xmin = ");
            scanf("%f",&xmin);
            printf("\nEnter the value of xmax = ");
            scanf("%f",&xmax);
            printf("\nEnter the value of alpha = ");
            scanf("%d",&alpha);

            //if value of alpha is greater than 360 or less than 0
            if(alpha<0)
            {
                alpha = 360-alpha;
            }
            else if(alpha>360)
            {
                alpha = alpha/10;
            }

            //error message of xmin xmax if xmax is smaller or equal to xmin
            if(xmax<=xmin)
            {
                printf("xmax is smaller or equal to xmin");
                return(0);
            }

             else
            {
                //display the table of x and f(x)
                printf("x\t\t f(x)");
                //declare variables
                float i,x,count,dx,fx;
                i=x=count=dx=fx=0;
                printf("\n-----------|-------------------");

                //start for loop
                for(i=xmin;i<=xmax;i++)
                {
                    //check if it is first iteration
                    if(i==xmin)
                    {
                        //assign the value of xmin to the variable x
                        x = xmin;
                    }
                    //check if it is the last iteration
                    else if(i==xmax)
                    {
                        //assign the value of xmax to the variable x
                        x = xmax;
                    }
                    else
                    {
                        //increment the value of x by count*dx
                        x = x + count*dx;
                    }
                    //calculate the value of f(x) at the value of x
                    fx=(a*pow(x,5))*sin(alpha) + (b*pow(x,4))*cos(alpha) + (c*pow(x,3))*sin(alpha) + (d*pow(x,2))*cos(alpha) + (e*x)*sin(alpha) + f;

                    //display the value of x and f(x) in the next row
                    printf("\n%.2f       |    %.2f",x,fx);

                    //increment the count
                    count = count + 1;

                    //calculate the value of dx
                    dx = (xmax-xmin)/10;
                }
                printf("\n-----------|------------------\n");
            }
            break;
        }
    }
    //return an integer value to the main function
    return 0;
}
