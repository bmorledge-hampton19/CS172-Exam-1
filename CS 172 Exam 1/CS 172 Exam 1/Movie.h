#pragma once

// Pre-Processor Directives
#include <string>
using namespace std;

class Movie {

private:
	string Title; // The movie's title
	string Genre; // The movie's genre
	int ShowTime; // The time the move is showing

public:
	Movie(); // Default Constructor.  Creates a midnight showing of How to Train Your Dragon 3.

	// Constructor that takes arguments for all private member variables.
	// Genre must be "Action", "Comedy", "Horror", or "Documentary" else it defaults to "Comedy".
	Movie(string newTitle, string newGenre, int newShowTime);

	string GetTitle(); // Basic getter
	string GetGenre(); // Basic getter
	int GetShowtime(); // Basic getter

};