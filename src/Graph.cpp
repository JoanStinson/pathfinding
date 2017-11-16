#include "Graph.h"

Graph::Graph() {
}

Graph::~Graph() {
}

void Graph::AddConnection(Connection c) {
	allConnections.push_back(c);
}

vector<Vector2D> Graph::GetConnections(Vector2D a) {
	// find a in allConnections, guardar totes ses connexions de a i retornarles
	vector<Vector2D> neighbors;
	for (unsigned int i = 0; i < allConnections.size(); i++) {
		if (allConnections[i].GetFromNode().coord == a)
			neighbors.push_back(allConnections[i].GetToNode().coord);
		if (neighbors.size() >= 4) break;
	}

	return neighbors;
}
