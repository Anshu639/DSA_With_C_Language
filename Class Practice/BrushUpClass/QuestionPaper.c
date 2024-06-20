// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define NUM_QUESTIONS 10
// #define NUM_STUDENTS 10

// int main()
// {
//     int questionPaper[] = {9, 7, 3, 1, 10, 2, 5, 4, 8, 6};
//     int rollNo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int shifts[NUM_STUDENTS] = {0};
//     int i, j;

//     for (i = 0; i < NUM_QUESTIONS; i++)
//     {
//         questionPaper[i] = i + 1;
//     }

//     srand(time(NULL));
//     for (i = NUM_QUESTIONS - 1; i > 0; i--)
//     {
//         j = rand() % (i + 1);
//         int temp = questionPaper[i];
//         questionPaper[i] = questionPaper[j];
//         questionPaper[j] = temp;
//     }

//     for (i = 0; i < NUM_STUDENTS; i++)
//     {
//         for (j = 0; j < NUM_QUESTIONS; j++)
//         {
//             if (questionPaper[j] == rollNo[i])
//             {
//                 shifts[i] = j + 1;
//                 break;
//             }
//         }
//     }

//     for (i = 0; i < NUM_STUDENTS; i++)
//     {
//         printf("Student %d found their question paper in position %d after %d shifts\n", rollNo[i], i + 1, shifts[i]);
//     }

//     return 0;
// }

class MethodO
{
    int id;
    String name;
    double marks;

public
    void Method(String a, int b)
    {
        name = a;
        id = b;
        System.out.println(name + " " + id);
    }
public
    void Method(int a, String b, double c)
    {
        id = a;
        name = b;
        marks = c;
        System.out.println(id + " " + name + " " + marks);
    }

public
    static void main(String args[])
    {
        MethodO c1 = new MethodO();
        MethodO c2 = new MethodO();
        c1.Method("rishabh", 10);
        c2.Method(1, "rohit", 20.0);
    }
}
