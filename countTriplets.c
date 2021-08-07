#include <stdio.h>
int length(int A[]) {
  int length = 0;
  for(int i = 0; i < 5; i++) {
    length++;
  }
  return length;
}

int maxValue(int A[], int n) {
  int i, max = 0;

  for(i = 0; i < n; i++) {
    if(A[i] > max) {
      max = A[i];
    }
  }
  return max;
}

int countTriplets(int A[], int n) {
  int maxVal = 0;
  maxVal = maxValue(A, n);
  int f[maxVal + 1];
  for(int i = 0; i <= maxVal; i++) {
    f[i] = 0;
  }

  for(int i = 0; i < n; i++) {
    f[A[i]]++;
  }
  int ans = 0;
  ans += f[0] * (f[0] - 1) * (f[0] - 2) / 6;
  
  for(int i = 1; i <= maxVal; i++) {
    ans += f[0] * f[i] * (f[i] - 1) / 2;
  }
 
  for(int i = 1; 2 * i <= maxVal; i++) {
    ans +=  f[i] * (f[i] - 1) / 2 * f[2 * i];
  }
  
  for(int i = 1; i <= maxVal; i++) {
    for(int j = i + 1; j + i <= maxVal; j++) {
      ans += f[i] * f[j] * f[i + j];
    }
  }

  return ans;
}
int main() {
  int A[7] = {1,1,1,2,2};
  int n = length(A);
  printf("%d", countTriplets(A, n));
  return 0;
}