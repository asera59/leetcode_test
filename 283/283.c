#include<stdio.h>
//void moveZeroes(int* nums, int numsSize) {
int main() {
    int nums[] = { 0, 1, 0, 3, 12 };
    //int nums[] = { 0 };
    int numsSize;
    numsSize = sizeof(nums) / sizeof(nums[0]);
   //10_16
    //int i;
    //if (numsSize > 1) {
    //    for (i = numsSize - 1;i >= 0;) {
    //        if (nums[i] == 0) {
    //            int a = i;
    //            int b = i + 1;
    //            while (b < numsSize) {
    //                nums[a++] = nums[b++];
    //            }
    //            nums[numsSize - 1] = 0;
    //        }
    //        i--;
    //    }
    //}
    //10_16+ai˼·
    int a = 0;
    int b = 0;
    while (nums[b]!=0){
        if (b == numsSize) {
            break;
        }
        b++;
    }
    for (a=b;a < numsSize-1;) {
            a++;
            if (nums[a]) {
                nums[b] = nums[a];
                b++;
            }
        }
    for (;b < numsSize;b++) {
        nums[b] = 0;
    }
    printf("[");
    int d;
    for (d = 0;d < numsSize;d++) {
        if (d == 0) {
            printf("%d", nums[d]);
        }
        else printf(",%d", nums[d]);
    }
    printf("]");
}