#include<stdio.h>
int main(){
    double x1,x2,y1,y2;
    double distance;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%.4lf",distance);


return 0;
}
