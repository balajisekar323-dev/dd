#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    float num[100], sum = 0, mean, sd = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &num[i]);
        sum += num[i];
    }
    mean = sum / n;
    for(i = 0; i < n; i++)
    {
        sd += pow(num[i] - mean, 2);
    }
    sd = sqrt(sd / n);
    printf("\nMean = %.2f", mean);
    printf("\nStandard Deviation = %.2f", sd);
    return 0;
}
