# 6.题目：斐波那契数列。

#  程序分析：斐波那契数列（Fibonacci sequence），又称黄金分割数列，指的是这样一个数列：0、1、1、2、3、5、8、13、21、34、……。

#  在数学上，费波那契数列是以递归的方法来定义：F0 = 0 (n=0) , F1 = 1 (n=1) , Fn = F[n-1]+ F[n-2](n=>2）

def fib(n):
    if n == 0:
        return [0]
    if n == 1:
        return [0,1]
    fibs = [0, 1, 1]
    for i in range(2, n):
        fibs.append(fibs[-1] + fibs[-2])
    return fibs

# 输出0~ 10 项斐波那契数列
print(fib(10))
