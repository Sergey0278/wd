#include < iostream >
using namespace std;

int main()
{
    int i, n;
    float m;

    for (n = 1; n <= 8; n++)
    {
        for (i = 1; i <= 8; i++)
        {
            m = i % 2;
            if (m == 0)
                printf("x ");
            else printf("* ");
        }
        printf("\n");
    }
}