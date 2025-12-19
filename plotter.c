#include<SDL2/SDL.h>
#include<stdio.h>
#include<stdbool.h>

#define WIDTH 900
#define HEIGHT 600

int main(){

	printf("Plotter\n");
	SDL_Window *pwindow = SDL_CreateWindow("Math", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0);
	SDL_Surface *psurface = SDL_GetWindowSurface(pwindow);
	SDL_Rect rect = (SDL_Rect){50, 50, 50, 50};
	const Uint32 color = 0xFF0000;
	SDL_FillRect(psurface, &rect, color);


	int app_running = true;
	while (app_running){
	SDL_Event event;
		while (SDL_PollEvent(&event)){
			if (event.type == SDL_QUIT){
				app_running = false;
			}
		}

		SDL_UpdateWindowSurface(pwindow);
	}
	return 0;
}
