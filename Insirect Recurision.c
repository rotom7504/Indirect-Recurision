#include <stdio.h>
  
void funB(int n);
  
void funA(int n)
{
    if (n > 0) {
        printf("%d ", n);
  
        // Fun(A) is calling fun(B)
        funB(n - 1);
    }
}
  
void funB(int n)
{
    if (n > 1) {
        printf("%d ", n);
  
        // Fun(B) is calling fun(A)
        funA(n / 2);
    }
}
  
// Driver code
int main()
{
    funA(20);
    return 0;
}
