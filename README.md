# Rectangular Parallelopiped Calculator

A simple **C++ console application** that calculates the **Surface Area** and **Volume** of a Rectangular Parallelopiped (cuboid) based on user input.

---

## 📐 Formulas Used

| Property | Formula |
|----------|---------|
| **Surface Area** | `2 × ((l×w) + (w×h) + (h×l))` |
| **Volume** | `l × w × h` |

Where:
- `l` = Length
- `w` = Width
- `h` = Height

---

## 📁 Project Structure

```
rectangular-parallelopiped/
├── src/
│   └── main.cpp        # Main source code
├── docs/
│   └── explanation.md  # Formula explanation
├── .gitignore
├── README.md
└── LICENSE
```

---

## 🚀 How to Run

### Prerequisites
- A C++ compiler (g++ / clang++)

### Compile & Run

**Linux / macOS:**
```bash
g++ src/main.cpp -o calculator
./calculator
```

**Windows (MinGW):**
```bash
g++ src\main.cpp -o calculator.exe
calculator.exe
```

---

## 💡 Sample Output

```
Rectangular Parallelopiped's Area and Volume Calculator

Enter the length of Rectangular Parallelopiped: 5
Enter the width of Rectangular Parallelopiped: 4
Enter the height of Rectangular Parallelopiped: 3

The length, width, height of Rectangular Parallelopiped is 5, 4, 3

l = 5
w = 4
h = 3

Area = 2 * ( (length * width) + (width * height) + (height * length) )
     = 2 × ( (5 × 4) + (4 × 3) + (3 × 5) )
     = 94

Volume = (length × width × height)
       = ( 5 × 4 × 3 )
       = 60
```

---

## 📜 License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.

