# Python Summory

## introduction
### variables 
+ text - just simple string with text
+ variable - some variable 
+ arr - array
+ num - number
+ string - some string 

## formating print()
### text with variables
```python
  print(f"text {variable}") # print text with variable
  print(f"{variable:<10}{variable:<2}") # set the width of data (variable) (if len of data less that 10 it will set the width with ' '
)
```
### colourful text
  + first that we need is the object(class) with colors 
  + we can set :
    + text color ```(\033[30m - \033[37m)```
    + bacground color ```(\033[40m - \033[47m)```
    + style of the text (underlined , bold ...)
  + SOURSE: https://habr.com/ru/post/119436/
  ```python
  class colors:
    RED = '\033[31m' # red
    GREEN = '\033[32m' # green
    ORANGE = '\033[32m'#'\033[33m' # orange
    BLUE = '\033[35m' # blue
    UNDERLINED = '\033[4m'
    BOLD = '\033[1m'
    END = '\033[0m' # simple text (stop colourful text)
  
  print(f"{colors.SOMECOLOR}text of {variable} {colors.END}")
  ```
## librarie and modules
+ OS
```python
import os

path = os.getcwd()
fileName = __file__
path, dirs, files = next(os.walk(path))

```
+ [clear console](https://www.delftstack.com/howto/python/python-clear-console/)

+ TIME

```python
import time

time.sleep(0.1)
```

+ SYS
```python

EndText = ("Some text. It seems that programm printing it!")
for char in EndText:
  time.sleep(0.06)
  sys.stdout.write(char)
  sys.stdout.flush()


```

+ animation
```python
arr = [
  "           ",
  "|         |",
  "||       ||",
  "|||     |||",
  "||||   ||||",
  "||||| |||||",
  "||||h W||||",
  "|||th Wi|||",
  "||ath Wis||",
  "|eath Wish|",
  
]

replit.clear()
for el in arr:
  print(el)
  time.sleep(0.13)
  replit.clear()
time.sleep(0.5)

```

### tables 
  + SOURSE:https://towardsdatascience.com/how-to-easily-create-tables-in-python-2eaea447d8fd
  + or you can do this :
  ```python
    print("WORDS     MISTAKES  CORRECT")
    print(f"{variable:<10}{variable:<10}{variable:<10}")
  ```
### files
+ operator `with open (path,option) as file_name`:
  + a - add information NOT TO REWRITE FILE
  + r - read file 
  + w - rewrite file 
  + b - for bates files
  #### Methods
  + file_name.readlines() - read all lines (list)
  + file_name.read(1024) - read part of file
```python
def readData(filePath) :
    with open(filePath, 'r') as file: 
        l =  file.readlines()
    for line in l :
        print(line)
    return l
    
def writeData (filePath,txt):
    with open(filePath, 'a') as file: 
      file.write(txt)

file = "file.txt"

txt = '''third line
forth line'''

readData(file)
writeData(file,txt)
readData(file)
```

## Tasks
+ ```python
  #https://codeforces.com/problemset/problem/1352/A
    T = int(input())
  while T > 0 :
    T -= 1
    s = input()
    res = 0
    digits = []
    
    for i in range(len(s)):
      if s[i] != "0" :
        res += 1
        digits.append(s[i] + (len(s)-i-1)*"0")
    print(res)
    print(*digits)
  ```   
