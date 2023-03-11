//*习题6-1 分类统计字符个数
// todo统计给定字符串中 英文字母、空格或回车、数字字符和其他字符的个数
// letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数

#include <stdio.h>
#define MAXS 15

void StringCount(char s[]);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}
// ASCII a 97 z 122  A 65  Z 90
void StringCount(char s[])
{
    int i = 0;
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;
    //?很奇怪啊我总想用do...while嗐
    while(s[i]!='\0')
    {
        if (('a' <= s[i] && 'z' >= s[i]) || ('A' <= s[i] && 'Z' >= s[i]))
        {
            letter++;
        }
        else if (s[i] == ' ' || s[i] == '\n')
        {
            blank++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            digit++;
        }
        else
            other++;
        i++;
    } 
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}
void ReadString(char s[])
{
    char c;
    int i = 0;
    while ((c = getchar()) != '\n' && i < MAXS - 1)
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0'; // 在字符串末尾添加结束标记
}