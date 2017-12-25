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
	song_t fav_song;

	ptr_myfile=fopen("song.bin","rb");
	if (!ptr_myfile)
	{
		printf("Unable to open file!");
		return 1;
	}
	
	fread(&fav_song, sizeof(song_t),1,ptr_myfile);
	
	printf("Name: %s\nArtist: %s\nGenre: %s\nAlbum: %s\nRelease: %d\nRating: %.2lf\n", fav_song.song_name, 
	fav_song.song_artist, fav_song.song_genre, fav_song.song_album_info.song_album_name, fav_song.release_date, fav_song.rating);
	
		
	if(fseek(ptr_myfile, 0, SEEK_SET)) /* Error checking */
	{
		printf("Error!\n");
		return 1;
	}

	rewind(ptr_myfile); /* No error checking */

	fclose(ptr_myfile);
	return 0;
}
