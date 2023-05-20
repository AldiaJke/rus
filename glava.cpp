#pragma comment(lib, "SDL2_mixer.lib")
#include <stdio.h>
#include <SDL.h>
#include <stdlib.h>
#include <locale>
#include <iostream>
#include "SDL_ttf.h"
#include "SDL_mixer.h"
#include <SDL_image.h>
#include "Header.h"
using namespace std;

int main(int argc, char** argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	Mix_Init(0);
	Mix_OpenAudio(22050, MIX_DEFAULT_FORMAT, 2, 1024);
	SDL_Window* window = SDL_CreateWindow("11",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		1200, 900, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		cout << "error" << endl;
		SDL_GetError();
	}
	else
	{
		if (window == NULL)
		{
			cout << "error" << endl;
			SDL_GetError();
		}
		else
		{
			main1(window, renderer);
			SDL_DestroyRenderer(renderer);
			SDL_DestroyWindow(window);
			SDL_Quit();
		}
	}
	return 0;
}