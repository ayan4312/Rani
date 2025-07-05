#include <stdio.h>
int linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        return i;
        return -1;
        int main(){
            int arr[]={10,25,30,45,50};
            int size = sizeof (arr)/sizeof (arr[0]);
            int key;
            printf("enter the number to search:");
            scanf("%d", &key);
            int result= linearsearch(arr,size,key);
            if(result !=-1)
            printf("element found at index %d\n",result);
            else
            printf("element  not found in the array\n" );
            return 0;
        }
    }
}
