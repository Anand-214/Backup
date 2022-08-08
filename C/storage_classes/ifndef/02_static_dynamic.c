#if defined (STATIC) || defined (DYNAMIC)
#define SIZE 100
#else
    #error "ERROR: Please pass -DSTATIC or -DDYNAMIC."
#endif
int main()
{
#if defined STATIC
    int arr[SIZE];
#elif defined DYNAMIC
    int* arr = malloc(SIZE);
#endif
}

