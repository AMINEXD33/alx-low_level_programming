import subprocess

file_names = [
    "0-isupper.o",
    "0-memset.o",
    "0-strcat.o",
    "1-isdigit.o",
    "1-memcpy.o",
    "1-strncat.o",
    "100-atoi.o",
    "2-strchr.o",
    "2-strlen.o",
    "2-strncpy.o",
    "3-islower.o",
    "3-puts.o",
    "3-strcmp.o",
    "3-strspn.o",
    "4-isalpha.o",
    "4-strpbrk.o",
    "5-strstr.o",
    "6-abs.o",
    "9-strcpy.o",
    "_putchar.o",
]
full_command = ["ar", "rc","libmy.a"]
for x in file_names:
    full_command.append(x)


result = subprocess.run(full_command, capture_output=True, text=True)
if result.returncode == 0:
    print(f"created successfully")
    print("Output:")
    print(result.stdout)
else:
    print(f"failed")
    print("Error:")
    print(result.stderr)

