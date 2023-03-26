def sumdig(n): 
    sum = 0 
    temp = 0 
    while n > 0: 
        temp = n % 10 
        sum = sum + temp 
        n = int(n / 10) 
        return sum 
    n = int(input("Enter a number: ")) 
    print("The sum of digits of entered number is: ", sumdig(n))
