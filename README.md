# Simple Interest Calculator (C)

[![C Language](https://img.shields.io/badge/Language-C99-00599C?logo=c&logoColor=white)]()
[![Zero Dependencies](https://img.shields.io/badge/Dependencies-Zero%20External-success.svg)]()
[![Platform](https://img.shields.io/badge/Platform-Cross--Platform%20CLI-lightgrey.svg)]()

> A lightweight command-line financial computation utility written in standard C that calculates simple interest and total accrued maturity amounts.

---

## Overview

**Simple Interest Calculator** is an introductory procedural utility demonstrating foundational C programming principles. It reads principal investment, annual percentage rate, and time duration from standard input, evaluates the classic financial simple interest equation, and outputs both the interest accrued and final balance.

---

## Mathematical Formulation

The interest ($I$) and total accrued maturity amount ($A$) are calculated as:

$$I = \frac{P \cdot R \cdot T}{100}$$

$$A = P + I$$

Where:
- **$P$ (Principal):** Initial sum invested or loaned.
- **$R$ (Rate):** Annual interest rate in percent.
- **$T$ (Time):** Term duration expressed in years.
- **$I$ (Interest):** Accrued simple interest over the full duration.
- **$A$ (Total Amount):** Gross payout amount ($P + I$).

---

## Compilation & Execution

The program relies exclusively on the C Standard Library (`<stdio.h>`) and compiles on any standard C compiler (`gcc`, `clang`, or MSVC).

### 1. Compile

```bash
gcc -Wall -Wextra -O2 simpleinterest.c -o simpleinterest
```

### 2. Run

```bash
./simpleinterest
```

---

## Sample Execution

```text
Enter the principal amount: 10000
Enter the rate of interest: 5
Enter the time in years: 2
simple interest: 1000.000000
Total amount after interest: 11000.000000 
```

---

## Engineering Scope & Foundations

- **I/O Formatting:** Direct terminal interaction via standard buffered input/output (`scanf`, `printf`).
- **Floating-Point Storage:** Employs single-precision IEEE 754 `float` values for fractional rates and financial figures.
- **Portability:** Zero platform-specific headers or external libraries, ensuring full portability across Linux, macOS, and Windows.
