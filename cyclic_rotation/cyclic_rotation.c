# include <stdio.h>

int main ()
{
    int N, K, i;

    //Receiving the length of the array and the rotate times
    printf("Array Length: ");
    scanf("%i", &N);
    printf("\nRotate times: ");
    scanf("%i", &K);

    int A[N], R[N];

    for (i = 0; i < N; i++)
    {
        printf("\nNumber %i: ", i + 1);
        scanf("%i", &A[i]);
    }

    // Rotating K times 
    for(int i = 0; i < N; i++)
    {
        R[(i + K) % N] = A[i];
    }
    
    for (i = 0; i < N; i++)
    {
        printf("%i", R[i]);
    }

    return R;
}