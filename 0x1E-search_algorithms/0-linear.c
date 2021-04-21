#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;
    if (array)
    {
        while (i < size)
        {
            printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            if (array[i] == value)
                return(i);
            i++;
        }
    }
    return(-1);
}
