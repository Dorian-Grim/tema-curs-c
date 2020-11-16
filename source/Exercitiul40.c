#include <stdio.h>

int max(int data[], int size);
int min(int data[], int size);
void printstr(int data[], int size);

int main()
{
  int arr[14] = {12, 13, 21, 54, 23, 56, 75, 29, 43, 46, 36, 32, 19, 72};
  int asize = sizeof(arr) / sizeof(arr[0]);
  printf("\n");
  printstr(arr, asize);
  printf("Max: \%i\n", max(arr, asize));
  printf("Min: \%i\n", min(arr, asize));
  printf("\n");
  return 0;
}

int max(int data[], int size)
{
  int max = data[0];
  for (int i = 1; i < size; i++)
  {
    if (data[i] > max)
    {
      max = data[i];
    }
  }

  return max;
}

int min(int data[], int size)
{
  int min = data[0];
  for (int i = 1; i < size; i++)
  {
    if (data[i] < min)
    {
      min = data[i];
    }
  }

  return min;
}

void printstr(int data[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d", data[i]);
    printf("\n");
  }
}

/*
-----output------

12
13
21
54
23
56
75
29
43
46
36
32
19
72
Max: 75
Min: 12

-------------------
*/