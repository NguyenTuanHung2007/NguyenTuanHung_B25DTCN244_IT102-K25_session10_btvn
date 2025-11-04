#include <stdio.h>

int main()
{
    int n, i, j, temp_code, left, right, middle, temp_price, search_code;
    int flag = 0;
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("So phan luong san pham phai > 0");
        return 1;
    }
    int arrayCode[n];
    int arrayPrice[n];
    for(i = 0; i < n; i++){
        printf("Nhap ma san pham thu [%d]: ", i);
        scanf("%d", &arrayCode[i]);
        printf("Nhap gia ban thu [%d]: ", i);
        scanf("%d", &arrayPrice[i]);
    }
    printf("\nNhap ma san pham can tim: ");
    scanf("%d", &search_code);
    // Sap xep danh sach theo ma san pham
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if (arrayCode[j] > arrayCode[j + 1]) {
                // Exchange code
                temp_code = arrayCode[j];
                arrayCode[j] = arrayCode[j + 1];
                arrayCode[j + 1] = temp_code;
                // Exchange price
                temp_price = arrayPrice[j];
                arrayPrice[j] = arrayPrice[j + 1];
                arrayPrice[j + 1] = temp_price;
            }
        }
    }
    //Tim kiem sau khi mang da sap xep
    left = 0;
    right = n - 1;
    while (left <= right){
        middle = (left + right )/2;
        if(arrayCode[middle] == search_code){
            printf("Tim thay san pham co ma %d, gia ban la %d ", search_code, arrayPrice[middle]);
            flag = 1;
            break;
        }
        else if(arrayCode[middle] < search_code){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    if(!flag){
        printf("Khong tim thay san pham co ma %d\n", search_code);
    }

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if (arrayPrice[j] > arrayPrice[j + 1]) {
                // Exchange price
                temp_price = arrayPrice[j];
                arrayPrice[j] = arrayPrice[j + 1];
                arrayPrice[j + 1] = temp_price;
                // Exchange code
                temp_code = arrayCode[j];
                arrayCode[j] = arrayCode[j + 1];
                arrayCode[j + 1] = temp_code;
            }
        }
    }
    printf("\n Danh sach san pham sau khi sap xep theo tu tu tang dan la: \n");
    for(i = 0; i < n; i++){
        printf("Ma san pham: %d\t Gia: %d\n", arrayCode[i], arrayPrice[i]);
    }
}