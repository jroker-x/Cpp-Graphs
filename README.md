# Graph

A graph data structure implemented from scratch in Modern C++.

This project was built to understand graph theory and classical graph algorithms without relying on existing graph libraries. Every algorithm was implemented manually using custom data structures where appropriate.

---

## Features

### Graph Construction

- Add vertices
- Add weighted edges
- Check if a vertex exists
- Check if an edge exists

---

## Graph Traversal

### Depth First Search (DFS)

Traverses a graph recursively.

**Concepts practiced:**

- Recursion
- Graph traversal
- Visited sets

---

### Breadth First Search (BFS)

Traverses a graph level-by-level using a queue.

**Concepts practiced:**

- Queues
- Level-order traversal
- Graph exploration

---

## Graph Analysis

### Connected Components

Counts the number of disconnected components in a graph.

**Concepts practiced:**

- DFS over disconnected graphs
- Graph connectivity

---

### Print Connected Components

Prints every connected component individually.

Example:

```text
Component 1:
A B C

Component 2:
D E
```

---

### Cycle Detection (Undirected Graph)

Detects whether an undirected graph contains a cycle using DFS and parent tracking.

**Concepts practiced:**

- Parent tracking
- Back edges
- Recursive graph search

---

## Shortest Path Algorithms

### Dijkstra's Algorithm

Computes the shortest distance from a source vertex to every reachable vertex using a custom templated Min Heap.

**Features:**

- Shortest distance calculation
- Path reconstruction
- Custom templated Min Heap
- Operator overloading for heap ordering

**Concepts practiced:**

- Greedy algorithms
- Priority queues
- Relaxation
- Weighted graphs
- Path reconstruction

**Time Complexity**

```text
O((V + E) log V)
```

---

## Minimum Spanning Tree Algorithms

### Prim's Algorithm

Constructs a Minimum Spanning Tree (MST) using a custom templated Min Heap.

**Features:**

- Builds a minimum-cost spanning tree
- Stores selected MST edges
- Uses a visited set to prevent cycles
- Expands the tree greedily from a starting vertex

**Concepts practiced:**

- Greedy algorithms
- Minimum Spanning Trees
- Graph expansion
- Priority queues
- Cycle prevention

**Time Complexity**

```text
O((V + E) log V)
```

---

### Kruskal's Algorithm

Constructs a Minimum Spanning Tree by sorting all graph edges and selecting the cheapest edges that do not create cycles.

**Features:**

- Edge sorting
- Cycle detection using Disjoint Set Union
- Minimum-cost spanning tree construction
- Greedy edge selection

**Concepts practiced:**

- Greedy algorithms
- Edge sorting
- Minimum Spanning Trees
- Cycle detection
- Connected components

**Time Complexity**

```text
O(E log E)
```

---

## Disjoint Set Union (Union-Find)

Implemented to support Kruskal's Algorithm.

**Features:**

- Path Compression
- Union by Size
- Fast connectivity queries
- Generic templated implementation

**Concepts practiced:**

- Disjoint Sets
- Tree compression
- Set merging
- Near constant-time connectivity operations

**Time Complexity**

| Operation | Complexity |
|----------|------------|
| Find | O(α(n)) amortized |
| Union | O(α(n)) amortized |

*α(n) is the inverse Ackermann function, which is effectively constant for practical input sizes.*

---

## Data Structures Used

- `std::unordered_map`
- `std::unordered_set`
- `std::vector`
- `std::queue`
- Custom templated Min Heap
- Custom templated Disjoint Set Union (Union-Find)

---

## Skills Practiced

- Graph traversal
- Recursive algorithms
- Greedy algorithms
- Priority queues
- Minimum Spanning Trees
- Disjoint Set Union
- Path Compression
- Union by Size
- Template programming
- Operator overloading
- Hash tables
- Path reconstruction
- Software design
- Debugging algorithm implementations

---

## Future Improvements

- Directed Graph support
- Topological Sort
- Bellman-Ford Algorithm
- Floyd-Warshall Algorithm
- A* Pathfinding
- Strongly Connected Components
- Maximum Flow Algorithms
