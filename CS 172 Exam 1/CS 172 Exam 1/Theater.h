#pragma once

// I affirm that all code given below was written solely by me, Ben Morledge-Hampton,
// and that any help I received adhered to the rules stated for this exam.

// Pre-Processor Directives
#include <string>
#include "Movie.h"
using namespace std;

class Theater {

private:
	string Name; // The name of the Theater
	string Phone; // The Theater's phone number
	int PopcornPrice; // The price of Popcorn, in dollars, at the theater
	int CokePrice; // The price of Coke, in dollars, at the movie
	int NumberOfMovies; // The number of Movies the theater has showing (in a 24 hour period)
	Movie Movies[24]; // The movies the theater is showing.

public:
	Theater(string newName, string newPhone); // Creates a theater with the given name and phone number.

	bool AddMovie(Movie& newMovie); // Add a Movie object to Movies[] and return true if there is not another movie showing at the same time.  Else returns false.
	string GetMovieForHour(int Hour); // Return the title of the movie showing at or after the time "hour".
										// Return "" if no movies are upcoming.
	
	int GetShowTimeForGenre(string Genre);// Return the hour that the earliest movie of the given genre will show.
											// Return -1 if no movie of the given genre is being shown.

	int GetPopcornPrice();  // Basic getter
	int GetCokePrice(); // Basic getter
};