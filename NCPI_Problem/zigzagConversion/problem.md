# Zigzag Conversion Problem

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this (use a fixed-width font for clarity):

```
P   A   H   N
A P L S I I G
Y   I   R
```

Then read line by line: `"PAHNAPLSIIGYIR"`

---

## Task

Write the code that will take a string and make this conversion given a number of rows:

```cpp
string convert(string s, int numRows);
```

---

## Examples

### Example 1
**Input:**
```
s = "PAYPALISHIRING", numRows = 3
```

**Output:**
```
"PAHNAPLSIIGYIR"
```

---

### Example 2
**Input:**
```
s = "PAYPALISHIRING", numRows = 4
```

**Output:**
```
"PINALSIGYAHRPI"
```

**Explanation:**
```
P     I    N
A   L S  I G
Y A   H R
P     I
```

---

### Example 3
**Input:**
```
s = "A", numRows = 1
```

**Output:**
```
"A"
```

---

## Constraints

- \(1 \leq s.length \leq 1000\)  
- `s` consists of English letters (lower-case and upper-case), `,` and `.`  
- \(1 \leq numRows \leq 1000\)

```

---