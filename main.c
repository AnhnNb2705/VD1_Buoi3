
#include <stdio.h>

int main()
{ 
    int a,b;
    float fx ;
    float fy ;
    float fz ;
    printf("Tong so buoi cua mot mon hoc:\n");
    scanf("%d",&a);
    printf("Nhap vao so buoi ban nghi hoc:\n");
    scanf("%d",&b);
    if (b<=(a*25/100))
        {
            printf("ban da du dieu kien thi\n");
        }
    else
        {
            printf("ban khong du dieu kien thi: Hoc lai\n");
            return 0;
        }
            printf("Nhap vao diem :\n");
            scanf("%f\n%f\n%f",&fx,&fy,&fz);
            if(fx<=8)
            printf("Ban phai hoc lai ly thuyet\n");
            else
            printf("Ban da qua thuc ly thuyet\n");
            if(fy<=6)
            printf("Ban phai hoc lai thuc hanh\n");
             else
            printf("Ban da qua thuc thuc hanh\n");
            if(fz<=4)
            printf("Ban phai hoc lai bai tap tong\n");
            else
            printf("Ban da qua thuc bai tap tong\n");
            if(fx>=8 && fy>=6 && fz>=4)
            printf("ban da pass");
    return 1;
}

