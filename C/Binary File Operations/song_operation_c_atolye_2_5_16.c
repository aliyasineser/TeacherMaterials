/*gtu bilgisayar Toplulugu C programlama atolyesi 	*/
/*	binary file islemleri							*/
/* 02/05/2016										*/
#include <stdlib.h>
#include<stdio.h>
#define LONG 100
/* Our structure */

typedef struct {
	char song_album_name[LONG];
	char track_no[LONG];
}song_album_info_t;

typedef struct 
{
	char song_name[LONG],
		song_genre[LONG],
		song_artist[LONG];	
	song_album_info_t song_album_info;
	char release_date[LONG];
	char rating[LONG];
}song_t;

void fill_the_blanks(song_t *song);


int main()
{
	
	song_t fav_song;
	char result[520];

	fill_the_blanks(&fav_song);
	
	sprintf(result,"Name: %s\nArtist: %s\nGenre: %s\nAlbum: %s\nRelease: %d\nRating: %.2lf", fav_song.song_name, 
	fav_song.song_artist, fav_song.song_genre, fav_song.song_album_info.song_album_name, 
	atoi(fav_song.release_date), atof(fav_song.rating) );
	puts(result);
	
	return 0;
}

void fill_the_blanks(song_t *song){

	printf("Please enter the song name, use maximum 100 characters: ");
	gets(song->song_name);
	printf("Please enter the song genre, use maximum 100 characters: ");
	gets(song->song_genre);
	printf("Please enter the song artist, use maximum 100 characters: ");
	gets(song->song_artist);
	printf("Please enter the song album name, use maximum 100 characters: ");
	gets(song->song_album_info.song_album_name);
	
	printf("Please enter the song track no, use maximum 100 characters: ");
	gets(song->song_album_info.track_no);
	printf("Please enter the song release date, use maximum 100 characters: ");
	gets(song->release_date);
	printf("Please enter the song rating, use maximum 100 characters: ");
	gets(song->rating);
}













