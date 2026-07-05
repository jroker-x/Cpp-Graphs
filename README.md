# Graph (Adjacency List) - C++

A graph implementation built from scratch using Modern C++.

This project implements an undirected graph using an adjacency list along with several fundamental graph algorithms built on top of it.

---

## Features

- Add Vertex
- Add Edge
- Check if a Vertex Exists
- Check if an Edge Exists
- Prevent Duplicate Edges
- Depth First Search (DFS)
- Breadth First Search (BFS)
- Connected Components
- Print Connected Components
- Cycle Detection

---

## Data Structure

The graph is represented using an adjacency list.

```cpp
std::unordered_map<char, std::vector<char>> road;
```

Each key represents a vertex.

Each vector stores all neighbouring vertices.

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

# Algorithms

## Depth First Search (DFS)

Explores one branch completely before backtracking.

Uses

- Recursion
- `std::unordered_set`

Complexity

```
Time: O(V + E)
Space: O(V)
```

---

## Breadth First Search (BFS)

Explores the graph level by level.

Uses

- Queue
- `std::unordered_set`

Complexity

```
Time: O(V + E)
Space: O(V)
```

---

## Connected Components

Determines how many disconnected groups exist inside the graph.

Example

```
A --- B --- C

D --- E

F
```

Output

```
Component 1: A B C
Component 2: D E
Component 3: F

Total Components: 3
```

Uses DFS internally.

Complexity

```
Time: O(V + E)
Space: O(V)
```

---

## Cycle Detection

Determines whether an undirected graph contains a cycle.

Uses DFS with one additional piece of information:

- Parent Vertex

When a visited neighbour is encountered:

- If it is the parent, ignore it.
- If it is not the parent, a cycle has been found.

Example

```
A ---- B
|      |
|      |
D ---- C
```

Output

```
Cycle Found
```

Complexity

```
Time: O(V + E)
Space: O(V)
```

---

# Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Add Vertex | Average O(1) |
| Add Edge | O(n) |
| Contains Vertex | Average O(1) |
| Contains Edge | O(n) |
| DFS | O(V + E) |
| BFS | O(V + E) |
| Connected Components | O(V + E) |
| Cycle Detection | O(V + E) |

---

# Concepts Practiced

- Graph Representation
- Adjacency Lists
- Hash Maps
- Hash Sets
- Recursion
- Queues
- Graph Traversal
- Depth First Search
- Breadth First Search
- Connected Components
- Cycle Detection
- Recursive State
- Complexity Analysis

---

# What I Learned

- Graphs model relationships rather than hierarchy.
- An adjacency list is efficient for sparse graphs.
- DFS explores as deep as possible before backtracking.
- BFS explores graphs level by level using a queue.
- Connected Components are found by repeatedly applying DFS.
- Cycle Detection in undirected graphs requires tracking the parent vertex.
- Recursive functions can propagate information through return values.
- Choosing the right data structure depends on the operations an algorithm performs.

---

# Future Improvements

- Directed Graphs
- Topological Sort
- Weighted Graphs
- Dijkstra's Algorithm
- Minimum Spanning Tree (Prim)
- Minimum Spanning Tree (Kruskal)
