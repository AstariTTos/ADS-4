// Copyright 2021 NNTU-CS
int countPairs1(int* arr, int len, int val) {
    int count = 0;
        for (int c = 0; c < len-1; c++) {
        for (int d = d + 1; d < len; d++) {
           if (arr[c] + arr[d] == val) {
                                count++;
            }
       }
   }
             return count;
                      return 0;
                }
                int countPairs2(int* arr, int len, int val) {
                              int count = 0;

                      for (int c = 0; c < len-1; c++) {
                           if(arr[c] > val) { break; }
             for (int d = len-1; d > c; d--) {
           if (arr[d] > val) continue;
          if (arr[d] > val) { continue; }
        if (arr[c] + arr[d] == val) {
          count++;
     }
