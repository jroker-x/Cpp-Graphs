# Graph (Adjacency List) - C++

A graph implementation from scratch using Modern C++.

This project implements an undirected graph using an adjacency list along with several fundamental graph algorithms.

---

## Features

- Add Vertex
- Add Edge
- Check if Vertex Exists
- Check if Edge Exists
- Prevent Duplicate Edges
- Depth First Search (DFS)
- Breadth First Search (BFS)
- Connected Components Counter
- Print Connected Components

---

## Data Structure

```cpp
std::unordered_map<char, std::vector<char>> road;
```

Each key represents a vertex.

Each vector stores its neighbouring vertices.

Example

```
A ---- B
|
|
C
```

Stored internally as

```
A -> B C
B -> A
C -> A
```

---

## Algorithms

### Depth First Search (DFS)

Explores one path completely before backtracking.

Uses:

- Recursion
- `std::unordered_set`

Complexity

```
O(V + E)
```

---

### Breadth First Search (BFS)

Explores the graph level-by-level.

Uses:

- Queue
- `std::unordered_set`

Complexity

```
O(V + E)
```

---

### Connected Components

Finds how many disconnected subgraphs exist.

Example

```
A ---- B ---- C

D ---- E

F
```

Output

```
Total Components = 3
```

Uses DFS internally.

Complexity

```
O(V + E)
```

---

### Print Connected Components

Prints every connected component individually.

Example

```
Component 1:
A B C

Component 2:
D E

Component 3:
F
```

---

## Time Complexity

| Operation | Complexity |
|----------|------------|
| Add Vertex | Average O(1) |
| Add Edge | O(n) |
| Contains Vertex | Average O(1) |
| Contains Edge | O(n) |
| DFS | O(V + E) |
| BFS | O(V + E) |
| Connected Components | O(V + E) |

---

## Concepts Practiced

- Graph Representation
- Adjacency Lists
- Hash Maps
- Hash Sets
- Recursion
- Queues
- DFS
- BFS
- Connected Components
- Graph Traversal
- Complexity Analysis

---

## Future Improvements

- Cycle Detection
- Topological Sort
- Dijkstra's Algorithm
- Minimum Spanning Tree
- Weighted Graphs
- Directed Graphs
