#include <stdio.h>
#include <time.h>
#include <windows.h>
int main()
{
    srand(time(0));    // 更新随机数种子
    COORD  pt;         // 光标位置
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);  // 输出句柄
    CONSOLE_SCREEN_BUFFER_INFO screenInfo;          // 窗口缓冲区信息结构体
    GetConsoleScreenBufferInfo(hOut, &screenInfo);  // 获取窗口信息
    pt.X = rand() % screenInfo.dwSize.X;            // 不能超过窗口缓冲区尺寸，
    pt.Y = rand() % screenInfo.dwSize.Y;            // 或者自己控制范围
    SetConsoleCursorPosition(hOut, pt);	            // 设置光标位置
    printf("%c", 'A'); // 这里换成cout也可以
    return 0;
}