# Graph

A graph data structure implemented from scratch in Modern C++.

This project was built as a learning exercise to understand graph traversal, graph analysis, and shortest-path algorithms without relying on the STL implementations.

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

Traverses a graph recursively using a visited set.

Concepts learned:
- Recursion
- Graph traversal
- Visited sets

---

### Breadth First Search (BFS)

Traverses a graph level-by-level using a queue.

Concepts learned:
- Queue
- Level-order traversal
- Visited sets

---

## Graph Analysis

### Connected Components

Counts disconnected subgraphs inside a graph.

Concepts learned:
- DFS over disconnected graphs
- Outer traversal loop
- Graph connectivity

---

### Print Connected Components

Prints every connected component individually.

Example:

Component 1:
A B C

Component 2:
D E

---

### Cycle Detection (Undirected Graph)

Detects whether an undirected graph contains a cycle using DFS and parent tracking.

Concepts learned:
- Parent tracking
- Back edges
- Recursive graph search

---

## Shortest Path

### Dijkstra's Algorithm

Finds the shortest distance from a source vertex to every reachable vertex using a custom Min Heap.

Features:

- Computes shortest distances
- Reconstructs the actual shortest path
- Uses a custom templated Min Heap
- Uses operator overloading for custom node comparison

Concepts learned:

- Greedy algorithms
- Priority queues / Min Heaps
- Relaxation
- Path reconstruction
- Weighted graphs

Time Complexity:

O((V + E) log V)

---

## Data Structures Used

- std::unordered_map
- std::vector
- std::unordered_set
- std::queue
- Custom Min Heap (templated)

---

## Skills Practiced

- Graph traversal
- Recursive algorithms
- Greedy algorithms
- Template programming
- Operator overloading
- Hash tables
- Algorithm implementation
- Debugging complex state
- Software design

---

## Future Improvements

- Directed graphs
- Bellman-Ford Algorithm
- Floyd-Warshall Algorithm
- Prim's Minimum Spanning Tree
- Kruskal's Algorithm
- A* Pathfinding
