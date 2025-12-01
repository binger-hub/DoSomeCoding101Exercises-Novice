
# 循环语句

## 一.while 循环

理解成循环版的if语句。if是一次判断，如果条件成立就循环后面的语句；while是每次判断，如果成立，则执行循环体重的语句，否则停止。

```c++
#include <ioostream>
using namespace std;
int main()
{
    int i = 0;
    while(i<10)
    {
        cout<<i<<endl;
        i++;
    }
    return 0;
}
// 练习求1～100中所有数的立方和
#include <iostream>
using namespace std;
int main()
{
    int i =1;
    int sum =0;
    while(i<101)
    {
        sum+=i*i*i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
// 练习求斐波那契数列的第n项
#include <iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    int p=1;
    int t=0;
    while (i-1)
    {
        int num=p+t;
        i--;
        t=p;
        p=num;
    }
    cout<<p;
    return 0;
}
// 死循环：循环永久执行，无法结束。我们要避免写出死循环
#include <iostream>
using namespace std;
int main()
{
    int x=1;
    while(x==1) puts("!");
    return 0;
}
```

## 二、do-while循环

do while 循环不常用。
do while 语句与while语句非常相似。唯一的区别是，do while 在循环体后检查限制条件，不管条件的值如何，我们都至少执行一次循环。

```c++
#include <iostream>
using namespace std;
int main()
{
    int x=1;
    while(x<1)
    {
        cout<<"x!"<<endl;
        x++;
    }
    int y = 1;
    do
    {
        cout<<"y!"<<endl;
    }while(y<1);
    return 0;
}
```

## 三、for循环

基本思想：把控制循环次数的变量从循环体中剥离出来

```c++

for(init-statement;condition;expression)
{
    statement
}
// init-statement可以是声明语句、表达式、空语句，一般用来初始化循环变量；
// condition是条件表达式，和while中的条件表达式作用一样；可以为空，空句表示true；
// expression 一半负责修改循环变量，可以为空
#include <iostream>
using namespace std;
int main()
{
    for(int i = 0;i<10;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}
// 练习1～100中所有数的立方和
#include <iostream>
using naespace std;
int main()
{
    int i=1;
    int sum =0;
    fot(;i<=100;i++)
    {
        sum+=i;
    }
    cout<<i<<endl;
    return 0;
}
// 求斐波那契数列的第n项
#include <iostream>
using namespace std;
int main()
{
    int f =0;
    int b =1;
    int n;
    cin>>n;
    for(;n-1;n--)
    {
        int num=f+b;
        f=b;
        b=num;
    }
    cout<<b;
    return 0;
}
//  求 1 * 10 + 2 * 8 + 3 * 7 + 4 * 6：
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    int j =10;
    int sum=0;
    for(;i<j;i++,j--)
    {
        sum+=i*j;
    }
    cout<<sum<<end;
    return 0;
}

```

## 跳转语句

1.break
可以提前从循环中退出，一般与if语句搭配

```c++
// 判断一个大于1的数是否是质数
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool is_prime=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            is_prime=false;
            break;
        }    
    }
    if(is_prime) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}

```

2.continue

可以直接跳到当前循环体的结尾。作用于if语句类似

```c++
#include <iostream>
using namespace std;
int main()
{
    int sum =0;
    for(int i =1;i<=100;i++)
    {
        if(i%2==1) continue;
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
```

## 五.多层循环

```c++
#include <iostream>
using namespace std;
int main()
{
    for(int i =0,k=1;i<10;i++)
    {
        for(int j=0;j<10;j++,k++)
        {
            cout<<k<<' ';
        }
        cout<<endl;
    }
    return 0;
}
// 练习打印1～100中所有的质数
#include <iostream>
using namespace std;
int main()
{
    for(int i=2;i<101;i++)
    {
        bool is_prime=true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0) 
            is_prime=false;
            break;
        }
        if(is_prime) cout<<i<<' ';
    }
    return 0;
}
// 练习输入一个n,打印n阶棱形。n是奇数
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cx=n/2,cy=n/2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(abs(i-x=cx)+abs(j-cy)<=n/2) cout<<"*";
            else cout<<' '
        }
        cout<<endl;
    }   
    return 0;
}
```

