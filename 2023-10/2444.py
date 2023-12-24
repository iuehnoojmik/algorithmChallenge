n = int(input());

# for i in range(1, n+1):
#     for k in range(0, n-i):
#         print(" ", end='');
#     for j in range(0, 2*i-1):
#         print("*", end='');
#     print("");
    
# for i in range(1, n):
#     for k in range(0, i):
#         print(" ", end='');
#     for j in range(0, 2*n-(2*i+1)):
#         print("*", end='');
#     print("");

for i in range(1, n):
    print((" " * (n-i)) + ("*" * (i * 2 - 1)))
    
print("*" * (2*n-1))

for i in range(n-1, 0, -1):
    print((" " * (n-i)) + ("*" * (i * 2 - 1)))