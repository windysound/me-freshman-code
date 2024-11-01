#include<stdio.h>
#include<stdlib.h>

#define BLOCK_SIZE 20

typedef struct {
	int *array;
	int size;
} Array;

Array array_create(int init_size);	//创建一个函数
void array_free(Array *a);			//释放
int array_size(const Array *a);		//大小
int* array_at(Array *a, int index);	//位置索引
void array_inflate(Array *a,int more_size);		//增加一个函数

Array array_create(int init_size) {
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*a.size);
	return a;
}

void array_free(Array *a) {
	free(a->array);
	
	a->array = NULL;	//保险起见
	a->size = 0;		//保险起见，防止被free两次
}

//封装，以函数保护a.size，以免内部变量被不经意变动
int array_size(const Array *a) {
	return a->size;		//a有多大
}

int* array_at(Array *a, int index) {
	if ( index >= a->size ) {
		array_inflate(a, (index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
	}
	return &(a->array[index]);
}

void array_inflate(Array *a, int more_size) {	//函数的增长
	//先申请一个所需要的总内存
	int *p = (int *)malloc(sizeof(int)*(a->size + more_size));
	//复制原来数组的内容
	int i;
	for( i=0; i<a->size; i++) {
		p[i] = a->array[i];
	}
	free(a->array);
	//重置指针的位置
	a->array = p;
	//更新a.size，即函数的大小
	a->size += more_size;
}

int main(int argc, char const *argv[])
{
	Array a = array_create(100);	//创建
	printf("%d\n",array_size(&a));	//查看大小
	*array_at(&a, 0) = 10;			//给指定的数组位赋值，将值写入数组
	printf("%d\n",*array_at(&a, 0));//查找索引指示的内容
	int cnt = 0;
	int number;
	while(number != -1) {
		scanf("%d", &number);
		if(number != -1)
			*array_at(&a, cnt++) =number;
	}
	array_free(&a);			//释放a里面的指针array
	
	return 0;
}
