#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int search(int* nums, int numsSize, int target)
{
    int top=0, bottom=numsSize-1,mid;
    int ans=-1;
 
 while(top<=bottom)
    {
     mid=(top+bottom)/2;
      if(nums[mid]==target)
      {
        return mid;
      }
    
      else if(nums[mid]<target)
      {
        top=mid+1;
      }
      else
      {
        bottom=mid-1;
      }
         
    }
    return ans;
}

int main()
{
    int n;
    int key;

    printf("enter the array size=");
    scanf("%d",&n);
    int nums[n];

    printf("\nEnter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("\nEnter the search element=");
        scanf("%d",&key);

    printf("%d",search(nums,n,key));

}