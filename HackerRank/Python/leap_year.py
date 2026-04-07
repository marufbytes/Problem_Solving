year=int(input())

isLeap = False

if (year%400==0) or (year%4==0 and year%100!=0):
    isLeap=True


print(isLeap)