

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