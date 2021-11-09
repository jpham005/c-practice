#include <stdio.h>

typedef struct info {
    int nums[11];
    int operator[4];
    int n;
    int toCalc[21];
    int result[1];
    int maxMin[2];
} info;

int calculate(info *infos) {
    int *cp = infos->toCalc;
    int i;

    for (i = 1; i < infos->n * 2 - 1; i += 2) {
        if (cp[i] == 0)
            cp[i + 1] = cp[i - 1] + cp[i + 1];
        else if (cp[i] == 1)
            cp[i + 1] = cp[i - 1] - cp[i + 1];
        else if (cp[i] == 2)
            cp[i + 1] = cp[i - 1] * cp[i + 1];
        else{
            if (cp[i + 1] == 0)
                return 0;
            cp[i + 1] = cp[i - 1] / cp[i + 1];
        }
    }
    infos->result[0] = cp[i + 1];

    return 1;
}

void findMinMax(info *infos, int index) {
    int temp;

    if (index >= 2 * infos->n - 1) {
        if (calculate(infos)) {
            if (infos->maxMin[0] < infos->result[0])
                infos->maxMin[0] = infos->result[0];
            if (infos->maxMin[1] > infos->result[0])
                infos->maxMin[1] = infos->result[0];
        }
        return;
    }

    for (int i = 0; i < infos->n; i++) {
        for (int j = 0; j < 4; j++) {
            if (infos->operator[j] && infos->nums[i]) {
                infos->operator[j]--;
                temp = infos->nums[i];
                infos->nums[i] = 0;
                infos->toCalc[index] = j;
                infos->toCalc[index + 1] = temp;
                findMinMax(infos, index + 2);
                infos->operator[j]++;
                infos->nums[i] = temp;
            }
        }
    }
}

void selectFirst(info *infos) {
    for (int i = 0; i < infos->n; i++) {
        infos->toCalc[0] = infos->nums[i];
        infos->nums[i] = 0;
        findMinMax(infos, 1);
        infos->nums[i] = infos->toCalc[0];
    }
}

int main() {
    info infos;
    scanf("%d", &infos.n);

    for (int i = 0; i < infos.n; i++) {
        scanf("%d", &infos.nums[i]);
    }

    for (int i = 0; i < 4; i++) {
        scanf("%d", &infos.operator[i]);
    }

    infos.maxMin[0] = -1000000001;
    infos.maxMin[1] = 1000000001;

    selectFirst(&infos);

    printf("%d\n%d", infos.maxMin[0], infos.maxMin[1]);
}
