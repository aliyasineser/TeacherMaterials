/*gtu bilgisayar Toplulugu C programlama atolyesi 	*/
/*	binary file islemleri							*/
/* 02/05/2016										*/
#include<stdio.h>
#define LONG 100
/* Our structure */

typedef struct {
	char song_album_name[LONG];
	int track_no;
}song_album_info_t;

typedef struct 
{
	char song_name[LONG],
		song_genre[LONG],
		song_artist[LONG];	
	song_album_info_t song_album_info;
	int release_date;
	double rating;
 	
}song_t;

int main()
{
	
	FILE *ptr_myfile;
	
	song_t fav_song = { "Forsaken", "Progressive metal", 
	"Dream Theater", { "Systematic Chaos", 2 }, 2007, 10.0 };

	ptr_myfile=fopen("song.bin","wb");
	if (!ptr_myfile)
	{
		printf("Unable to open file!");
		return 1;
	}
	
		
	fwrite(&fav_song, sizeof(song_t), 1, ptr_myfile);
	
	fclose(ptr_myfile);

	return 0;
}

