<div align="center">

# 📚 Data Structures & Algorithms in C++

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus)](https://isocpp.org/)
[![Topics](https://img.shields.io/badge/Topics-Data%20Structures%20%26%20Algorithms-green?style=for-the-badge)]()
[![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)]()

> A structured, hands-on C++ repository covering the most essential Data Structures and Algorithms — built from scratch with clean, well-commented code.

</div>

---

## 📖 Table of Contents

- [About](#-about)
- [Repository Structure](#-repository-structure)
- [Data Structures](#-data-structures)
  - [Linked Lists](#-linked-lists)
    - [Singly Linked List](#singly-linked-list)
    - [Doubly Linked List](#doubly-linked-list)
  - [Stacks](#-stacks)
  - [Queues](#-queues)
  - [Trees](#-trees)
  - [Heaps](#-heaps)
  - [Hash Tables](#-hash-tables)
  - [Graphs](#-graphs)
  - [Tries](#-tries)
- [Algorithms](#-algorithms)
  - [Sorting](#-sorting-algorithms)
  - [Searching](#-searching-algorithms)
  - [Recursion & Backtracking](#-recursion--backtracking)
  - [Dynamic Programming](#-dynamic-programming)
  - [Greedy Algorithms](#-greedy-algorithms)
  - [Graph Algorithms](#-graph-algorithms)
- [Problem Sets (NeetCode / LeetCode)](#-problem-sets)
- [Getting Started](#-getting-started)
- [Complexity Cheat Sheet](#-complexity-cheat-sheet)
- [Contributing](#-contributing)

---

## 🧠 About

This repository is a comprehensive collection of **Data Structures and Algorithms** implemented in **C++** from scratch.  
The goal is to deeply understand how each structure works under the hood — no STL black-boxes, just raw pointers, logic, and clean code.

Whether you're preparing for **technical interviews**, studying for **competitive programming**, or simply strengthening your CS fundamentals, this repo has you covered.

---

## 📁 Repository Structure

```
DataStructure_Algos/
│
└── Data_Structure/
    ├── SinglyLinkedList/
    │   ├── Node.cpp
    │   ├── SinglyLinkedList.cpp
    │   └── main.cpp
    │
    ├── DoublyLinkedList/
    │   ├── Node.cpp
    │   ├── DoublyLinkedList.cpp
    │   └── main.cpp
    │
    ├── QUEUES/
    │   ├── Node.cpp
    │   ├── Queues.cpp
    │   └── main.cpp
    │
    └── NCPI_Porblem/
        └── minMaxxArray/
            ├── Solution.cpp
            └── minMax.cpp
```

---

## 🗂️ Data Structures

### 🔗 Linked Lists

A **Linked List** is a linear data structure where elements (nodes) are stored in non-contiguous memory locations, each pointing to the next (and/or previous) node.

---

#### Singly Linked List

📂 `Data_Structure/SinglyLinkedList/`

Each node holds a `data` value and a single `next` pointer.

| Operation       | Description                              | Time Complexity |
|-----------------|------------------------------------------|-----------------|
| `append()`      | Insert a node at the **tail**            | O(1)            |
| `prepend()`     | Insert a node at the **head**            | O(1)            |
| `deleteValue()` | Delete the first node with a given value | O(n)            |
| `display()`     | Print all nodes from head to tail        | O(n)            |

**Visual:**
```
HEAD → [10] → [20] → [30] → [40] → NULL
                              ↑
                             TAIL
```

---

#### Doubly Linked List

📂 `Data_Structure/DoublyLinkedList/`

Each node holds a `data` value, a `next` pointer **and** a `prev` pointer — enabling traversal in both directions.

| Operation          | Description                              | Time Complexity |
|--------------------|------------------------------------------|-----------------|
| `append()`         | Insert a node at the **tail**            | O(1)            |
| `prepend()`        | Insert a node at the **head**            | O(1)            |
| `deleteValue()`    | Delete the first node with a given value | O(n)            |
| `displayForward()` | Print all nodes from **head → tail**     | O(n)            |
| `displayBackward()`| Print all nodes from **tail → head**     | O(n)            |

**Visual:**
```
NULL ← [10] ⇄ [20] ⇄ [30] ⇄ [40] → NULL
        ↑                      ↑
       HEAD                   TAIL
```

---

### 📦 Stacks

> 🚧 *Coming Soon*

A **Stack** follows the **LIFO** (Last In, First Out) principle.

| Operation   | Description                    | Time Complexity |
|-------------|--------------------------------|-----------------|
| `push()`    | Add element to the top         | O(1)            |
| `pop()`     | Remove element from the top    | O(1)            |
| `peek()`    | View the top element           | O(1)            |
| `isEmpty()` | Check if the stack is empty    | O(1)            |

---

### 🚶 Queues

📂 `Data_Structure/QUEUES/`

A **Queue** follows the **FIFO** (First In, First Out) principle. Implemented using a linked list with `head` and `tail` pointers.

| Operation    | Description                          | Time Complexity |
|--------------|--------------------------------------|-----------------|
| `Enqueue()`  | Add element to the **rear (tail)**   | O(1)            |
| `Dequeue()`  | Remove element from **front (head)** | O(1)            |
| `display()`  | Print all elements in order          | O(n)            |

**Visual:**
```
FRONT → [10] → [20] → [30] → [40] → REAR
  (Dequeue from here)       (Enqueue here)
```

---

### 🌳 Trees

> 🚧 *Coming Soon*

#### Binary Search Tree (BST)

| Operation   | Average     | Worst Case |
|-------------|-------------|------------|
| `insert()`  | O(log n)    | O(n)       |
| `search()`  | O(log n)    | O(n)       |
| `delete()`  | O(log n)    | O(n)       |

#### Tree Traversals
- **In-Order** (Left → Root → Right)
- **Pre-Order** (Root → Left → Right)
- **Post-Order** (Left → Right → Root)
- **Level-Order** (BFS)

---

### 🔺 Heaps

> 🚧 *Coming Soon*

| Type       | Property                                       |
|------------|------------------------------------------------|
| **Min-Heap** | Parent node is always ≤ its children         |
| **Max-Heap** | Parent node is always ≥ its children         |

| Operation      | Time Complexity |
|----------------|-----------------|
| `insert()`     | O(log n)        |
| `extractMin()` | O(log n)        |
| `peek()`       | O(1)            |

---

### #️⃣ Hash Tables

> 🚧 *Coming Soon*

A **Hash Table** maps keys to values using a hash function, providing near-constant-time lookups.

| Operation  | Average | Worst Case |
|------------|---------|------------|
| `insert()` | O(1)    | O(n)       |
| `lookup()` | O(1)    | O(n)       |
| `delete()` | O(1)    | O(n)       |

---

### 🕸️ Graphs

> 🚧 *Coming Soon*

Graphs are represented using:
- **Adjacency Matrix**
- **Adjacency List**

| Representation    | Space    | Add Edge | Check Edge |
|-------------------|----------|----------|------------|
| Adjacency Matrix  | O(V²)    | O(1)     | O(1)       |
| Adjacency List    | O(V + E) | O(1)     | O(V)       |

---

### 🔤 Tries

> 🚧 *Coming Soon*

A **Trie** (Prefix Tree) is ideal for string operations like autocomplete and spell checking.

| Operation    | Time Complexity |
|--------------|-----------------|
| `insert()`   | O(m)            |
| `search()`   | O(m)            |
| `startsWith()` | O(m)          |

> *m = length of the string*

---

## ⚙️ Algorithms

### 🔃 Sorting Algorithms

> 🚧 *Coming Soon*

| Algorithm       | Best       | Average    | Worst      | Space  | Stable |
|-----------------|------------|------------|------------|--------|--------|
| Bubble Sort     | O(n)       | O(n²)      | O(n²)      | O(1)   | ✅     |
| Selection Sort  | O(n²)      | O(n²)      | O(n²)      | O(1)   | ❌     |
| Insertion Sort  | O(n)       | O(n²)      | O(n²)      | O(1)   | ✅     |
| Merge Sort      | O(n log n) | O(n log n) | O(n log n) | O(n)   | ✅     |
| Quick Sort      | O(n log n) | O(n log n) | O(n²)      | O(log n)| ❌    |
| Heap Sort       | O(n log n) | O(n log n) | O(n log n) | O(1)   | ❌     |
| Counting Sort   | O(n + k)   | O(n + k)   | O(n + k)   | O(k)   | ✅     |
| Radix Sort      | O(nk)      | O(nk)      | O(nk)      | O(n+k) | ✅     |

---

### 🔍 Searching Algorithms

> 🚧 *Coming Soon*

| Algorithm       | Best  | Average  | Worst    |
|-----------------|-------|----------|----------|
| Linear Search   | O(1)  | O(n)     | O(n)     |
| Binary Search   | O(1)  | O(log n) | O(log n) |

---

### 🔁 Recursion & Backtracking

> 🚧 *Coming Soon*

Topics covered:
- Factorial & Fibonacci
- N-Queens Problem
- Sudoku Solver
- Subset / Permutation Generation
- Rat in a Maze

---

### 💡 Dynamic Programming

> 🚧 *Coming Soon*

| Problem                     | Approach        |
|-----------------------------|-----------------|
| Fibonacci (Memoization)     | Top-Down        |
| 0/1 Knapsack                | Bottom-Up       |
| Longest Common Subsequence  | Bottom-Up       |
| Coin Change                 | Bottom-Up       |
| Longest Increasing Subsequence | Both         |
| Matrix Chain Multiplication | Top-Down        |

---

### 💰 Greedy Algorithms

> 🚧 *Coming Soon*

- Activity Selection Problem
- Fractional Knapsack
- Huffman Encoding
- Dijkstra's Shortest Path

---

### 🗺️ Graph Algorithms

> 🚧 *Coming Soon*

| Algorithm            | Use Case                          | Complexity      |
|----------------------|-----------------------------------|-----------------|
| BFS                  | Shortest path (unweighted)        | O(V + E)        |
| DFS                  | Cycle detection, topological sort | O(V + E)        |
| Dijkstra's           | Shortest path (weighted)          | O((V+E) log V)  |
| Bellman-Ford         | Shortest path (negative weights)  | O(VE)           |
| Floyd-Warshall       | All-pairs shortest path           | O(V³)           |
| Kruskal's / Prim's   | Minimum Spanning Tree             | O(E log E)      |
| Topological Sort     | Dependency ordering (DAG)         | O(V + E)        |

---

## 🧩 Problem Sets

### NeetCode / LeetCode Practice

📂 `Data_Structure/NCPI_Porblem/`

| #  | Problem               | Category  | Difficulty | Status |
|----|-----------------------|-----------|------------|--------|
| 1  | Min & Max of Array    | Arrays    | 🟢 Easy   | ✅ Done |
| 2  | Two Sum               | Arrays    | 🟢 Easy   | 🚧     |
| 3  | Best Time to Buy Stock| Arrays    | 🟢 Easy   | 🚧     |
| 4  | Valid Anagram          | Strings   | 🟢 Easy   | 🚧     |
| 5  | Reverse a Linked List  | Linked List| 🟢 Easy  | 🚧     |
| 6  | Valid Parentheses      | Stack     | 🟢 Easy   | 🚧     |
| 7  | Binary Search         | Search    | 🟢 Easy   | 🚧     |
| 8  | Merge Two Sorted Lists | Linked List| 🟢 Easy  | 🚧     |
| 9  | Maximum Depth of BST  | Trees     | 🟢 Easy   | 🚧     |
| 10 | Clone Graph           | Graphs    | 🟡 Medium | 🚧     |

> More problems will be added continuously.

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler: `g++` (GCC) or `clang++`
- C++17 or higher recommended

### Compile & Run

```bash
# Navigate to the desired topic folder
cd Data_Structure/SinglyLinkedList

# Compile
g++ -std=c++17 main.cpp -o main

# Run
./main
```

---

## 📊 Complexity Cheat Sheet

### Common Data Structures

| Data Structure     | Access  | Search  | Insert  | Delete  |
|--------------------|---------|---------|---------|---------|
| Array              | O(1)    | O(n)    | O(n)    | O(n)    |
| Singly Linked List | O(n)    | O(n)    | O(1)*   | O(n)    |
| Doubly Linked List | O(n)    | O(n)    | O(1)*   | O(1)**  |
| Stack              | O(n)    | O(n)    | O(1)    | O(1)    |
| Queue              | O(n)    | O(n)    | O(1)    | O(1)    |
| Hash Table         | —       | O(1)    | O(1)    | O(1)    |
| BST                | O(log n)| O(log n)| O(log n)| O(log n)|
| Heap               | O(1)†   | O(n)    | O(log n)| O(log n)|

> \* at head/tail | \*\* with node pointer | † min/max only

---

## 🤝 Contributing

Contributions, issues, and feature requests are welcome!

1. **Fork** the repository
2. **Create** a new branch: `git checkout -b feature/your-topic`
3. **Commit** your changes: `git commit -m "Add: [TopicName] implementation"`
4. **Push** to the branch: `git push origin feature/your-topic`
5. **Open** a Pull Request

Please keep code clean, well-commented, and consistent with the existing style.

---

<div align="center">

Made with ❤️ and C++ — *Keep learning, keep building.*

</div>
```

Now let me write this to the actual file: