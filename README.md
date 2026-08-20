# ED2 — Elementary Sorting — List 01

Practice exercises for **Data Structures II** — Sorting algorithms (Bubble Sort, Selection Sort, Insertion Sort) and their variations.

> Federal Institute of Triângulo Mineiro — Campus Patrocínio
> Course: Systems Analysis and Development Technology — 4th Term
> Professor: Júnio Moreira
> Assigned: 08/12/2026 · **Due: 08/26/2026**

---

## 📁 Project Structure

```
ed2-elementary-sorting-list01-cpp/
├── CMakeLists.txt
├── main.cpp
├── README.md
├── .gitignore
└── src/
    ├── Exer01_BubbleSortString.cpp
    ├── Exer02_SelectionSortDescending.cpp
    ├── Exer03_SelectionSortKSwaps.cpp
    ├── Exer04_InsertionSortShiftCount.cpp
    └── Exer05_InsertionSortDescendingTail.cpp
```

> **Note:** `main.cpp` at the project root is the default file created by CLion when the project is initialized. It is **not part of the exercises** — each `ExerNN_*.cpp` inside `src/` has its own `main()` and is registered as an independent executable in `CMakeLists.txt`.

Each `Exer*.cpp` file is **self-contained** (has its own `main()`) and is compiled as an independent executable. They all follow the same three-block pattern:

| Block | Responsibility |
|---|---|
| **Pure logic** | Implements the algorithm itself, using STL (`vector`, `string`, etc). No `cin`/`cout`. |
| `onlineJudge()` | Adapter: reads input with `cin`, calls the pure logic, prints with `cout`. |
| `runExer...()` | Runs the examples from the problem statement locally and compares against the expected output (`[PASSED]` / `[FAILED]`). |

---

## 📝 Exercises

| # | File | Problem | Technique | Complexity |
|---|---|---|---|---|
| 1 | `Exer01_BubbleSortString.cpp` | Sort the characters of a string alphabetically | Bubble Sort | O(n²) |
| 2 | `Exer02_SelectionSortDescending.cpp` | Sort a vector in descending order | Selection Sort (variation) | O(n²) |
| 3 | `Exer03_SelectionSortKSwaps.cpp` | Vector state after k swaps of Selection Sort | Selection Sort (partial simulation) | O(k·n) |
| 4 | `Exer04_InsertionSortShiftCount.cpp` | Sort and count shifts inside the `while` loop | Insertion Sort (instrumented) | O(n²) |
| 5 | `Exer05_InsertionSortDescendingTail.cpp` | Sort descending, building the sorted sublist from the end | Insertion Sort (variation) | O(n²) |

<details>
<summary><strong>Details for each exercise (input, output, and example)</strong></summary>

### 1. Sorting Characters in a String with Bubble Sort
**Input:** string `S` of length N, made of lowercase letters.
**Output:** the string with its characters sorted alphabetically. **Must strictly use Bubble Sort.**

```
Input            Output
estrutura        aerrsttuu
```

> ⚠️ The professor's original PDF shows this example's output as `aeerrsttu`, but the correct alphabetical sort of the letters in `"estrutura"` is `aerrsttuu` (double-check with the professor before assuming this is your own mistake).

### 2. Descending Sort of a Vector with Selection Sort
**Input:** N and the vector `V`.
**Output:** the vector sorted in **descending** order, using Selection Sort logic (select the largest element of the unsorted sublist at each step).

```
Input            Output
5                5 4 3 2 1
3 1 4 5 2
```

### 3. Partial Simulation of Selection Sort with k Swaps
**Input:** N, k, and the vector `A`.
**Output:** the state of the vector immediately after performing the **first k swaps** of the standard (ascending) Selection Sort.

```
Input            Output
5 2              13 14 29 37 64
29 64 14 37 13
```

### 4. Counting Shifts in Insertion Sort
**Input:** N (fixed at 10) and the array of 10 elements.
**Output:** first line with the array sorted ascending; second line with the **total number of copies/shifts** performed inside the `while` loop (`array[j+1] = array[j]`).

```
Input                                  Output
10                                     12 27 33 41 56 62 67 69 72 74
72 12 62 69 27 67 41 56 33 74          26
```

### 5. Insertion Sort with Sorted Sublist at the End
**Input:** N and the vector.
**Output:** the vector sorted in **descending** order, building the sorted sublist starting from the **end** of the vector toward the beginning (traversing right to left).

```
Input            Output
6                12 9 7 5 3 1
12 7 9 1 5 3
```

</details>

---

## 🚀 How to Run in CLion

1. Open the project and reload CMake (**Reload CMake Project**, the sync icon that appears after editing `CMakeLists.txt`).
2. In the run target selector (top of the window), choose the desired exercise.
3. Click **Run** (▶) or **Debug** (🐞).

> **Tip:** each file toggles between two modes inside `int main()`:
> - **Local test mode** (default): runs `runExer...()` with the examples from the problem statement.
> - **Online judge mode**: comment out the `runExer...()` call and uncomment `onlineJudge()` before submitting to the judge.

```cpp
int main() {
    runExer01BubbleSortString();  // <- local test mode (active)
    // onlineJudge();             // <- online judge mode (commented out)
    return 0;
}
```

---

## 💻 How to Run from the Terminal (without CLion)

If you prefer to compile manually with `g++`:

```bash
g++ -std=c++17 -Wall -Wextra -o exer01 src/Exer01_BubbleSortString.cpp
./exer01
```

To test online judge mode from the terminal, redirect an input file:

```bash
echo "estrutura" | ./exer01
```

---

## 🙈 What's Inside `.gitignore`

The repository ignores files automatically generated by the IDE and the build process — they shouldn't be tracked in version control because they're regenerated locally on every build and vary from machine to machine.

```gitignore
# CMake / CLion build directories
cmake-build-*/
.cmake/

# JetBrains / CLion IDE internal files
.idea/
*.iws
*.iml

# Compiled binaries and executables
*.exe
*.out
*.app
*.o
*.obj
*.dylib
*.so
*.dll

# Operating system files
.DS_Store
Thumbs.db
```

| Pattern | What it prevents from being tracked |
|---|---|
| `cmake-build-*/`, `.cmake/` | The build folder generated by CLion/CMake on every compilation |
| `.idea/`, `*.iws`, `*.iml` | Local JetBrains IDE settings (specific to your machine) |
| `*.exe`, `*.out`, `*.app`, `*.o`, `*.obj`, `*.dylib`, `*.so`, `*.dll` | Compiled binaries and object files (Windows, Linux, and macOS) |
| `.DS_Store`, `Thumbs.db` | Metadata files automatically created by Finder (macOS) and Explorer (Windows) |

> If any of these files show up as "untracked" when running `git status`, check that `.gitignore` is in the **root** of the repository and that the pattern exactly matches the generated file/folder.

---

## ⚠️ Read the Problem Statement Carefully

- **Exercise 1** explicitly requires **Bubble Sort** — don't use `std::sort` or any other algorithm, even if it produces the correct result.
- **Exercise 2** is a *variation* of Selection Sort (looks for the **largest**, not the smallest) — implement the logic manually, don't use `sort` with a descending comparator.
- **Exercise 3** asks for the **intermediate** state of the vector, not the fully sorted vector — be careful not to run the full algorithm.
- **Exercise 4** requires counting shifts **only** inside Insertion Sort's inner `while` loop — don't count comparisons or other assignments.
- **Exercise 5** builds the sorted sublist starting from the **end** of the vector — the insertion logic is mirrored compared to traditional Insertion Sort.

---

## ✅ Requirements

- C++17 compiler or newer (GCC, Clang, or MSVC)
- CMake ≥ 3.20
- CLion (recommended) or any IDE/editor of your choice

---

## 📚 Reference

Original exercise list: *Practice Exercises — Data Structures II* (08/12/2026 · due 08/26/2026).
