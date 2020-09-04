# include <stdio.h>

int find_odd(int*, int);

int main(void)
{
    int array_length;
    int i, j, odd;

    printf("Array length: ");
    scanf("%i", &array_length);

    int array[array_length];

    for(i = 0; i < array_length; i++)
    {
        printf("Number %i: ", i + 1);
        scanf("%i", &array[i]);
    }

    printf("\nThe number is: %i", find_odd(array, array_length));

    return;
}

int find_odd(int* array, int array_length) 
{
    int odd = 0;
    
    for (int i = 0; i < array_length; i++)
    {
        odd = odd ^ array[i];
    }
    
    return odd;
}
