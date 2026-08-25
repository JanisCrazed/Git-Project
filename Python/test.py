
# Fibonacci sequence
term = 0
x = 0
z = 1
print("Generating Fibonacci sequence:\n")
while True:
    ax = z
    az = x + z
    x = ax
    z = az
    term += 1
    print(f"Fibonacci term {term}: {z}\n")
    y = input("Press Enter to continue or type 'exit' to stop: ")
    if y == 'exit':
        break   