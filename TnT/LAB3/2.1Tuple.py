import sys

Tuple1 = ("A", 1, "B", 2, "C", 3)
Tuple2 = ("Suniti", "Sunidhi","Pratyush")
Tuple3 = ((1, "M"), ( 2, "N"), (3, "O"), (4, "P"))

print("Size of Tuple1: " + str(sys.getsizeof(Tuple1)) + "bytes")
print("Size of Tuple2: " + str(sys.getsizeof(Tuple2)) + "bytes")
print("Size of Tuple3: " + str(sys.getsizeof(Tuple3)) + "bytes")