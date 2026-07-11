#include <stdio.h>
int main() {
    //variable
    long long studentid;
    char name[100],major[100],faculty[100];
    float grade;
    //input
    printf("กรอกรหัสนักศึกษา : ");
    scanf("%lld",&studentid);
    printf("กรอกชื่อ-นามสกุล : ");
    scanf(" %[^\n]",name);
    printf("กรอกเกรดเฉลี่ย   : ");
    scanf("%f",&grade);
    printf("กรอกสาขาวิชา   : ");
    scanf(" %[^\n]",major);
    printf("กรอกคณะ      : ");
    scanf(" %[^\n]",faculty);

    //output
    printf("---------------------------------\n");
    printf(" --- ข้อมูลนักศึกษา ---\n");
    printf("รหัสนักศึกษา : %lld\n",studentid);
    printf("ชื่อ-นามสกุล : %s\n",name);
    printf("เกรดเฉลี่ย   : %.2f\n",grade);
    printf("สาขาวิชา   : %s\n",major);
    printf("คณะ      : %s\n",faculty); 
    
    return 0;


}