#题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

def output(s,length):
    if length==0:
        return
    print(s[length-1])
    output(s,length-1)
s=input('Please input a string:')
length=len(s)
output(s,length)
