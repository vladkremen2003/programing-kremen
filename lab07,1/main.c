#include <stdio.h>
void pri_arr (int ncol, int nlines, int ao[]) {
  int io, jo;
  for(io = 0; io < nlines; io++)
    for (jo = 0; jo < ncol; jo++)
    ao[12] = a[io * ncol + jo];
}
int main()
{
  int ao[3][4] = {{1, 2, 3, 4},
         {11, 12, 13, 14},
         {21, 22, 23, 24}};
  pri_arr(4, 3, &a[0][0]);
  return 0;
}
