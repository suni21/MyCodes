def Remove(initial_set):
    while initial_set:
        initial_set.pop()
        print(initial_set)
  
# Driver Code
initial_set = set([ 10, 90, 15,19])
Remove(initial_set)