import math

print("TASK A")
print("Input float number: ")
num = float(input())
print(f"Result: {(num-int(num)):.3f}")

print()

print("TASK B")
print("Input float number: ")
num = float(input())
result = (num + 1) ** 2 + 3 * (num + 1)
print(f"Result: {result:.3f}")

print()

print("TASK C")
print("Input float number: ")
num = float(input())
result = 6 * num ** 2 + 3 * (num ** 3 + 1) ** 2
print(f"Result: {(result - int(result)):.5f}")