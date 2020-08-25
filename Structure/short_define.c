//  tag define

struct student_tag {
	int year;	/* 学年 */
	int clas;	/* クラス */
	int number;	/* 出席番号 */
	char name[64];	/* 名前 */
	double stature;	/* 身長 */
	double weight;	/* 体重 */
};

typedef struct student_tag student;

// short
typedef struct student_tag {
	int year;
	int clas;
	int number;
	char name[64];
	double stature;
	double weight;
} student;

//  most short defines
typedef struct {
	int year;	/* 学年 */
	int clas;	/* クラス */
	int number;	/* 出席番号 */
	char name[64];	/* 名前 */
	double stature;	/* 身長 */
	double weight;	/* 体重 */
} student;