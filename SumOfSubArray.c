#include<stdio.h>
#include<stdlib.h>
struct Array {
  int *A;
  int n;
};

int sumOfSubArray(struct Array A, int sum) {
  int countRight , countLeft;
  countRight = countLeft = 0;
  int countSum = 0;
  while(countSum != sum) {
    if(countSum < sum) {
      countRight++;
      countSum += A.A[countRight];
      
    }

    else if(countSum > sum) {
      countLeft++;
      countSum -= A.A[countLeft];
    }   
  }
  
  printf("the sub array is %d to %d", countLeft, countRight);

}
int main() {
  struct Array A;
  scanf("%d", &A.n);
  A.A = (int *)malloc(A.n * sizeof(int));
  for(int i = 0; i < A.n; i++) {
    scanf("%d", &A.A[i]);
  }

  sumOfSubArray(A, 15);
}