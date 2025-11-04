#include <stdio.h>

int main()
{
    int n, i, j;
    int flag = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("So phan tu phai lon hon 0");
        return 1;
    }
    int arrayInt[n];
    for(i = 0; i < n; i++){
        printf("Nhap arrayInt[%d]: ", i);
        scanf("%d", &arrayInt[i]);
    }
    for(i = 0; i < n - 1; i++){ //Bubble sort algorithm and improved
    int swapped = 0;
    for(j = 0; j < n - i - 1; j++){
        if (arrayInt[j] > arrayInt[j + 1]) {
            int temp = arrayInt[j];
            arrayInt[j] = arrayInt[j + 1];
            arrayInt[j + 1] = temp;
            swapped = 1;
        }
    }
    if (!swapped){
        break;
    }
}
    printf("Mang sau khi da duoc sap xep la: ");
    for(i = 0; i < n; i++){
        printf(" %d ", arrayInt[i]);
    }

}