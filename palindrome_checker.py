def palinedrome_checker(n):
    return n == int(''.join([i for i in str(n)][::-1]))
    
# This code works for integers only. You can make changes to accommodate strings or whatever data structures.
