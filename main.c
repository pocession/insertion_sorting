//
//  main.c
//  Insertion_sorting
//
//  Created by Tsunghan Hsieh on 2018/09/04.
//  Copyright © 2018 Tsunghan Hsieh. All rights reserved.
//

// The program allows users to sort three variables in ascending order
#include <stdio.h>

int main()
{
    //n: the upper limit of number of entery
    //i: scan number from left to right
    //j: if array[j - 1] > arra[j], then move array[j]to left
    //temp: a temporary number
    int n, i, j, array[1000], temp;
    printf("How many values are you going to enter: ");
    {
        scanf("%d", &n);
    }
    printf("Enter values with a space in betwen (The maximum number of values is 999): ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    printf("You just enter %d values: \n", n);
    printf("Numbers needed to be sorted: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j > 0 && array[j] < array[j - 1]; j--)
        {
            temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;
        }
    }
    printf("After sorting:");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", array[i]);
    }
    printf("\n");
}
