
// I affirm that all code given below was written solely by me, Ben Morledge-Hampton,
// and that any help I received adhered to the rules stated for this exam.

// Pre-Processor Directives
#include "Theater.h"
#include <cstdlib>
using namespace std;

Theater::Theater(string newName, string newPhone)
{
	Name = newName;
	Phone = newPhone;

	// Get popcorn and coke a random (outrageously expensive) price between 10 and 20 dollars.
	PopcornPrice = (rand() % 11 + 10);
	CokePrice = (rand() % 11 + 10);

	// Set "NumberOfMovies to the default value, 0.
	NumberOfMovies = 0;

}

bool Theater::AddMovie(Movie & newMovie)
{
	// Check to make sure there isn't already a movie showing at the same time.
	for (int i = 0; i < NumberOfMovies; i++) {

		if (Movies[i].GetShowtime() == newMovie.GetShowtime()) return false;

	}

	// Add the movie to the current index in the array.
	Movies[NumberOfMovies] = newMovie;

	// Increment NumberOfMovies.
	NumberOfMovies++;

	return true;
}

string Theater::GetMovieForHour(int Hour)
{

	int closestHour = 24; // Keeps track of the movie that shows closest to the given hour.
	int closestHourID; // Keeps track of the index of the movie with the closestHour value.

	// Make sure the user has input a valid hour (between 0 and 23, inclusive)
	if (!(Hour <= 23 && Hour >= 0)) return "";

	// Run a for loop to check every movie for the soonest showing time after or on the given hour.

	for (int i = 0; i < NumberOfMovies; i++) {

		if (Movies[i].GetShowtime() < closestHour && Movies[i].GetShowtime() >= Hour) {
			closestHour = Movies[i].GetShowtime();
			closestHourID = i;
		}

	}

	// Make sure a movie has been chosen, and then return that movie's title. (Or return nothing if nothing was chosen.)
	if (closestHour == 24) return "";
	else return Movies[closestHourID].GetTitle();

}

int Theater::GetShowTimeForGenre(string Genre)
{

	int earliestShowing = 24; // Keeps track of the earliest showtime for a given genre.
	int earliestShowingID; // Keeps track of the index of the move with the earliestShowing value.

	// Run a for loop to determine and return the earliest showing for a particular genre is.
	for (int i = 0; i < NumberOfMovies; i++) {

		if (Movies[i].GetGenre() == Genre && Movies[i].GetShowtime() < earliestShowing) {
			earliestShowing = Movies[i].GetShowtime();
			earliestShowingID = i;
		}

	}

	// Make sure a showtime has been chosen, and then return it.  (Or return -1 if no movie of the given genre was found.)
	if (earliestShowing == 24) return -1;
	else return Movies[earliestShowingID].GetShowtime();

}

int Theater::GetPopcornPrice()
{
	return PopcornPrice;
}

int Theater::GetCokePrice()
{
	return CokePrice;
}
