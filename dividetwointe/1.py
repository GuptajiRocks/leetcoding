import math
def res(dividend, divisor):
    if (dividend < 0 or divisor < 0):
        if (dividend == -1 or divisor == -1):
            return math.floor(dividend/divisor)
        else:
            return math.floor(dividend/divisor) + 1
    elif (dividend < 0 and divisor < 0):
        return math.floor(dividend/divisor)
    else:
        return math.floor(dividend/divisor)


x = res(-2147483648,-1)
print(x)