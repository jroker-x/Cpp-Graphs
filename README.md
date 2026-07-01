# Graph (Adjacency List) - C++

A Graph implementation written from scratch using modern C++.

This project stores graphs using an adjacency list representation and was built as part of my journey learning data structures and algorithms through implementation rather than relying on existing libraries.

---

## Features

- Add Vertex
- Add Edge
- Check if a Vertex Exists
- Check if an Edge Exists
- Prevent Duplicate Edges
- Undirected Graph Representation
- DFS support

---

## Data Structure

The graph is represented using an adjacency list.

```cpp
std::unordered_map<char, std::vector<char>> graph;
```

Each key represents a vertex.

Each vector stores all neighboring vertices connected by an edge.

Example:

```text
A ----- B
|
|
C
```

Stored as:

```cpp
A -> {B, C}
B -> {A}
C -> {A}
```

---

## Operations

### Add Vertex

Creates a new vertex if it does not already exist.

Time Complexity

```
Average: O(1)
```

---

### Add Edge

Adds an undirected connection between two vertices.

Duplicate edges are ignored.

Example

```cpp
graph.addEdge('A', 'B');
```

Internally stores:

```text
A -> B
B -> A
```

Time Complexity

```
Average: O(n)
```

where **n** is the number of neighbors of the source vertex.

---

### Contains Vertex

Checks whether a vertex exists.

Time Complexity

```
Average: O(1)
```

---

### Contains Edge

Searches a vertex's adjacency list to determine whether a connection already exists.

Uses `std::find()` to search the neighbor list.

Time Complexity

```
O(n)
```

where **n** is the number of neighbors.

---

## Complexity

| Operation | Complexity |
|-----------|------------|
| Add Vertex | Average O(1) |
| Add Edge | O(n) |
| Contains Vertex | Average O(1) |
| Contains Edge | O(n) |

---

## Concepts Practiced

- Graph Representation
- Adjacency Lists
- Hash Maps
- Vectors
- STL Algorithms (`std::find`)
- API Design
- Preventing Duplicate Edges
- Undirected Graphs
- Time Complexity Analysis

---

## Example

```cpp
Graph graph;

graph.addVertex('A');
graph.addVertex('B');
graph.addVertex('C');

graph.addEdge('A', 'B');
graph.addEdge('A', 'C');
graph.addEdge('B', 'C');
```

Result

```text
A -> B C
B -> A C
C -> A B
```

---

## What I Learned

- Graphs are collections of vertices connected by edges.
- An adjacency list efficiently stores sparse graphs.
- A hash map provides fast vertex lookup.
- Each vertex maintains a list of its neighboring vertices.
- Preventing duplicate edges is an important graph invariant.
- Well-designed helper functions (`containsVertex`, `containsEdge`) simplify higher-level operations.
- Good API design often means composing small functions rather than writing one large function.

---

## Next Steps

Future additions to this project:

- Depth First Search (DFS)
- Breadth First Search (BFS)
- Path Finding
- Connected Components
- Shortest Path Algorithms (Dijkstra)
