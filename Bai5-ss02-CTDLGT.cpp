#include<stdio.h>

int main(){
	int n, k, index = -1;

    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    int arr[n];

    printf("Nhap %d phan tu cua mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Nhap phan tu can xóa
    printf("Nhap phan tu can xóa (k): ");
    scanf("%d", &k);

    // Tìm chi so cua phan tu can xóa
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        // Neu không tìm thay phan tu k
        printf("Không có ph?n t? %d trong m?ng.\n", k);
    } else {
        // Xóa phan tu tai vi trí index
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Giam kích thuoc mang

        // In mang sau khi xóa
        printf("Mang sau khi xóa phan tu %d:\n", k);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

	return 0;
}

