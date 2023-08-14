#include <stdio.h>
#define max 10
int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];
void merging(int low, int mid, int high) {
   int x1, x2, i;
   for(x1 = low, x2 = mid + 1, i = low; x1 <= mid && x2 <= high; i++) {
      if(a[x1] <= a[x2])
         b[i] = a[x1++];
      else
         b[i] = a[x2++];
   }
   while(x1 <= mid)    
      b[i++] = a[x1++];
   while(x2 <= high)   
      b[i++] = a[x2++];
   for(i = low; i <= high; i++)
      a[i] = b[i];
}
void sort(int low, int high) {
   int mid;
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else { 
      return;
   }   
}
int main() { 
   int i;
   printf("List before sorting\n");
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
   sort(0, max);
   printf("\nList after sorting\n");
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}
