#include <stdio.h>

int is_collinear(int x1, int y1, int x2, int y2, int x3, int y3) {
  int area = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
  if (area == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int x1, y1, x2, y2, x3, y3;

  printf("Enter the coordinates of the first point: ");
  scanf("%d %d", &x1, &y1);

  printf("Enter the coordinates of the second point: ");
  scanf("%d %d", &x2, &y2);

  printf("Enter the coordinates of the third point: ");
  scanf("%d %d", &x3, &y3);

  if (is_collinear(x1, y1, x2, y2, x3, y3)) {
    printf("The three points are collinear.\n");
  } else {
    printf("The three points are not collinear.\n");
  }

  return 0;
}
