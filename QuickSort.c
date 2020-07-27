#include<stdio.h>
void Partition(int A[], int p, int r)
{

int x,i,j;
    x = A[p];
    i = p - 1;
    j = r + 1;
    while (1)
	 {

            j--;
        if(A[j] <= x)
        {

        }
        i++;

         A[i] >= x;
        if (i < j)
            Swap(A, i, j);
        else
            return j;
	 }
void Quicksort(int A[], int p, int r)
{
    if (p < r)
    {
        q = Partition(A, p, r);
        Quicksort(A, p, q);
        Quicksort(A, q+1, r);
    }
}
int main()
{

}

