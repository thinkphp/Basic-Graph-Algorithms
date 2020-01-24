# Basic Graph Algorithms -

### Outline

i) Graphs
ii) Why Study Graphs
iii) Storing Graphs
iiii) Traversals
iiiii) Topological Sort


   i) An abstract way of representing connectivity using nodes (also called vertices) and edges.
   We will label the nodes from 1 to n.
   m edges connect some pairs of nodes. Edges can be either one-directional or bidirectional.
   Nodes and Edges can have some auxiliary information.
  
  
   ii) Lots of problems formulated and solved in terms of Graphs
   - Shortest path problems.
   - Network flow problems.
   - Matching problems.
   - 2-SAT problem.
   - Graph coloring problem.
   - Traveling salesman problem ( still unsolved)
   - and many more.
   
   iii) Need to store both the set of nodes V and the set of edges E
        - nodes can be store in an array.
        - edges must be stored in some other way.
        Want to support operations such as:
        - retrieving all edges incident to a particular node.
        - testing if given two nodes are directy connected.
        Use either Adjacency Matrix or adjacency list to store the edges.


