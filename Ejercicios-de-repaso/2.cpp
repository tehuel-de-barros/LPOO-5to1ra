#include <stdio.h>

int main() { 
    int n = 3; 
    int arr[n];
    int sum 0;
    for(int i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &arr[i-1] );
    }
    for(int i = 0; i < n; i++) sum += arr[i];
    
    int prom = 0; 
    prom = sum / n; 
    printf("%d\n", prom);

    return 0;
}