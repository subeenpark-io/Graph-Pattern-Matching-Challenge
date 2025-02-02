/**
 * @file backtrack.h
 *
 */

#ifndef BACKTRACK_H_
#define BACKTRACK_H_

#include "candidate_set.h"
#include "common.h"
#include "graph.h"

class Backtrack {
 public:
  Backtrack();
  ~Backtrack();


  Visited visited;

  bool PrintAllMatches(const Graph &data, const Graph &query,
                       const CandidateSet &cs, bool newRank);

  bool validate(const Graph &data, const Graph &query, const Embedding &embedding, std::vector<std::pair<double, Vertex>> &rank);

  void printEmbedding(const Embedding &embedding);


  bool checkEdgeConnection(const Graph &graph, const Graph &query, const Embedding &embedding, Vertex dVertex,
                        Vertex qVertex);
};

#endif  // BACKTRACK_H_

