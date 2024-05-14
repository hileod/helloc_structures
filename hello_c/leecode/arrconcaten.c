#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums,int n,int* returnSize){
    int *ans = (int*)malloc(sizeof(int) * n *2);
    *returnSize = n*2;
    for(int i=0;i<n;++i){
        ans[i] = nums[i];
        ans[i+n] = nums[i];
    }

    return ans;


}

int main(){
    int nums[]={1,2,1};
    int numsize;
    int *ret = getConcatenation(nums,3,&numsize);
    for (int i=0;i<numsize;++i){
        printf("%d\n",ret[i]);
    }
    return 0;
    
}