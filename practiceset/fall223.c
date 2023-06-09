#include <stdio.h>
#include<stdlib.h>
int main()
{
    const char *input_file = "Sample.txt";
    const char *output_file = "Output.txt";

    // open input file
    FILE *input = fopen(input_file, "r");
    if (input == NULL)
    {
        printf("Error opening input file.\n");
        return 1;
    }

    // count number of integers in input file
    int num_ints = 0;
    int temp;
    while (fscanf(input, "%d", &temp) == 1)
    {
        num_ints++;
    }

    // allocate array for integers
    int *arr = (int *)malloc(num_ints * sizeof(int));
    if (arr == NULL)
    {
        printf("Error allocating memory.\n");
        return 1;
    }

    // rewind file pointer and read integers into array
    rewind(input);
    int i = 0;
    while (fscanf(input, "%d", &arr[i]) == 1)
    {
        i++;
    }

    // open output file
    FILE *output = fopen(output_file, "w");
    if (output == NULL)
    {
        printf("Error opening output file.\n");
        return 1;
    }

    // write even numbers to output file
    for (int i = 0; i < num_ints; i++)
    {
        if (arr[i] % 2 == 0)
        {
            fprintf(output, "%d\n", arr[i]);
        }
    }

    // close files and free memory
    fclose(input);
    fclose(output);
    free(arr);

    return 0;
}
