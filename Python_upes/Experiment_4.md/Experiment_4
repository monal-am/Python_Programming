## Student Details

**Student Name** : Monal Ambwani  
**SAP ID**       : 590022987 <br>
**Batch**        : B17 <br>
**Course**       : B.Tech CSE  
**Subject**      : Python Programming  
**Semester**     : II


# Experiment – 4 Strings and Sets

## 1. Count Capital Letters  

### Aim  
To write a Python program to count the number of capital letters in a given string.

### Theory  
A string is a sequence of characters. We traverse each character using a loop and use the built-in `isupper()` function to check whether a character is uppercase. If true, we increment the counter.

### Program
```python
string = input("Enter a string: ")
count = 0

for ch in string:
    if ch.isupper():
        count += 1

print("Number of capital letters:", count)
```

### Output  
![alt text](1.png)

---

## 2. Count Total Vowels  

### Aim  
To write a Python program to count the total number of vowels in a string.

### Theory  
Vowels are a, e, i, o, u (both lowercase and uppercase). Traverse each character and check if it belongs to the vowel set. If yes, increase the count.

### Program
```python
string = input("Enter a string: ")
vowels = "aeiouAEIOU"
count = 0

for ch in string:
    if ch in vowels:
        count += 1

print("Total vowels:", count)
```

### Output  
![alt text](2.png)

---

## 3. Print Words in Separate Lines  

### Aim  
To print each word of a sentence on a separate line.

### Theory  
The `split()` function separates a sentence into words based on spaces. We loop through the list and print each word individually.

### Program
```python
sentence = input("Enter a sentence: ")
words = sentence.split()

for word in words:
    print(word)
```

### Output  
![alt text](3.png)
---

## 4. Count Substring Occurrence  

### Aim  
To count the number of times a substring appears in a given string.

### Theory  
Traverse the string from left to right and compare slices of the same length as the substring. Increase the count whenever a match is found.

### Program
```python
string = input("Enter main string: ")
substring = input("Enter substring: ")

count = 0

for i in range(len(string) - len(substring) + 1):
    if string[i:i+len(substring)] == substring:
        count += 1

print("Number of occurrences:", count)
```

### Output  
![alt text](4.png)

---

## 5. Count Alphabet Frequency (Case Insensitive)  

### Aim  
To count the frequency of each alphabet in a string without considering case.

### Theory  
Convert the string to uppercase and use a dictionary to store the frequency of each alphabet. The `get()` method helps update the count easily.

### Program
```python
string = input("Enter string: ").upper()
freq = {}

for ch in string:
    if ch.isalpha():
        freq[ch] = freq.get(ch, 0) + 1

for key in sorted(freq):
    print(freq[key], key)
```

### Output  
![alt text](5.png)

---

## 6. Unique Words using Set  

### Aim  
To find the number of unique words in a sentence.

### Theory  
A set stores only unique values. Convert the list of words into a set and count its length.

### Program
```python
sentence = input("Enter sentence: ")
words = sentence.split()

unique_words = set(words)

print("Number of unique words:", len(unique_words))
```

### Output  
![alt text](6.png)

---


