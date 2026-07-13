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

Concepts practiced:

- Recursion
- Graph traversal
- Visited sets

---

### Breadth First Search (BFS)

Traverses a graph level-by-level using a queue.

Concepts practiced:

- Queues
- Level-order traversal
- Graph exploration

---

## Graph Analysis

### Connected Components

Counts the number of disconnected components in a graph.

Concepts practiced:

- DFS over disconnected graphs
- Graph connectivity

---

### Print Connected Components

Prints every connected component individually.

Example:

```
Component 1:
A B C

Component 2:
D E
```

---

### Cycle Detection (Undirected Graph)

Detects whether an undirected graph contains a cycle using DFS and parent tracking.

Concepts practiced:

- Parent tracking
- Back edges
- Recursive graph search

---

## Shortest Path Algorithms

### Dijkstra's Algorithm

Computes the shortest distance from a source vertex to every reachable vertex using a custom Min Heap.

Features:

- Shortest distance calculation
- Path reconstruction
- Custom templated Min Heap
- Operator overloading for heap ordering

Concepts practiced:

- Greedy algorithms
- Priority queues
- Relaxation
- Path reconstruction
- Weighted graphs

Time Complexity:

```
O((V + E) log V)
```

---

## Minimum Spanning Tree

### Prim's Algorithm

Constructs a Minimum Spanning Tree (MST) using a custom Min Heap.

Features:

- Builds a minimum-cost spanning tree
- Stores selected MST edges
- Uses a visited set to prevent cycles
- Works on connected weighted graphs

Concepts practiced:

- Greedy algorithms
- Minimum Spanning Trees
- Graph expansion
- Priority queues
- Cycle prevention

Time Complexity:

```
O((V + E) log V)
```

---

## Data Structures Used

- std::unordered_map
- std::vector
- std::unordered_set
- std::queue
- Custom templated Min Heap

---

## Skills Practiced

- Graph traversal
- Recursive algorithms
- Greedy algorithms
- Template programming
- Operator overloading
- Hash tables
- Heap-based optimization
- Path reconstruction
- Software design
- Debugging algorithm implementations

---

## Future Improvements

- Directed Graphs
- Topological Sort
- Disjoint Set Union (Union-Find)
- Kruskal's Algorithm
- Bellman-Ford Algorithm
- Floyd-Warshall Algorithm
- A* Pathfinding
