#include<stdio.h>
int max(int M[5][5], int n) {
  int max = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(M[i][j] > max) {
        max = M[i][j];
      }
    }
  }

  return max;
}

int max2(int B[], int n) {
  int max = 0;
  for(int i = 0; i < n; i++) {
    if(B[i] > max) {
      max = B[i];
    }
  }
  return max;
}
int distinctElements(int M[5][5], int n) {
  int maxVal = max(M, n);
  int B[maxVal + 1];
  for(int i = 0; i <= maxVal; i++) {
    B[i] = 0;
    // printf("%d\t", B[i]);
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      B[M[i][j]]++;
    }
  }
  // for(int i = 0; i <= maxVal; i++) {
  //   printf("%d", B[i]);
  // }
  int count = 0;
  int maxinHash;
  for(int i = 0; i <= maxVal; i++) {
    maxinHash = max2(B, maxVal);
  }
  for(int i = 0; i <= maxVal; i++) {
    if(B[i] >= n) {
      count++;
    }
  }

  return count;
  
}
// int Max(int a[][5],int n)
// {
//     int i,j;
//     int max=0;
//     for(i=0;i<n;i++)
//     {
//        for(j=0;j<n;j++)
//        {
//           if(a[i][j]>max)
//           {
//               max = a[i][j];
//         }
//        }
//     }
//     return max;
// }
// void Distinct(int a[][5],int n)
// {
//     int i,j,minus=-1,k=0,count=0;
//     int max = Max(a,n);
//     int hash[max+1];
//     for(i=0;i<max+1;i++)
//     {
//         hash[i]=0;
//     }

//    for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//            if(hash[a[i][j]]==(minus+1))
//            {
//                hash[a[i][j]]=minus;

//            }

//         }
//          minus--;
//     }
//     for(i=0;i<=max;i++)
//     {
//         if(hash[i]==(minus+1))
//         {
//             count++;
//         }
//     }

//     printf("COunt:%d",count);

// }
int main() {
  int n = 5;
  int M[5][5] =  {{12, 1, 14, 3, 16},
     {14, 2, 1, 3, 35},
     {14, 1, 14, 3, 11},
     {14, 5, 3, 2, 1},
     {1, 18, 3, 21, 14}};
  printf("%d", distinctElements(M, n));
}