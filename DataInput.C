#define _CRT_SECURE_NO_WARNINGS

//Celine Houbod
//Welcome to the MilkyWayCinema's managing program.
// This program assists with reserving tickets or adding showtimes to the each auditorium.

#include <stdio.h>
#include <stdlib.h>


#define Auditorium_SIZE 1 //In order to initialize the number of auditoriums
#define ShowTime_SIZE 3 //In order to initialize the number of showtimes for each auditorium.

struct MV
{
	char TitleOfTheMovie[30];
	int DurationInMinutes;
	char Genre[20];
	char SummaryOftheMovie[1000];
	char Cast[100];
};

struct ST
{
	MV Movie;
	int NumberOfAvailableSeats;
	char StartTime[5];
	char EndTime[5];
	char Date[10];
};

struct Auditorium
{
	ST ShowTime[10];
};


//main
int main()
{
	FILE* fPtr = fopen("MilkyWayCinema.txt", "wb");
	Auditorium Audi[Auditorium_SIZE]; //An abbreviation for auditorium

	for (int j = 0; j < Auditorium_SIZE; j++)
	{
		for (int i = 0; i < ShowTime_SIZE; i++)
		{
			scanf("%s", Audi[j].ShowTime[i].Movie.TitleOfTheMovie);
			scanf("%d", &Audi[j].ShowTime[i].Movie.DurationInMinutes);
			scanf("%s", Audi[j].ShowTime[i].Movie.Genre);
			scanf("%s", Audi[j].ShowTime[i].Movie.SummaryOftheMovie);
			scanf("%s", Audi[j].ShowTime[i].Movie.Cast);
			scanf("%d", &Audi[j].ShowTime[i].NumberOfAvailableSeats);
			scanf("%s", Audi[j].ShowTime[i].StartTime);
			scanf("%s", Audi[j].ShowTime[i].EndTime);
			scanf("%s", Audi[j].ShowTime[i].Date);
		}

		fwrite(&Audi[j], sizeof(struct Auditorium), 1, fPtr);
	}
	fclose(fPtr);
}
