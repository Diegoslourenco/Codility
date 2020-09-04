# include <stdio.h>
# define BITS 32

// https://stackoverflow.com/questions/11656532/returning-an-array-using-c

// Function prototypes
char* binary_conversor(int);
int counting_gap(char*);

int main(void)
{
    int decimal_number;
    char* binary_number;
    int gap;

    // Receiving the decimal number
    printf("Number: ");
    scanf("%i", &decimal_number);

    // Converting the number
    binary_number = binary_conversor(decimal_number);

    // Counting the bigger gap
    gap = counting_gap(binary_number);

    printf("\n%i", gap);
    return gap;
}

// Converting decimal to binary
char* binary_conversor(int decimal_number)
{
    static char binary_number[BITS];

    for(int i = BITS - 1; i >= 0; i--)
        {
            if (decimal_number % 2 == 0)
            {
                binary_number[i] = 0;
            }
            else
            {
                binary_number[i] = 1;
            }

            decimal_number /= 2;
        }
    
    return binary_number;
}

//Counting the bigger gap
int counting_gap(char* binary_number)
{
    int gap = 0;

    for (int i = 0; i < BITS; i++)
    {
        if (binary_number[i] == 1)
        {
            int count = 0;

            for (int j = i + 1; j < BITS; j++)
            {
                if (binary_number[j] == 1 && count > gap)
                {
                    gap = count;
                    break;
                }
                else if (binary_number[j] == 1)
                {
                    break;
                }
                else
                {
                    count++;
                }    
            }
        }   
    }   
    return gap;
}