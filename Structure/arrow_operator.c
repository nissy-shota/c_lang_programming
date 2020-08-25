#include <stdio.h>
#include <string.h>

typedef struct {
int year;	/* 学年 */
int clas;	/* クラス */
int number;	/* 出席番号 */
char name[64];	/* 名前 */
double stature;	/* 身長 */
double weight;	/* 体重 */
} student;

int main(void)
{
	student data;
	student *pdata;
	
	pdata = &data;	/* 初期化 */
	pdata->year = 10;	/* ->記号によるアクセス */
	strcpy(pdata->name,"MARIO");	/* ->記号によるアクセス */
	
	return 0;
}