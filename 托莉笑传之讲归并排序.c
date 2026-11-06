#include <stdio.h>

// 【拉链合并函数】：把两个已经各自排好序的小分队，拉链式合并成一个大队伍
void lalian_hebing(int *arr, int start, int middle, int end, int *hezi) {
    // 两个分队的起跑线
    int zuo_tou = start;       // 左小队当前看哪个人（从最左端开始）
    int you_tou = middle + 1;  // 右小队当前看哪个人（从中点右边第一个人开始）
    int hezi_weizhi = start;   // 临时大盒子里，下一个被录取的人放哪个格子

    // 第一回合：两队排头兵现场单挑打擂台！谁矮（值小），谁先坐进盒子里
    while (zuo_tou <= middle && you_tou <= end) {
        if (*(arr + zuo_tou) <= *(arr + you_tou)) {
            // 左边这哥们更小（或一样大），左边录取！
            *(hezi + hezi_weizhi) = *(arr + zuo_tou);
            zuo_tou++;        // 左边队伍往前移一个人
            hezi_weizhi++;    // 盒子空位往后走一格
        } else {
            // 右边这哥们更小，右边录取！
            *(hezi + hezi_weizhi) = *(arr + you_tou);
            you_tou++;        // 右边队伍往前移一个人
            hezi_weizhi++;    // 盒子空位往后走一格
        }
    }

    // 第二回合：收尾清仓！有一方队伍肯定先挑空了，剩下没挑完的队伍肯定本身就有序，直接整队倒进盒子
    while (zuo_tou <= middle) {
        *(hezi + hezi_weizhi) = *(arr + zuo_tou);
        zuo_tou++;
        hezi_weizhi++;
    }
    while (you_tou <= end) {
        *(hezi + hezi_weizhi) = *(arr + you_tou);
        you_tou++;
        hezi_weizhi++;
    }

    // 第三回合：抄回老家！盒子只是临时中转站，必须把排好序的人原原本本搬回原来的原数组 arr 对应的区间里
    for (int p = start; p <= end; p++) {
        *(arr + p) = *(hezi + p);
    }
}

// 【分治递归主函数】：把队伍切碎，切到单个，再一路拉链合上去
void guibing_paixu(int *arr, int start, int end, int *hezi) {
    // 递归终点底线：如果起点已经追上或超过终点了（比如队伍只有 1 个人），天然有序，直接收工不用排！
    if (start >= end) {
        return;
    }

    // 从中间切一刀，分成左右两半
    int middle = start + (end - start) / 2;

    // 1. 让左半截自己去内部排好序（相信分治魔法！）
    guibing_paixu(arr, start, middle, hezi);

    // 2. 让右半截自己去内部排好序
    guibing_paixu(arr, middle + 1, end, hezi);

    // 3. 此时左右两截都各自有序了，啪的一下拉上拉链，大功告成！
    lalian_hebing(arr, start, middle, end, hezi);
}

int main() {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(a) / sizeof(a[0]);

    // 归并排序需要一个一模一样大的临时大盒子，用来拉链倒腾
    int hezi[100];

    // 从第 0 号房间排到第 n - 1 号房间
    guibing_paixu(a, 0, n - 1, hezi);

    // 打印看看结果
    printf("排好序的队伍：");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");

    return 0;
}









/*      #include <stdlib.h>  里面 有直接的比较函数     qsort  */
