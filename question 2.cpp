#include <stdio.h>
    int main ()
    {
 
        int number[30];
        int i, j, a, n, counter, average;
 
        printf("Enter the value of N\n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] < number[j])
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
 
        }
 
        printf("The numbers arranged in descending order are given below \n");
 
        for (i = 0; i < n; ++i)
        {
            printf("%d\n", number[i]);
        }
 
        printf("The 2nd largest number is  = %d\n", number[1]);
        printf("The 2nd smallest number is = %d\n", number[n - 2]);
 
        average = (number[1] + number[n - 2]) / 2;
        counter = 0;
 
        for (i = 0; i < n; ++i)
        {
            if (average == number[i])
            {
                ++counter;
            }
        }
 
        if (counter == 0 )
            printf("The average of %d  and %d is = %d is not in the array \n",
            number[1], number[n - 2], average);
 
        else
            printf("The average of %d  and %d in array is %d in numbers \n",
            number[1], number[n - 2], counter);
    }
