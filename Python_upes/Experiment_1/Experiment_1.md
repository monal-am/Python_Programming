## Student Details

**Student Name** : Monal Ambwani  
**SAP ID**       : 590022987 <br>
**Batch**        : B17 <br>
**Course**       : B.Tech CSE  
**Subject**      : Python Programming  
**Experiment**   : 1


# Experiment – 1 Python Installation and Starting with Python

## Aim

### To understand Python installation, basic syntax, variables, operators, and simple programs.
---
## Theory 

### Python is a high-level, interpreted programming language. It supports interactive and scripting modes and is widely used in software development, data science, and automation.
---

## Program Code

### 1.
### a) Print: Hello Everyone !!!

```python
print("Hello Everyone !!!")
```

### b) Print:

```
Hello
World
```

```python
print("Hello")
print("World")
```

### c) Print using newline character

```python
print("Hello\nWorld")
```

### d) Print with quotes and date

```python
print(" 'Monal's date of birth is 08\\10\\2007' ")
```

### 2. Declare a string variable `x` and print its value

```python
# Declaring a string variable
x = "Hello"

# Printing the value of x
print(x)
```

### 3. Take different data types and print values

```python
# Different data types
integer_value = 10
float_value = 25.5
string_value = "Python Programming"
boolean_value = True

# Printing values
print("Integer Value:", integer_value)
print("Float Value:", float_value)
print("String Value:", string_value)
print("Boolean Value:", boolean_value)
```
### 4. Print full name by adding first name and last name

```python
# Assigning first name and last name
a = "Monal"
b = "Ambwani"

# Printing full name
print("Full Name:", a + " " + b)
```

### 5. Print name with nickname in parenthesis

```python
# Declaring variables
first_name = "George"
last_name = "Washington"
nickname = "Woody"

# Printing in required format
print(first_name + " (" + nickname + ") " + last_name)
```

### 6. Print personal details in specified format

```python
# Declaring variables
name = "MONAL AMBWANI"
sap_id = "590022987"
dob = "08 Oct 2007"
address = "UPES\nBidholi Campus"
pincode = "248007"
programme = "BTech CSE"
semester = "2"

# Printing details
print("NAME :", name)
print("SAP ID :", sap_id)
print("DATE OF BIRTH :", dob)
print("ADDRESS :", address)
print("Pincode :", pincode)
print("Programme :", programme)
print("Semester :", semester)
```

### 7. Print Age and Its Data Type

```python
age = 21
print(age)
print(type(age))
```

### 8. Printing Different Data Types

```python
a = 10
b = 3.14
c = "Python"
d = True
print(a, b, c, d)
```

### 9. Arithmetic Operations

```python
x = 9
y = 7
print("Addition:", x + y)
print("Multiplication:", x * y)
print("Division:", x / y)
print("Subtraction:", x - y)
```

### 10. Hypotenuse Using Pythagoras Theorem

```python
import math
a = 3
b = 4
c = math.sqrt(a*a + b*b)
print("Hypotenuse:", c)
```

### 11. Simple Interest

```python
p = 1000
r = 5
t = 2
si = (p * r * t) / 100
print("Simple Interest:", si)
```

### 12. Area of Triangle

```python
import math
a = 3
b = 4
c = 5
s = (a + b + c) / 2
area = math.sqrt(s*(s-a)*(s-b)*(s-c))
print("Area:", area)
```

### 13. Convert Seconds

```python
seconds = 3665
hours = seconds // 3600
seconds %= 3600
minutes = seconds // 60
seconds %= 60
print(hours, "hours", minutes, "minutes", seconds, "seconds")
```

### 14. Swap Two Numbers

```python
a = 5
b = 10
a, b = b, a
print(a, b)
```

### 15. Sum of First n Natural Numbers

```python
n = 10
sum = n * (n + 1) // 2
print("Sum:", sum)
```

### 16. Bitwise Operators

```python
a = 1
b = 0
print("AND:", a & b)
print("OR:", a | b)
print("XOR:", a ^ b)
```

### 17. Shift Operators

```python
x = 8
print("Left Shift:", x << 1)
print("Right Shift:", x >> 1)
```

### 18. Membership Operator

```python
seq = (10, 20, 56, 78, 89)
num = 56
print(num in seq)
```
---

## Output

### Installation 

![alt text](<../Screenshots/Screenshot 2026-01-20 141527.png>) 


### 1.
### a)

![alt text](<../Screenshots/Screenshot 2026-01-20 123459.png>)

### b)

![alt text](image-1.png)

### c)

![alt text](<../Screenshots/Screenshot 2026-01-20 123317.png>)
### d)

![alt text](<../Screenshots/Screenshot 2026-01-20 123703.png>)

### 2.
![alt text](<../Screenshots/Screenshot 2026-01-20 133608.png>)

### 3. 
![alt text](<../Screenshots/Screenshot 2026-01-20 133726.png>)

### 4. 
![alt text](<../Screenshots/Screenshot 2026-01-20 133824.png>)

### 5.
![alt text](<../Screenshots/Screenshot 2026-01-20 133941.png>)

### 6. 
![alt text](<../Screenshots/Screenshot 2026-01-20 134055.png>)

### 7.
![alt text](image.png)

### 8.
![alt text](<../Screenshots/Screenshot 2026-01-27 123953.png>)

### 9.
![alt text](<../Screenshots/Screenshot 2026-01-27 124035.png>)

### 10.
![alt text](<../Screenshots/Screenshot 2026-01-27 124116.png>)

### 11.
![alt text](<../Screenshots/Screenshot 2026-01-27 124305.png>)

### 12.
![alt text](<../Screenshots/Screenshot 2026-01-27 124337.png>)

### 13.
![alt text](<../Screenshots/Screenshot 2026-01-27 124416.png>)

### 14.
![alt text](<../Screenshots/Screenshot 2026-01-27 124458.png>)

### 15.
![alt text](<../Screenshots/Screenshot 2026-01-27 124529.png>)

### 16.
![alt text](<../Screenshots/Screenshot 2026-01-27 124609.png>)

### 17.
![alt text](<../Screenshots/Screenshot 2026-01-27 124716.png>)

### 18.
![alt text](<../Screenshots/Screenshot 2026-01-27 125021.png>)

---

## Observations
```

1. Python programs are executed line by line using the Python interpreter.

2. Variables in Python can store different types of data without declaring their type.

3. The print() function is used to display text and variable values on the output screen.

4. String values can be concatenated using the + operator.

5. Escape characters like \n help in formatting the output.

6. Python syntax is simple and easy to understand.

7. Errors are displayed clearly, making debugging easier.
```
---

## Result
```
1.All the given Python programs were written correctly.

2. The programs were executed without any errors.

3. The output obtained was as expected.

4. The objectives of the experiment were successfully achieved.
```
---


