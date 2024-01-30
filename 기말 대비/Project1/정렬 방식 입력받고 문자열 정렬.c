#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define ARR_MAX_SIZE 100
#pragma warning(disable : 6031)
char input_char(char *arr, char *type);
void func_sort(char *arr, char *type);
void func_print(char *arr);

int main()
{
    char input_string[ARR_MAX_SIZE];
    char sorting_type[ARR_MAX_SIZE];

    input_char(input_string, sorting_type);
    func_sort(input_string, sorting_type);
    func_print(input_string);
}

char input_char(char *arr, char *type)
{
    scanf("%s", arr);
    scanf("%s", type);

    return *arr;
    return *type;
}

void func_sort(char *arr, char *type)
{

    char tmp;
    int r = strlen(arr);

    char ty[2][15] = {"오름차순", "내림차순"};

    if (strcmp(type, ty[0]) == 0)
    {
        for (int i = 0; i < r; i++)
        {
            for (int k = i + 1; k < r; k++)
            {
                if (arr[i] > arr[k])
                {
                    tmp = *(arr + i);
                    *(arr + i) = *(arr + k);
                    *(arr + k) = tmp;
                }
            }
        }
    }
    else if (strcmp(type, ty[1]) == 0)
    {
        for (int i = 0; i < r; i++)
        {
            for (int k = i + 1; k < r; k++)
            {
                if (arr[i] < arr[k])
                {
                    tmp = *(arr + i);
                    *(arr + i) = *(arr + k);
                    *(arr + k) = tmp;
                }
            }
        }
    }
}

void func_print(char *arr)
{
    printf("%s", arr);
}
