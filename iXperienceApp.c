#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T = 0;  /*number test cases*/        
    long N = 0; /*number of elements in array A*/        
    int A[N]; /*array of N integers*/
    int i;
    int j;
    long leftsum = 0;
    long rightsum = 0;
    
    scanf("%d", &T);
    
    /* goes through each test case*/
    for(j = 0; j < T; j++) {
    	scanf("%ld", &N);

    	/*reads in array from stdin*/
    	for(i = 0; i < N; i++) {
    		scanf("%d", &A[i]);
    		rightsum += A[i];

    	}
    
    
    	/*initialize left and right sums*/
    	leftsum = A[0];
    	rightsum = rightsum - A[0] - A[1];
    
    	/*checks if left and right sums are equal for each spot in array*/
    	for(i = 1; i < N-1; i++) {

    		if(leftsum == rightsum) {
    			printf("YES\n");
    			return 0;
    		}
    		leftsum += A[i];
    		rightsum -= A[i+1];
    	}
    printf("NO\n");
    }
    

    
    return 0;
}