# include <stdio.h>



int main(){
    int arr[10] ; 
    int n = 10 ; 

    printf(" enter your array ");
    for(int i = 0 ; i < n ; i ++  ){
        scanf("%d" , &arr[i]);
    }
    printf("enter the key that you want to find  ");

    int key ; 
    scanf("%d", &key );
    int found = 0 ; 

    for( int i = 0 ; i < n ; i ++ ){
        if( arr[i] == key ){
            printf("your key is found at %d index and %d position" , i , i + 1  );
            found = 1 ; 
            break ; 
        }
        
    }

    if(found != 1 )printf("your key is not present in the array ");

    return 0 ; 

    


}