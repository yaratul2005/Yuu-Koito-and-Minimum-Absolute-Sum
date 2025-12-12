

```md
# 🔹 Yuu Koito and Minimum Absolute Sum

This repository contains the description for the problem **“Yuu Koito and Minimum Absolute Sum”**, a constructive array problem from competitive programming.

---

## 📝 Problem Brief

You are given a partially filled array of nonnegative integers:

```

a1, a2, ..., an

```

where blank elements are denoted with `-1`. Your task is to fill in the blank elements with **nonnegative integers**, such that the **absolute value of the sum of the elements in its difference array** is minimized.

---

### Difference Array

Define:

```

b[i] = a[i+1] - a[i],   1 ≤ i ≤ n-1

```

The goal is to minimize:

```

|b1 + b2 + ... + b_{n-1}| = |a[n] - a[1]|

```

Additionally, among all arrays achieving this minimum, the output must be **lexicographically smallest**.

---

## 📥 Input Format

- First line: integer `t` — number of test cases `(1 ≤ t ≤ 10⁴)`  
- For each test case:
  - First line: integer `n` `(2 ≤ n ≤ 2·10⁵)` — length of the array  
  - Second line: `n` integers `a1 a2 ... an` `(-1 ≤ ai ≤ 10⁶)`  

**Constraint:** The sum of `n` over all test cases does not exceed `2·10⁵`.

---

## 📤 Output Format

For each test case:

1. First line: minimum possible value of `|b1 + b2 + ... + b_{n-1}|`  
2. Second line: the lexicographically smallest array `a1 a2 ... an` that achieves this minimum.

---

## 📌 Example

**Input**
```

6
4
2 -1 7 1
4
-1 2 4 -1
8
2 -1 1 5 11 12 1 -1
3
-1 -1 -1
3
2 5 4
2
-1 5

```

**Output**
```

1
2 0 7 1
0
0 2 4 0
0
2 0 1 5 11 12 1 2
0
0 0 0
2
2 5 4
0
5 5

```

---

## 🧠 Problem Summary

- Fill in unknown elements `-1` with nonnegative integers.  
- Minimize the absolute value of the sum of the difference array (`|a[n] - a[1]|`).  
- Among all possible arrays achieving the minimum, return the **lexicographically smallest one**.
```

