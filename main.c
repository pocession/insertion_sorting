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
    int i, j, array[3], temp;
    //Only three variables can be entered
    printf("Enter three values with a space in betwen:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Numbers needed to be sorted: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    //Scan variables from array[0] to array[2]
    for (i = 0; i < 2; i++)
    {
        //Move the smallest variable to array[0]
        for (j = i + 1; j > 0 && array[j] < array[j - 1]; j--)
        {
            temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;
        }
    }
    printf("After sorting:");
    for (i = 0; i < 3; i++)
    {
        printf(" %d ", array[i]);
    }
    printf("\n");
}
