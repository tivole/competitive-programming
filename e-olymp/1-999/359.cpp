// (c) Tivole

// 359

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double quad_eq(double a, double b, double c, double *x1, double *x2) {
    double D;
    D = b*b - 4*a*c;

    if (D < 0) return -1;
    else if (D == 0) {
        *x1 = -b / (2*a);
        *x2 = *x1;
        return 0;
    } else {
        *x1 = (-b + sqrt(D)) / (2*a);
        *x2 = (-b - sqrt(D)) / (2*a);
        return 1;
    }
}

int main() {

    int R, x_okr, y_okr, x_1, y_1, x_2, y_2, res;
    double y, x, k, b, _a, _b, _c, new_x1, new_y1, new_x2, new_y2, ans, s;

    scanf("%d%d%d%d%d%d%d", &R, &x_okr, &y_okr, &x_1, &y_1, &x_2, &y_2);

    if ((y_2 - y_1) == 0 && (x_2 - x_1) != 0) {
        // 1 slucay
        y = (-1)*((double) (x_1*(y_2 - y_1) - y_1*(x_2 - x_1))) / ((double) (x_2 - x_1));
        s = R*R - (y - y_okr)*(y - y_okr);

        if (s < 0) {
            printf("-1\n");
            return 0;
        } else if (s == 0) {
            printf("0\n");
            return 0;
        } else {
            ans = 2*sqrt(s);
            printf("%.5lf\n", ans);
            return 0;
        }

    } else if ((x_2 - x_1) == 0 && (y_2 - y_1) != 0) {
        // 2 slucay
        x = ((double) (x_1*(y_2 - y_1) - y_1*(x_2 - x_1))) / ((double) (y_2 - y_1));
        
        s = R*R - (x - x_okr)*(x - x_okr);

        if (s < 0) {
            printf("-1\n");
            return 0;
        } else if (s == 0) {
            printf("0\n");
            return 0;
        } else {
            ans = 2*sqrt(s);
            printf("%.5lf\n", ans);
            return 0;
        }

    } else {
        // 3 slucay
        k = ((double) (x_2 - x_1)) / ((double) (y_2 - y_1));
        b = (double) (-1)*y_1 * (x_2 - x_1) / ((double) (y_2 - y_1)) + x_1;

        _a = (k*k + 1);
        _b = -2*k*(x_okr - b) - 2*y_okr;
        _c = (x_okr - b)*(x_okr - b) + y_okr*y_okr - R*R;

        res = quad_eq(_a, _b, _c, &new_y1, &new_y2);

        if (res == 0) {
            printf("0\n");
        } else if(res == -1) {
            printf("-1\n");
        } else {
            new_x1 = (new_y1 - y_1)*(x_2 - x_1) / (y_2 - y_1) + x_1;
            new_x2 = (new_y2 - y_1)*(x_2 - x_1) / (y_2 - y_1) + x_1;
            ans = sqrt((new_y1 - new_y2)*(new_y1 - new_y2) + (new_x1 - new_x2)*(new_x1 - new_x2));
            printf("%.5lf\n", ans);
        }

    }

    return 0;
}