#include <stdio.h>

int main()
{
    int n, i, j, x, left, right, middle;
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
    // Sap xep mang
    for(i = 0; i < n - 1; i++){
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
    //Tim kiem sau khi mang da sap xep
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);
    left = 0;
    right = n - 1;
    while (left <= right){
        middle = (left + right )/2;
        if(arrayInt[middle] == x){
            printf("Tim thay %d tai vi tri index %d ", x, middle);
            flag = 1;
            break;
        }
        else if(arrayInt[middle] < x){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    if(!flag){
        printf("Khong tim thay %d trong mang \n", x);
    }

}