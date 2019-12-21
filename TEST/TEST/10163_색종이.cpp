#include <iostream>

int main()
{
    int N;
    int arr[101][101] = { 0, };
    int result[101] = { 0, };
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int tx, ty, txx, tyy;
        scanf("%d %d %d %d", &tx, &ty, &txx, &tyy);
        for (int y = ty; y < ty+tyy; y++) {
            for (int x = tx; x < tx+txx; x++) {
                arr[y][x] = i + 1;
            }
        }
    }
    for (int y = 0; y < 101; y++) {
        for (int x = 0; x < 101; x++) {
            result[arr[y][x]]++;
         }
    }

    for (int i = 1; i <= N; i++) {
        printf("%d\n", result[i]);
    }
}