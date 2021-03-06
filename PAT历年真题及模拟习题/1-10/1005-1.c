#include <stdio.h>
#include <stdlib.h>
struct Stu{//定义结构变量Stu 
  int xuhao;
  int de;
  int cai;
};
int cmp(const void*a, const void*b)//定义cmp函数 
{
  struct Stu *sa = (struct Stu *)a;//a为结构变量，sa为指针 
  struct Stu *sb = (struct Stu *)b;
  int ac = sa->de + sa->cai;
  int bc = sb->de + sb->cai;
  if(ac != bc)
    return bc - ac;//按总分大小 
  else if(sa->de != sb->de)
    return sb->de - sa->de;//按德分 
  else
    return sa->xuhao - sb->xuhao;//按序号 
}
void sort_print(struct Stu *a, int size)//输出结构数组 
{
  struct Stu *p = a;//结构指针P指向结构变量a 
  qsort(p, size, sizeof(p[0]), cmp);//在a中排列
   
  for(p = a; p < a + size; p++)
    printf("%d %d %d\n", p->xuhao, p->de, p->cai);
}
int main()
{
  int N, L, H;
  scanf("%d %d %d", &N, &L, &H); 
  struct Stu A[N], B[N], C[N], D[N];
  int a = 0, b = 0, c = 0, d = 0;
  int i;
  int xuhao, de, cai;
  for(i = 0; i < N; i++)
  {
    scanf("%d %d %d", &xuhao, &de, &cai);
    if(de >= H && cai >= H)
      A[a].xuhao = xuhao, A[a].de = de, A[a].cai = cai, a++;
    else if(de >= H && cai >= L)
      B[b].xuhao = xuhao, B[b].de = de, B[b].cai = cai, b++;
    else if(cai >=L && de >= cai)
      C[c].xuhao = xuhao, C[c].de = de, C[c].cai = cai, c++;
    else if(cai >=L && de >= L)
      D[d].xuhao = xuhao, D[d].de = de, D[d].cai = cai, d++;
  }
  printf("%d\n", a + b + d + c);
  sort_print(A, a);
  sort_print(B, b);
  sort_print(C, c);
  sort_print(D, d);
  return 0;
}
