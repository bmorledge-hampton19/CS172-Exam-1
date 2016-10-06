
// I affirm that all code given below was written solely by me, Ben Morledge-Hampton,
// and that any help I received adhered to the rules stated for this exam.

// Pre-Processor Directives
#include "Movie.h"

Movie::Movie()
{

	Title = "How to Train Your Dragon 3";
	Genre = "Action";
	ShowTime = 0;

}

Movie::Movie(string newTitle, string newGenre, int newShowTime)
{
	Title = newTitle;

	if (newGenre == "Action" || newGenre == "Documentary" || newGenre == "Horror")
		Genre = newGenre;
	else Genre = "Comedy";

	ShowTime = newShowTime;
}

string Movie::GetTitle()
{
	return Title;
}

string Movie::GetGenre()
{
	return Genre;
}

int Movie::GetShowtime()
{
	return ShowTime;
}
