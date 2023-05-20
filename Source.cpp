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
Mix_Chunk* Sound = NULL;
Mix_Music* fon = NULL;

bool esliknopkanawata(SDL_Rect bud, int x, int y)
{
	if (((x >= bud.x) && (x <= bud.x + bud.w)) && ((y >= bud.y) && (y <= bud.y + bud.h)))
		return true;
	else
		return false;
}

void loadmusic()
{
	fon = Mix_LoadMUS("1.wav");
	Mix_PlayMusic(fon, -1);
}

void sound()
{
	Sound = Mix_LoadWAV("2.wav");
	Mix_PlayChannel(-1, Sound, 0);
}
void polya3na3(SDL_Renderer* renderer, SDL_Event event, SDL_Rect pole1, SDL_Rect pole2, SDL_Rect pole3, SDL_Rect pole4, SDL_Rect pole5, SDL_Rect pole6, SDL_Rect pole7, SDL_Rect pole8, 
	SDL_Rect pole9, int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8, int k9, int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9)
{
	//SDL_SetRenderDrawColor(renderer, 255, 102, 0, 0);
	//SDL_SetRenderDrawColor(renderer, 34, 139, 34, 0);
	//SDL_SetRenderDrawColor(renderer, 30, 144, 255, 0);
	SDL_SetRenderDrawColor(renderer, 123, 104, 238, 0);
	for (int x = 470; x < 475; x++)
	{
		SDL_RenderDrawLine(renderer, x, 75, x, 825);
	}
	//SDL_SetRenderDrawColor(renderer, 30, 144, 255, 0);
	for (int x = 725; x < 730; x++)
	{
		SDL_RenderDrawLine(renderer, x, 75, x, 825);
	}
	//SDL_SetRenderDrawColor(renderer, 30, 144, 255, 0);
	for (int y = 325; y < 330; y++)
	{
		SDL_RenderDrawLine(renderer, 225, y, 975, y);
	}
	//SDL_SetRenderDrawColor(renderer, 30, 144, 255, 0);
	for (int y = 575; y < 580; y++)
	{
		SDL_RenderDrawLine(renderer, 225, y, 975, y);
	}
	//SDL_SetRenderDrawColor(renderer, 0, 255, 255, 0);
	if (k1 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 178, 34, 34, 0);
			SDL_RenderDrawLine(renderer, pole1.x + i, pole1.y + 25, pole1.x + i + 200, pole1.y + 200 + 25);
			SDL_RenderDrawLine(renderer, pole1.x + i, pole1.y + 225, pole1.x + i + 200, pole1.y + 25);
		}
	}
	if (k2 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pole2.x + i, pole2.y + 25, pole2.x + i + 200, pole2.y + 200 + 25);
			SDL_RenderDrawLine(renderer, pole2.x + i, pole2.y + 225, pole2.x + i + 200, pole2.y + 25);
		}
	}
	if (k3 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 0, 128, 0);
			SDL_RenderDrawLine(renderer, pole3.x + i, pole3.y + 25, pole3.x + i + 200, pole3.y + 200 + 25);
			SDL_RenderDrawLine(renderer, pole3.x + i, pole3.y + 225, pole3.x + i + 200, pole3.y + 25);
		}
	}
	if (k4 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pole4.x + i, pole4.y + 25, pole4.x + i + 200, pole4.y + 200 + 25);
			SDL_RenderDrawLine(renderer, pole4.x + i, pole4.y + 225, pole4.x + i + 200, pole4.y + 25);
		}
	}
	if (k5 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 40, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pole5.x + i, pole5.y + 25, pole5.x + i + 200, pole5.y + 200 + 25);
			SDL_RenderDrawLine(renderer, pole5.x + i, pole5.y + 225, pole5.x + i + 200, pole5.y + 25);
		}
	}
	if (k6 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 128, 0, 128, 0);
			SDL_RenderDrawLine(renderer, pole6.x + i, pole6.y + 25, pole6.x + i + 200, pole6.y + 200 + 25);
			SDL_RenderDrawLine(renderer, pole6.x + i, pole6.y + 225, pole6.x + i + 200, pole6.y + 25);
		}
	}
	if (k7 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
			SDL_RenderDrawLine(renderer, pole7.x + i, pole7.y + 25, pole7.x + i + 200, pole7.y + 200 + 25);
			SDL_RenderDrawLine(renderer, pole7.x + i, pole7.y + 225, pole7.x + i + 200, pole7.y + 25);
		}
	}
	if (k8 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 248, 248, 255, 0);
			SDL_RenderDrawLine(renderer, pole8.x + i, pole8.y + 25, pole8.x + i + 200, pole8.y + 200 + 25);
			SDL_RenderDrawLine(renderer, pole8.x + i, pole8.y + 225, pole8.x + i + 200, pole8.y + 25);
		}
	}
	if (k9 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 255, 69, 0, 0);
			SDL_RenderDrawLine(renderer, pole9.x + i, pole9.y + 25, pole9.x + i + 200, pole9.y + 200 + 25);
			SDL_RenderDrawLine(renderer, pole9.x + i, pole9.y + 225, pole9.x + i + 200, pole9.y + 25);
		}
	}

	if (n1 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 178, 34, 34, 0);
		for(int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole1.x + 125 - cos(i) * 100, pole1.y + 125 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole1.x + 124 - cos(i) * 100, pole1.y + 124 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole1.x + 126 - cos(i) * 100, pole1.y + 126 + sin(i) * 100);
	}

	if (n2 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 0, 255, 34, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole2.x + 125 - cos(i) * 100, pole2.y + 125 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole2.x + 124 - cos(i) * 100, pole2.y + 124 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole2.x + 126 - cos(i) * 100, pole2.y + 126 + sin(i) * 100);
	}
	
	if (n3 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 0, 0, 128, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole3.x + 125 - cos(i) * 100, pole3.y + 125 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole3.x + 124 - cos(i) * 100, pole3.y + 124 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole3.x + 126 - cos(i) * 100, pole3.y + 126 + sin(i) * 100);
	}

	if (n4 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 255, 255, 0, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole4.x + 125 - cos(i) * 100, pole4.y + 125 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole4.x + 124 - cos(i) * 100, pole4.y + 124 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole4.x + 126 - cos(i) * 100, pole4.y + 126 + sin(i) * 100);
	}

	if (n5 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 200, 150, 100, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole5.x + 125 - cos(i) * 100, pole5.y + 125 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole5.x + 124 - cos(i) * 100, pole5.y + 124 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole5.x + 126 - cos(i) * 100, pole5.y + 126 + sin(i) * 100);
	}

	if (n6 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 128, 0, 128, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole6.x + 125 - cos(i) * 100, pole6.y + 125 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole6.x + 124 - cos(i) * 100, pole6.y + 124 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole6.x + 126 - cos(i) * 100, pole6.y + 126 + sin(i) * 100);
	}

	if (n7 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole7.x + 125 - cos(i) * 100, pole7.y + 125 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole7.x + 124 - cos(i) * 100, pole7.y + 124 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole7.x + 126 - cos(i) * 100, pole7.y + 126 + sin(i) * 100);
	}

	if (n8 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 248, 248, 255, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole8.x + 125 - cos(i) * 100, pole8.y + 125 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole8.x + 124 - cos(i) * 100, pole8.y + 124 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole8.x + 126 - cos(i) * 100, pole8.y + 126 + sin(i) * 100);
	}

	if (n9 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 255, 69, 0, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole9.x + 125 - cos(i) * 100, pole9.y + 125 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole9.x + 124 - cos(i) * 100, pole9.y + 124 + sin(i) * 100);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pole9.x + 126 - cos(i) * 100, pole9.y + 126 + sin(i) * 100);
	}
}
int igra3x3(SDL_Renderer* renderer, SDL_Event event, int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8, int k9, int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int k123)
{
	if ((k1 == 1 && k2 == 1 && k3 == 1) || (k4 == 1 && k5 == 1 && k6 == 1) || (k7 == 1 && k8 == 1 && k9 == 1) ||
		(k1 == 1 && k4 == 1 && k7 == 1) || (k2 == 1 && k5 == 1 && k8 == 1) || (k3 == 1 && k6 == 1 && k9 == 1) ||
		(k3 == 1 && k5 == 1 && k7 == 1) || (k1 == 1 && k5 == 1 && k9 == 1))
	{
		return 1;
	}
	if ((n1 == 1 && n2 == 1 && n3 == 1) || (n4 == 1 && n5 == 1 && n6 == 1) || (n7 == 1 && n8 == 1 && n9 == 1) ||
		(n1 == 1 && n4 == 1 && n7 == 1) || (n2 == 1 && n5 == 1 && n8 == 1) || (n3 == 1 && n6 == 1 && n9 == 1) ||
		(n3 == 1 && n5 == 1 && n7 == 1) || (n1 == 1 && n5 == 1 && n9 == 1))
	{
		return 2;
	}
	else
	{
		if (k123 == 9)
		{
			return 3;
		}
		return 0;
	}

}
void polya5x5(SDL_Renderer* renderer, SDL_Event event, SDL_Rect pol1, SDL_Rect pol2, SDL_Rect pol3, SDL_Rect pol4, SDL_Rect pol5, 
	SDL_Rect pol6, SDL_Rect pol7, SDL_Rect pol8, SDL_Rect pol9, SDL_Rect pol10, SDL_Rect pol11, SDL_Rect pol12, SDL_Rect pol13, SDL_Rect pol14, SDL_Rect pol15, SDL_Rect pol16, 
	SDL_Rect pol17, SDL_Rect pol18, SDL_Rect pol19, SDL_Rect pol20, SDL_Rect pol21, SDL_Rect pol22, SDL_Rect pol23, SDL_Rect pol24, SDL_Rect pol25,
	int t1, int t2, int t3, int t4, int t5, int t6, int t7, int t8, int t9, int t10, int t11, int t12, int t13, int t14, int t15, int t16, int t17, int t18, int t19, int t20, int t21, 
	int t22, int t23, int t24, int t25, int h1, int h2, int h3, int h4, int h5, int h6, int h7, int h8, int h9, int h10, int h11, int h12, int h13, int h14, int h15, int h16, int h17, 
	int h18, int h19, int h20, int h21, int h22, int h23, int h24, int h25)
{
	SDL_SetRenderDrawColor(renderer, 123, 104, 238, 0);
	for (int x = 370; x < 375; x++)
	{
		SDL_RenderDrawLine(renderer, x, 75, x, 825);
	}
	for (int x = 520; x < 525; x++)
	{
		SDL_RenderDrawLine(renderer, x, 75, x, 825);
	}
	for (int x = 670; x < 675; x++)
	{
		SDL_RenderDrawLine(renderer, x, 75, x, 825);
	}
	for (int x = 820; x < 825; x++)
	{
		SDL_RenderDrawLine(renderer, x, 75, x, 825);
	}
	for (int y = 370; y < 375; y++)
	{
		SDL_RenderDrawLine(renderer, 225, y, 975, y);
	}
	for (int y = 220; y < 225; y++)
	{
		SDL_RenderDrawLine(renderer, 225, y, 975, y);
	}
	for (int y = 520; y < 525; y++)
	{
		SDL_RenderDrawLine(renderer, 225, y, 975, y);
	}
	for (int y = 670; y < 675; y++)
	{
		SDL_RenderDrawLine(renderer, 225, y, 975, y);
	}

	if (t1 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 178, 34, 34, 0);
			SDL_RenderDrawLine(renderer, pol1.x + i, pol1.y + 25, pol1.x + i + 100, pol1.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol1.x + i, pol1.y + 125, pol1.x + i + 100, pol1.y + 25);
		}
	}
	if (t2 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pol2.x + i, pol2.y + 25, pol2.x + i + 100, pol2.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol2.x + i, pol2.y + 125, pol2.x + i + 100, pol2.y + 25);
		}
	}
	if (t3 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 0, 128, 0);
			SDL_RenderDrawLine(renderer, pol3.x + i, pol3.y + 25, pol3.x + i + 100, pol3.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol3.x + i, pol3.y + 125, pol3.x + i + 100, pol3.y + 25);
		}
	}
	if (t4 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pol4.x + i, pol4.y + 25, pol4.x + i + 100, pol4.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol4.x + i, pol4.y + 125, pol4.x + i + 100, pol4.y + 25);
		}
	}
	if (t5 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 40, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pol5.x + i, pol5.y + 25, pol5.x + i + 100, pol5.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol5.x + i, pol5.y + 125, pol5.x + i + 100, pol5.y + 25);
		}
	}
	if (t6 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 128, 0, 128, 0);
			SDL_RenderDrawLine(renderer, pol6.x + i, pol6.y + 25, pol6.x + i + 100, pol6.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol6.x + i, pol6.y + 125, pol6.x + i + 100, pol6.y + 25);
		}
	}
	if (t7 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
			SDL_RenderDrawLine(renderer, pol7.x + i, pol7.y + 25, pol7.x + i + 100, pol7.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol7.x + i, pol7.y + 125, pol7.x + i + 100, pol7.y + 25);
		}
	}
	if (t8 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 248, 248, 255, 0);
			SDL_RenderDrawLine(renderer, pol8.x + i, pol8.y + 25, pol8.x + i + 100, pol8.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol8.x + i, pol8.y + 125, pol8.x + i + 100, pol8.y + 25);
		}
	}
	if (t9 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 255, 69, 0, 0);
			SDL_RenderDrawLine(renderer, pol9.x + i, pol9.y + 25, pol9.x + i + 100, pol9.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol9.x + i, pol9.y + 125, pol9.x + i + 100, pol9.y + 25);
		}
	}
	if (t10 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 255, 69, 0, 0);
			SDL_RenderDrawLine(renderer, pol10.x + i, pol10.y + 25, pol10.x + i + 100, pol10.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol10.x + i, pol10.y + 125, pol10.x + i + 100, pol10.y + 25);
		}
	}
	if (t11 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 178, 34, 34, 0);
			SDL_RenderDrawLine(renderer, pol11.x + i, pol11.y + 25, pol11.x + i + 100, pol11.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol11.x + i, pol11.y + 125, pol11.x + i + 100, pol11.y + 25);
		}
	}
	if (t12 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pol12.x + i, pol12.y + 25, pol12.x + i + 100, pol12.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol12.x + i, pol12.y + 125, pol12.x + i + 100, pol12.y + 25);
		}
	}
	if (t13 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 0, 128, 0);
			SDL_RenderDrawLine(renderer, pol13.x + i, pol13.y + 25, pol13.x + i +100, pol13.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol13.x + i, pol13.y + 125, pol13.x + i + 100, pol13.y + 25);
		}
	}
	if (t14 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pol14.x + i, pol14.y + 25, pol14.x + i + 100, pol14.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol14.x + i, pol14.y + 125, pol14.x + i + 100, pol14.y + 25);
		}
	}
	if (t15 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 40, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pol15.x + i, pol15.y + 25, pol15.x + i + 100, pol15.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol15.x + i, pol15.y + 125, pol15.x + i + 100, pol15.y + 25);
		}
	}
	if (t16 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 128, 0, 128, 0);
			SDL_RenderDrawLine(renderer, pol16.x + i, pol16.y + 25, pol16.x + i + 100, pol16.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol16.x + i, pol16.y + 125, pol16.x + i + 100, pol16.y + 25);
		}
	}
	if (t17 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
			SDL_RenderDrawLine(renderer, pol17.x + i, pol17.y + 25, pol17.x + i + 100, pol17.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol17.x + i, pol17.y + 125, pol17.x + i + 100, pol17.y + 25);
		}
	}
	if (t18 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 248, 248, 255, 0);
			SDL_RenderDrawLine(renderer, pol18.x + i, pol18.y + 25, pol18.x + i + 100, pol18.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol18.x + i, pol18.y + 125, pol18.x + i + 100, pol18.y + 25);
		}
	}
	if (t19 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 255, 69, 0, 0);
			SDL_RenderDrawLine(renderer, pol19.x + i, pol19.y + 25, pol19.x + i + 100, pol19.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol19.x + i, pol19.y + 125, pol19.x + i + 100, pol19.y + 25);
		}
	}
	if (t20 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pol20.x + i, pol20.y + 25, pol20.x + i + 100, pol20.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol20.x + i, pol20.y + 125, pol20.x + i + 100, pol20.y + 25);
		}
	}
	if (t21 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 178, 34, 34, 0);
			SDL_RenderDrawLine(renderer, pol21.x + i, pol21.y + 25, pol21.x + i + 100, pol21.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol21.x + i, pol21.y + 125, pol21.x + i + 100, pol21.y + 25);
		}
	}
	if (t22 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pol22.x + i, pol22.y + 25, pol22.x + i + 100, pol22.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol22.x + i, pol22.y + 125, pol22.x + i + 100, pol22.y + 25);
		}
	}
	if (t23 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 0, 0, 128, 0);
			SDL_RenderDrawLine(renderer, pol23.x + i, pol23.y + 25, pol23.x + i + 100, pol23.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol23.x + i, pol23.y + 125, pol23.x + i + 100, pol23.y + 25);
		}
	}
	if (t24 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pol24.x + i, pol24.y + 25, pol24.x + i + 100, pol24.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol24.x + i, pol24.y + 125, pol24.x + i + 100, pol24.y + 25);
		}
	}
	if (t25 == 1)
	{
		for (int i = 22; i < 27; i++)
		{
			SDL_SetRenderDrawColor(renderer, 40, 255, 0, 0);
			SDL_RenderDrawLine(renderer, pol25.x + i, pol25.y + 25, pol25.x + i + 100, pol25.y + 100 + 25);
			SDL_RenderDrawLine(renderer, pol25.x + i, pol25.y + 125, pol25.x + i + 100, pol25.y + 25);
		}
	}

	if (h1 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 178, 34, 34, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol1.x + 75 - cos(i) * 50, pol1.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol1.x + 74 - cos(i) * 50, pol1.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol1.x + 76 - cos(i) * 50, pol1.y + 76 + sin(i) * 50);
	}

	if (h2 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 0, 255, 34, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol2.x + 75 - cos(i) * 50, pol2.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol2.x + 74 - cos(i) * 50, pol2.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol2.x + 76 - cos(i) * 50, pol2.y + 76 + sin(i) * 50);
	}

	if (h3 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 0, 0, 128, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol3.x + 75 - cos(i) * 50, pol3.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol3.x + 74 - cos(i) * 50, pol3.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol3.x + 76 - cos(i) * 50, pol3.y + 76 + sin(i) * 50);
	}

	if (h4 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 255, 255, 0, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol4.x + 75 - cos(i) * 50, pol4.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol4.x + 74 - cos(i) * 50, pol4.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol4.x + 76 - cos(i) * 50, pol4.y + 76 + sin(i) * 50);
	}

	if (h5 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 200, 150, 100, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol5.x + 75 - cos(i) * 50, pol5.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol5.x + 74 - cos(i) * 50, pol5.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol5.x + 76 - cos(i) * 50, pol5.y + 76 + sin(i) * 50);
	}

	if (h6 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 128, 0, 128, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol6.x + 75 - cos(i) * 50, pol6.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol6.x + 74 - cos(i) * 50, pol6.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol6.x + 76 - cos(i) * 50, pol6.y + 76 + sin(i) * 50);
	}

	if (h7 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol7.x + 75 - cos(i) * 50, pol7.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol7.x + 74 - cos(i) * 50, pol7.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol7.x + 76 - cos(i) * 50, pol7.y + 76 + sin(i) * 50);
	}

	if (h8 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 248, 248, 255, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol8.x + 75 - cos(i) * 50, pol8.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol8.x + 74 - cos(i) * 50, pol8.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol8.x + 76 - cos(i) * 50, pol8.y + 76 + sin(i) * 50);
	}

	if (h9 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 255, 69, 0, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol9.x + 75 - cos(i) * 50, pol9.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol9.x + 74 - cos(i) * 50, pol9.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol9.x + 76 - cos(i) * 50, pol9.y + 76 + sin(i) * 50);
	}

	if (h10 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 255, 255, 0, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol10.x + 75 - cos(i) * 50, pol10.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol10.x + 74 - cos(i) * 50, pol10.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol10.x + 76 - cos(i) * 50, pol10.y + 76 + sin(i) * 50);
	}

	if (h11 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 178, 34, 34, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol11.x + 75 - cos(i) * 50, pol11.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol11.x + 74 - cos(i) * 50, pol11.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol11.x + 76 - cos(i) * 50, pol11.y + 76 + sin(i) * 50);
	}

	if (h12 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 0, 255, 34, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol12.x + 75 - cos(i) * 50, pol12.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol12.x + 74 - cos(i) * 50, pol12.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol12.x + 76 - cos(i) * 50, pol12.y + 76 + sin(i) * 50);
	}

	if (h13 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 0, 0, 128, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol13.x + 75 - cos(i) * 50, pol13.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol13.x + 74 - cos(i) * 50, pol13.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol13.x + 76 - cos(i) * 50, pol13.y + 76 + sin(i) * 50);
	}

	if (h14 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 255, 255, 0, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol14.x + 75 - cos(i) * 50, pol14.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol14.x + 74 - cos(i) * 50, pol14.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol14.x + 76 - cos(i) * 50, pol14.y + 76 + sin(i) * 50);
	}

	if (h15 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 200, 150, 100, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol15.x + 75 - cos(i) * 50, pol15.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol15.x + 74 - cos(i) * 50, pol15.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol15.x + 76 - cos(i) * 50, pol15.y + 76 + sin(i) * 50);
	}

	if (h16 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 128, 0, 128, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol16.x + 75 - cos(i) * 50, pol16.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol16.x + 74 - cos(i) * 50, pol16.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol16.x + 76 - cos(i) * 50, pol16.y + 76 + sin(i) * 50);
	}

	if (h17 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol17.x + 75 - cos(i) * 50, pol17.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol17.x + 74 - cos(i) * 50, pol17.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol17.x + 76 - cos(i) * 50, pol17.y + 76 + sin(i) * 50);
	}

	if (h18 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 248, 248, 255, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol18.x + 75 - cos(i) * 50, pol18.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol18.x + 74 - cos(i) * 50, pol18.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol18.x + 76 - cos(i) * 50, pol18.y + 76 + sin(i) * 50);
	}

	if (h19 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 255, 69, 0, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol19.x + 75 - cos(i) * 50, pol19.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol19.x + 74 - cos(i) * 50, pol19.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol19.x + 76 - cos(i) * 50, pol19.y + 76 + sin(i) * 50);
	}

	if (h20 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 128, 0, 128, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol20.x + 75 - cos(i) * 50, pol20.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol20.x + 74 - cos(i) * 50, pol20.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol20.x + 76 - cos(i) * 50, pol20.y + 76 + sin(i) * 50);
	}

	if (h21 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 178, 34, 34, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol21.x + 75 - cos(i) * 50, pol21.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol21.x + 74 - cos(i) * 50, pol21.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol21.x + 76 - cos(i) * 50, pol21.y + 76 + sin(i) * 50);
	}

	if (h22 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 0, 255, 34, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol22.x + 75 - cos(i) * 50, pol22.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol22.x + 74 - cos(i) * 50, pol22.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol22.x + 76 - cos(i) * 50, pol22.y + 76 + sin(i) * 50);
	}

	if (h23 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 0, 0, 128, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol23.x + 75 - cos(i) * 50, pol23.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol23.x + 74 - cos(i) * 50, pol23.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol23.x + 76 - cos(i) * 50, pol23.y + 76 + sin(i) * 50);
	}

	if (h24 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 255, 255, 0, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol24.x + 75 - cos(i) * 50, pol24.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol24.x + 74 - cos(i) * 50, pol24.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol24.x + 76 - cos(i) * 50, pol24.y + 76 + sin(i) * 50);
	}

	if (h25 == 1)
	{
		SDL_SetRenderDrawColor(renderer, 200, 150, 100, 0);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol25.x + 75 - cos(i) * 50, pol25.y + 75 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol25.x + 74 - cos(i) * 50, pol25.y + 74 + sin(i) * 50);
		for (int i = 0; i < 3600; i++)
			SDL_RenderDrawPoint(renderer, pol25.x + 76 - cos(i) * 50, pol25.y + 76 + sin(i) * 50);
	}
}

int igra5na5(SDL_Renderer* renderer, SDL_Event event, int t1, int t2, int t3, int t4, int t5, int t6, int t7, int t8, int t9, int t10, int t11, int t12, int t13, int t14, int t15,
	int t16, int t17, int t18, int t19, int t20, int t21, int t22, int t23, int t24, int t25, int h1, int h2, int h3, int h4, int h5, int h6, int h7, int h8, int h9, int h10,
	int h11, int h12, int h13, int h14, int h15, int h16, int h17, int h18, int h19, int h20, int h21, int h22, int h23, int h24, int h25, int k12345)
{
	if ((t1 == 1 && t2 == 1 && t3 == 1 && t4 == 1) || (t6 == 1 && t7 == 1 && t8 == 1 && t9 == 1) || (t11 == 1 && t12 == 1 && t13 == 1 && t14 == 1) || (t16 == 1 && t17 == 1 && t18 == 1 && t19 == 1)
		|| (t21 == 1 && t22 == 1 && t23 == 1 && t24 == 1) || (t5 == 1 && t2 == 1 && t3 == 1 && t4 == 1) || (t10 == 1 && t7 == 1 && t8 == 1 && t9 == 1) || (t15 == 1 && t12 == 1 && t13 == 1 && t14 == 1)
		|| (t20 == 1 && t17 == 1 && t18 == 1 && t19 == 1) || (t25 == 1 && t22 == 1 && t23 == 1 && t24 == 1) || (t1 == 1 && t6 == 1 && t11 == 1 && t16 == 1) || (t2 == 1 && t7 == 1 && t12 == 1 && t17 == 1)
		|| (t3 == 1 && t8 == 1 && t13 == 1 && t18 == 1) || (t4 == 1 && t9 == 1 && t14 == 1 && t19 == 1) || (t5 == 1 && t10 == 1 && t15 == 1 && t20 == 1) || (t21 == 1 && t6 == 1 && t11 == 1 && t16 == 1)
		|| (t22 == 1 && t7 == 1 && t12 == 1 && t17 == 1) || (t23 == 1 && t8 == 1 && t13 == 1 && t18 == 1) || (t24 == 1 && t9 == 1 && t14 == 1 && t19 == 1) || (t25 == 1 && t10 == 1 && t15 == 1 && t20 == 1)
		|| (t5 == 1 && t9 == 1 && t13 == 1 && t17 == 1) || (t4 == 1 && t8 == 1 && t12 == 1 && t16 == 1) || (t10 == 1 && t14 == 1 && t18 == 1 && t22 == 1) || (t21 == 1 && t9 == 1 && t13 == 1 && t17 == 1)
		|| (t1 == 1 && t7 == 1 && t13 == 1 && t19 == 1) || (t2 == 1 && t8 == 1 && t14 == 1 && t20 == 1) || (t6 == 1 && t12 == 1 && t18 == 1 && t24 == 1) || (t25 == 1 && t7 == 1 && t13 == 1 && t19 == 1))
		return 1;
	if ((h1 == 1 && h2 == 1 && h3 == 1 && h4 == 1) || (h6 == 1 && h7 == 1 && h8 == 1 && h9 == 1) || (h11 == 1 && h12 == 1 && h13 == 1 && h14 == 1) || (h16 == 1 && h17 == 1 && h18 == 1 && h19 == 1)
		|| (h21 == 1 && h22 == 1 && h23 == 1 && h24 == 1) || (h5 == 1 && h2 == 1 && h3 == 1 && h4 == 1) || (h10 == 1 && h7 == 1 && h8 == 1 && h9 == 1) || (h15 == 1 && h12 == 1 && h13 == 1 && h14 == 1)
		|| (h20 == 1 && h17 == 1 && h18 == 1 && h19 == 1) || (h25 == 1 && h22 == 1 && h23 == 1 && h24 == 1) || (h1 == 1 && h6 == 1 && h11 == 1 && h16 == 1) || (h2 == 1 && h7 == 1 && h12 == 1 && h17 == 1)
		|| (h3 == 1 && h8 == 1 && h13 == 1 && h18 == 1) || (h4 == 1 && h9 == 1 && h14 == 1 && h19 == 1) || (h5 == 1 && h10 == 1 && h15 == 1 && h20 == 1) || (h21 == 1 && h6 == 1 && h11 == 1 && h16 == 1)
		|| (h22 == 1 && h7 == 1 && h12 == 1 && h17 == 1) || (h23 == 1 && h8 == 1 && h13 == 1 && h18 == 1) || (h24 == 1 && h9 == 1 && h14 == 1 && h19 == 1) || (h25 == 1 && h10 == 1 && h15 == 1 && h20 == 1)
		|| (h5 == 1 && h9 == 1 && h13 == 1 && h17 == 1) || (h4 == 1 && h8 == 1 && h12 == 1 && h16 == 1) || (h10 == 1 && h14 == 1 && h18 == 1 && h22 == 1) || (h21 == 1 && h9 == 1 && h13 == 1 && h17 == 1)
		|| (h1 == 1 && h7 == 1 && h13 == 1 && h19 == 1) || (h2 == 1 && h8 == 1 && h14 == 1 && h20 == 1) || (h6 == 1 && h12 == 1 && h18 == 1 && h24 == 1) || (h25 == 1 && h7 == 1 && h13 == 1 && h19 == 1))
		return 2;
	else
	{
		if (k12345 == 25)
		{
			return 3;
		}
		return 0;
	}


	
}
void main1(SDL_Window* window, SDL_Renderer* renderer)
{
	//задник меню
	SDL_Surface* ballImage = IMG_Load("menu.bmp");
	SDL_SetColorKey(ballImage, SDL_TRUE,
		SDL_MapRGB(ballImage->format, 255, 255, 255));
	SDL_Texture* ballTexture = SDL_CreateTextureFromSurface(renderer, ballImage);
	SDL_FreeSurface(ballImage);

	//задник игры 3 на 3
	SDL_Surface* game1 = IMG_Load("game3x3.bmp");
	SDL_SetColorKey(game1, SDL_TRUE,
		SDL_MapRGB(game1->format, 255, 255, 255));
	SDL_Texture* game3x3 = SDL_CreateTextureFromSurface(renderer, game1);
	SDL_FreeSurface(game1);

	//задник крестик победа
	SDL_Surface* kl = IMG_Load("krestwin.bmp");
	SDL_SetColorKey(kl, SDL_TRUE,
		SDL_MapRGB(kl->format, 255, 255, 255));
	SDL_Texture* krestwin = SDL_CreateTextureFromSurface(renderer, kl);
	SDL_FreeSurface(kl);

	//задник нолик победа
	SDL_Surface* kl1 = IMG_Load("nolwin.bmp");
	SDL_SetColorKey(kl1, SDL_TRUE,
		SDL_MapRGB(kl1->format, 255, 255, 255));
	SDL_Texture* nolwin = SDL_CreateTextureFromSurface(renderer, kl1);
	SDL_FreeSurface(kl1);

	//задник ничья
	SDL_Surface* kl11 = IMG_Load("draw.bmp");
	SDL_SetColorKey(kl11, SDL_TRUE,
		SDL_MapRGB(kl11->format, 255, 255, 255));
	SDL_Texture* draw = SDL_CreateTextureFromSurface(renderer, kl11);
	SDL_FreeSurface(kl11);

	TTF_Init();
	TTF_Font* my_font = TTF_OpenFont("Text.ttf", 100);
	SDL_Texture* textTexture;

	Mix_Init(0);
	Mix_OpenAudio(22050, MIX_DEFAULT_FORMAT, 2, 1024);


	int k = 0;
	char text[10];
	_itoa_s(k, text, 10);



	//SDL_Rect buttonexit = {475, 610, 280, 65};
	//SDL_Rect buttonexit = { 525, 810, 200, 65 };
	SDL_Rect buttonexit = { 500, 830, 200, 65 };
	//SDL_Rect buttonstart = { 475, 340, 280, 65 };
	//SDL_Rect buttonstart = { 500, 660, 250, 65 };
	SDL_Rect buttonstart3x3 = { 375, 685, 230, 65 };
	SDL_Rect buttonstart5x5 = { 613, 685, 230, 65 };
	SDL_Rect buttonoff = { 597, 763, 60, 60 };
	SDL_Rect buttonon = { 675, 763, 60, 60 };
	SDL_Rect buttonrestart = { 515, 670, 200, 65 };
	SDL_Rect buttonmenu = { 500, 760, 250, 65 };

	SDL_Rect pole1 = { 225, 75, 250,250 };
	SDL_Rect pole2 = { 475, 75, 250,250 };
	SDL_Rect pole3 = { 725, 75, 250,250 };
	SDL_Rect pole4 = { 225, 325, 250,250 };
	SDL_Rect pole5 = { 475, 325, 250,250 };
	SDL_Rect pole6 = { 725, 325, 250,250 };
	SDL_Rect pole7 = { 225, 575, 250,250 };
	SDL_Rect pole8 = { 475, 575, 250,250 };
	SDL_Rect pole9 = { 725, 575, 250,250 };

	int k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0, k6 = 0, k7 = 0, k8 = 0, k9 = 0;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;
	int hod = 0, pobeda = 0, pobeda1 = 0;
	int koordxmenu = 0, koordymenu = 0;
	int koordxmenu1 = 0, koordymenu1 = 0;
	int koordx = 0, koordy = 0;
	int koordx1 = 0, koordy1 = 0;
	int mp = 0, kost = 0;
	int k123 = 0;
	int k12345 = 0;
	int mpp = 0;

	SDL_Rect pol1 = { 225, 75, 150,150 };
	SDL_Rect pol2 = { 375, 75, 150,150 };
	SDL_Rect pol3 = { 525, 75, 150,150 };
	SDL_Rect pol4 = { 675, 75, 150,150 };
	SDL_Rect pol5 = { 825, 75, 150,150 };

	SDL_Rect pol6 = { 225, 225, 150,150 };
	SDL_Rect pol7 = { 375, 225, 150,150 };
	SDL_Rect pol8 = { 525, 225, 150,150 };
	SDL_Rect pol9 = { 675, 225, 150,150 };
	SDL_Rect pol10 = { 825, 225, 150,150 };

	SDL_Rect pol11 = { 225, 375, 150,150 };
	SDL_Rect pol12 = { 375, 375, 150,150 };
	SDL_Rect pol13 = { 525, 375, 150,150 };
	SDL_Rect pol14 = { 675, 375, 150,150 };
	SDL_Rect pol15 = { 825, 375, 150,150 };

	SDL_Rect pol16 = { 225, 525, 150,150 };
	SDL_Rect pol17 = { 375, 525, 150,150 };
	SDL_Rect pol18 = { 525, 525, 150,150 };
	SDL_Rect pol19 = { 675, 525, 150,150 };
	SDL_Rect pol20 = { 825, 525, 150,150 };

	SDL_Rect pol21 = { 225, 675, 150,150 };
	SDL_Rect pol22 = { 375, 675, 150,150 };
	SDL_Rect pol23 = { 525, 675, 150,150 };
	SDL_Rect pol24 = { 675, 675, 150,150 };
	SDL_Rect pol25 = { 825, 675, 150,150 };

	int t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0, t10 = 0, t11 = 0, t12 = 0, t13 = 0, t14 = 0, t15 = 0, t16 = 0, t17 = 0, t18 = 0, t19 = 0, t20 = 0, t21 = 0, t22 = 0, t23 = 0, t24 = 0, t25 = 0;
	int h1 = 0, h2 = 0, h3 = 0, h4 = 0, h5 = 0, h6 = 0, h7 = 0, h8 = 0, h9 = 0, h10 = 0, h11 = 0, h12 = 0, h13 = 0, h14 = 0, h15 = 0, h16 = 0, h17 = 0, h18 = 0, h19 = 0, h20 = 0, h21 = 0, h22 = 0, h23 = 0, h24 = 0, h25 = 0;


	SDL_Event event;
	bool quit = false;

	int x1 = 0, exit1 = 0;

	loadmusic();

	while (!quit)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
				quit = true;
			if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT)
				if (esliknopkanawata(buttonexit, event.button.x, event.button.y))
					if (exit1 == 0)
						quit = true;

			if (x1 == 0)
			{
				SDL_Rect mubo = { 0,0,1200,900 };
				SDL_RenderCopy(renderer, ballTexture, NULL, &mubo);
				if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 0)
				{
					if (esliknopkanawata(buttonstart3x3, event.button.x, event.button.y))
					{
						koordxmenu = event.button.x;
						koordymenu = event.button.y;
						x1 = x1 + 1;
						exit1 = 1;
					}
				}
				if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 0)
				{
					if (esliknopkanawata(buttonstart5x5, event.button.x, event.button.y))
					{
						koordxmenu1 = event.button.x;
						koordymenu1 = event.button.y;
						x1 = 2;
						exit1 = 1;
					}
				}

				if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 0)
				{
					if (esliknopkanawata(buttonoff, event.button.x, event.button.y))
					{
						Mix_PauseMusic();
						//Mix_ResumeMusic()
					}
				}

				if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 0)
				{
					if (esliknopkanawata(buttonon, event.button.x, event.button.y))
					{
						//Mix_PauseMusic();
						Mix_ResumeMusic();
					}
				}
			}
			if (x1 == 1)
			{
				SDL_Rect mubo = { 0,0,1200,900 };
				SDL_RenderCopy(renderer, game3x3, NULL, &mubo);
				polya3na3(renderer, event, pole1, pole2, pole3, pole4, pole5, pole6, pole7, pole8, pole9, k1, k2, k3, k4, k5, k6, k7, k8, k9, n1, n2, n3, n4, n5, n6, n7, n8, n9);

				if (mp == 1)
				{
					k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0, k6 = 0, k7 = 0, k8 = 0, k9 = 0;
					n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;
					mp = 0;
					k123 = 0;
					hod = 0;
				}

				if (x1 == x1)
				{
					for (pobeda = 0; pobeda < 9; pobeda++)
					{

						if (hod == 0)
						{
							int x11 = 1;

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k1 == 0 && x11 == 1 && n1 == 0)
							{
								if (esliknopkanawata(pole1, event.button.x, event.button.y))
								{
									k1 = 1;
									hod = 1;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k2 == 0 && x11 == 1 && n2 == 0)
							{
								if (esliknopkanawata(pole2, event.button.x, event.button.y))
								{
									k2 = 1;
									hod = 1;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k3 == 0 && x11 == 1 && n3 == 0)
							{
								if (esliknopkanawata(pole3, event.button.x, event.button.y))
								{
									k3 = 1;
									hod = 1;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k4 == 0 && x11 == 1 && n4 == 0)
							{
								if (esliknopkanawata(pole4, event.button.x, event.button.y))
								{
									k4 = 1;
									hod = 1;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k5 == 0 && x11 == 1 && n5 == 0)
							{
								if (esliknopkanawata(pole5, event.button.x, event.button.y))
								{
									k5 = 1;
									hod = 1;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k6 == 0 && x11 == 1 && n6 == 0)
							{
								if (esliknopkanawata(pole6, event.button.x, event.button.y))
								{
									k6 = 1;
									hod = 1;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k7 == 0 && x11 == 1 && n7 == 0 && event.button.x != koordxmenu && event.button.y != koordymenu)
							{
								if (esliknopkanawata(pole7, event.button.x, event.button.y))
								{
									k7 = 1;
									hod = 1;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k8 == 0 && x11 == 1 && n8 == 0 && event.button.x != koordxmenu && event.button.y != koordymenu)
							{
								if (esliknopkanawata(pole8, event.button.x, event.button.y))
								{
									k8 = 1;
									hod = 1;
									k123++;
									koordx = event.button.x;
									koordy = event.button.y;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k9 == 0 && x11 == 1 && n9 == 0)
							{
								if (esliknopkanawata(pole9, event.button.x, event.button.y))
								{
									k9 = 1;
									hod = 1;
									k123++;
								}
							}
						}

						if (hod == 1)
						{
							int x11 = 1;
							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k1 == 0 && x11 == 1 && n1 == 0)
							{
								if (esliknopkanawata(pole1, event.button.x, event.button.y))
								{
									n1 = 1;
									hod = 0;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k2 == 0 && x11 == 1 && n2 == 0)
							{
								if (esliknopkanawata(pole2, event.button.x, event.button.y))
								{
									n2 = 1;
									hod = 0;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k3 == 0 && x11 == 1 && n3 == 0)
							{
								if (esliknopkanawata(pole3, event.button.x, event.button.y))
								{
									n3 = 1;
									hod = 0;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k4 == 0 && x11 == 1 && n4 == 0)
							{
								if (esliknopkanawata(pole4, event.button.x, event.button.y))
								{
									n4 = 1;
									hod = 0;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k5 == 0 && x11 == 1 && n5 == 0 && event.button.x != koordxmenu && event.button.y != koordymenu)
							{
								if (esliknopkanawata(pole5, event.button.x, event.button.y))
								{
									n5 = 1;
									hod = 0;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k6 == 0 && x11 == 1 && n6 == 0)
							{
								if (esliknopkanawata(pole6, event.button.x, event.button.y))
								{
									n6 = 1;
									hod = 0;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k7 == 0 && x11 == 1 && n7 == 0)
							{
								if (esliknopkanawata(pole7, event.button.x, event.button.y))
								{
									n7 = 1;
									hod = 0;
									k123++;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k8 == 0 && x11 == 1 && n8 == 0)
							{
								if (esliknopkanawata(pole8, event.button.x, event.button.y))
								{
									n8 = 1;
									hod = 0;
									k123++;
									koordx = event.button.x;
									koordy = event.button.y;
								}
							}

							if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && k9 == 0 && x11 == 1 && n9 == 0)
							{
								if (esliknopkanawata(pole9, event.button.x, event.button.y))
								{
									n9 = 1;
									hod = 0;
									k123++;
								}
							}
						}
						if (igra3x3(renderer, event, k1, k2, k3, k4, k5, k6, k7, k8, k9, n1, n2, n3, n4, n5, n6, n7, n8, n9, k123) == 1)
						{
							x1 = 21;
							mp = 1;
						}
						if (igra3x3(renderer, event, k1, k2, k3, k4, k5, k6, k7, k8, k9, n1, n2, n3, n4, n5, n6, n7, n8, n9, k123) == 2)
						{
							x1 = 22;
							mp = 1;
						}
					}
				}
				if (igra3x3(renderer, event, k1, k2, k3, k4, k5, k6, k7, k8, k9, n1, n2, n3, n4, n5, n6, n7, n8, n9, k123) == 3)
				{
					x1 = 23;
					mp = 1;
				}

			}


			if (x1 == 21)
			{
				SDL_Rect mubo = { 0,0,1200,900 };
				SDL_RenderCopy(renderer, krestwin, NULL, &mubo);
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 21 && event.button.x != koordx && event.button.y != koordy)
				{
					if (esliknopkanawata(buttonrestart, event.button.x, event.button.y))
					{
						x1 = 1;
					}
				}
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 21 && event.button.x != koordx && event.button.y != koordy)
				{
					if (esliknopkanawata(buttonmenu, event.button.x, event.button.y))
					{
						x1 = 0;
					}
				}
			}


			if (x1 == 22)
			{
				SDL_Rect mubo = { 0,0,1200,900 };
				SDL_RenderCopy(renderer, nolwin, NULL, &mubo);
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 22 && event.button.x != koordx && event.button.y != koordy)
				{
					if (esliknopkanawata(buttonrestart, event.button.x, event.button.y))
					{
						x1 = 1;
					}
				}
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 22 && event.button.x != koordx && event.button.y != koordy)
				{
					if (esliknopkanawata(buttonmenu, event.button.x, event.button.y))
					{
						x1 = 0;
					}
				}
			}


			if (x1 == 23)
			{
				SDL_Rect mubo = { 0,0,1200,900 };
				SDL_RenderCopy(renderer, draw, NULL, &mubo);
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 23 && event.button.x != koordx && event.button.y != koordy)
				{
					if (esliknopkanawata(buttonrestart, event.button.x, event.button.y))
					{
						x1 = 1;
					}
				}
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 23 && event.button.x != koordx && event.button.y != koordy)
				{
					if (esliknopkanawata(buttonmenu, event.button.x, event.button.y))
					{
						x1 = 0;
					}
				}
			}



			if (x1 == 2)
			{
				SDL_Rect mubo = { 0,0,1200,900 };
				SDL_RenderCopy(renderer, game3x3, NULL, &mubo);
				polya5x5(renderer, event, pol1, pol2, pol3, pol4, pol5,
					pol6, pol7, pol8, pol9, pol10, pol11, pol12, pol13, pol14, pol15, pol16,
					pol17, pol18, pol19, pol20, pol21, pol22, pol23, pol24, pol25,
					t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21,
					t22, t23, t24, t25, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11, h12, h13, h14, h15, h16, h17,
					h18, h19, h20, h21, h22, h23, h24, h25);

				if (mpp == 1)
				{
					t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0, t10 = 0, t11 = 0, t12 = 0, t13 = 0, t14 = 0, t15 = 0, t16 = 0, t17 = 0, t18 = 0, t19 = 0, t20 = 0, t21 = 0, t22 = 0, t23 = 0, t24 = 0, t25 = 0;
					h1 = 0, h2 = 0, h3 = 0, h4 = 0, h5 = 0, h6 = 0, h7 = 0, h8 = 0, h9 = 0, h10 = 0, h11 = 0, h12 = 0, h13 = 0, h14 = 0, h15 = 0, h16 = 0, h17 = 0, h18 = 0, h19 = 0, h20 = 0, h21 = 0, h22 = 0, h23 = 0, h24 = 0, h25 = 0;
					mpp = 0;
					k12345 = 0;
					hod = 0;
				}

				for (pobeda1 = 0; pobeda1 < 25; pobeda1++)
				{

					if (hod == 0)
					{
						int x11 = 1;

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t1 == 0 && x11 == 1 && h1 == 0)
						{
							if (esliknopkanawata(pol1, event.button.x, event.button.y))
							{
								t1 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t2 == 0 && x11 == 1 && h2 == 0)
						{
							if (esliknopkanawata(pol2, event.button.x, event.button.y))
							{
								t2 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t3 == 0 && x11 == 1 && h3 == 0)
						{
							if (esliknopkanawata(pol3, event.button.x, event.button.y))
							{
								t3 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t4 == 0 && x11 == 1 && h4 == 0)
						{
							if (esliknopkanawata(pol4, event.button.x, event.button.y))
							{
								t4 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t5 == 0 && x11 == 1 && h5 == 0)
						{
							if (esliknopkanawata(pol5, event.button.x, event.button.y))
							{
								t5 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t6 == 0 && x11 == 1 && h6 == 0)
						{
							if (esliknopkanawata(pol6, event.button.x, event.button.y))
							{
								t6 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t7 == 0 && x11 == 1 && h7 == 0)
						{
							if (esliknopkanawata(pol7, event.button.x, event.button.y))
							{
								t7 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t8 == 0 && x11 == 1 && h8 == 0)
						{
							if (esliknopkanawata(pol8, event.button.x, event.button.y))
							{
								t8 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t9 == 0 && x11 == 1 && h9 == 0)
						{
							if (esliknopkanawata(pol9, event.button.x, event.button.y))
							{
								t9 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t10 == 0 && x11 == 1 && h10 == 0)
						{
							if (esliknopkanawata(pol10, event.button.x, event.button.y))
							{
								t10 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t11 == 0 && x11 == 1 && h11 == 0)
						{
							if (esliknopkanawata(pol11, event.button.x, event.button.y))
							{
								t11 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t12 == 0 && x11 == 1 && h12 == 0)
						{
							if (esliknopkanawata(pol12, event.button.x, event.button.y))
							{
								t12 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t13 == 0 && x11 == 1 && h13 == 0)
						{
							if (esliknopkanawata(pol13, event.button.x, event.button.y))
							{
								t13 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t14 == 0 && x11 == 1 && h14 == 0)
						{
							if (esliknopkanawata(pol14, event.button.x, event.button.y))
							{
								t14 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t15 == 0 && x11 == 1 && h15 == 0)
						{
							if (esliknopkanawata(pol15, event.button.x, event.button.y))
							{
								t15 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t16 == 0 && x11 == 1 && h16 == 0)
						{
							if (esliknopkanawata(pol16, event.button.x, event.button.y))
							{
								t16 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t17 == 0 && x11 == 1 && h17 == 0)
						{
							if (esliknopkanawata(pol17, event.button.x, event.button.y))
							{
								t17 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t18 == 0 && x11 == 1 && h18 == 0)
						{
							if (esliknopkanawata(pol18, event.button.x, event.button.y))
							{
								t18 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t19 == 0 && x11 == 1 && h19 == 0)
						{
							if (esliknopkanawata(pol19, event.button.x, event.button.y))
							{
								t19 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t20 == 0 && x11 == 1 && h20 == 0)
						{
							if (esliknopkanawata(pol20, event.button.x, event.button.y))
							{
								t20 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t21 == 0 && x11 == 1 && h21 == 0)
						{
							if (esliknopkanawata(pol21, event.button.x, event.button.y))
							{
								t21 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t22 == 0 && x11 == 1 && h22 == 0)
						{
							if (esliknopkanawata(pol22, event.button.x, event.button.y))
							{
								t22 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t23 == 0 && x11 == 1 && h23 == 0 && event.button.x != koordxmenu1 && event.button.y != koordymenu1)
						{
							if (esliknopkanawata(pol23, event.button.x, event.button.y))
							{
								t23 = 1;
								hod = 1;
								k12345++;
								koordx1 = event.button.x;
								koordy1 = event.button.y;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t24 == 0 && x11 == 1 && h24 == 0 && event.button.x != koordxmenu1 && event.button.y != koordymenu1)
						{
							if (esliknopkanawata(pol24, event.button.x, event.button.y))
							{
								t24 = 1;
								hod = 1;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t25 == 0 && x11 == 1 && h25 == 0)
						{
							if (esliknopkanawata(pol25, event.button.x, event.button.y))
							{
								t25 = 1;
								hod = 1;
								k12345++;
							}
						}

					}

					if (hod == 1)
					{
						int x11 = 1;
						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t1 == 0 && x11 == 1 && h1 == 0)
						{
							if (esliknopkanawata(pol1, event.button.x, event.button.y))
							{
								h1 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t2 == 0 && x11 == 1 && h2 == 0)
						{
							if (esliknopkanawata(pol2, event.button.x, event.button.y))
							{
								h2 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t3 == 0 && x11 == 1 && h3 == 0)
						{
							if (esliknopkanawata(pol3, event.button.x, event.button.y))
							{
								h3 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t4 == 0 && x11 == 1 && h4 == 0)
						{
							if (esliknopkanawata(pol4, event.button.x, event.button.y))
							{
								h4 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t5 == 0 && x11 == 1 && h5 == 0)
						{
							if (esliknopkanawata(pol5, event.button.x, event.button.y))
							{
								h5 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t6 == 0 && x11 == 1 && h6 == 0)
						{
							if (esliknopkanawata(pol6, event.button.x, event.button.y))
							{
								h6 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t7 == 0 && x11 == 1 && h7 == 0)
						{
							if (esliknopkanawata(pol7, event.button.x, event.button.y))
							{
								h7 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t8 == 0 && x11 == 1 && h8 == 0)
						{
							if (esliknopkanawata(pol8, event.button.x, event.button.y))
							{
								h8 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t9 == 0 && x11 == 1 && h9 == 0)
						{
							if (esliknopkanawata(pol9, event.button.x, event.button.y))
							{
								h9 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t10 == 0 && x11 == 1 && h10 == 0)
						{
							if (esliknopkanawata(pol10, event.button.x, event.button.y))
							{
								h10 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t11 == 0 && x11 == 1 && h11 == 0)
						{
							if (esliknopkanawata(pol11, event.button.x, event.button.y))
							{
								h11 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t12 == 0 && x11 == 1 && h12 == 0)
						{
							if (esliknopkanawata(pol12, event.button.x, event.button.y))
							{
								h12 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t13 == 0 && x11 == 1 && h13 == 0)
						{
							if (esliknopkanawata(pol13, event.button.x, event.button.y))
							{
								h13 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t14 == 0 && x11 == 1 && h14 == 0)
						{
							if (esliknopkanawata(pol14, event.button.x, event.button.y))
							{
								h14 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t15 == 0 && x11 == 1 && h15 == 0)
						{
							if (esliknopkanawata(pol15, event.button.x, event.button.y))
							{
								h15 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t16 == 0 && x11 == 1 && h16 == 0)
						{
							if (esliknopkanawata(pol16, event.button.x, event.button.y))
							{
								h16 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t17 == 0 && x11 == 1 && h17 == 0)
						{
							if (esliknopkanawata(pol17, event.button.x, event.button.y))
							{
								h17 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t18 == 0 && x11 == 1 && h18 == 0)
						{
							if (esliknopkanawata(pol18, event.button.x, event.button.y))
							{
								h18 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t19 == 0 && x11 == 1 && h19 == 0)
						{
							if (esliknopkanawata(pol19, event.button.x, event.button.y))
							{
								h19 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t20 == 0 && x11 == 1 && h20 == 0)
						{
							if (esliknopkanawata(pol20, event.button.x, event.button.y))
							{
								h20 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t21 == 0 && x11 == 1 && h21 == 0)
						{
							if (esliknopkanawata(pol21, event.button.x, event.button.y))
							{
								h21 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t22 == 0 && x11 == 1 && h22 == 0)
						{
							if (esliknopkanawata(pol22, event.button.x, event.button.y))
							{
								h22 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t23 == 0 && x11 == 1 && h23 == 0)
						{
							if (esliknopkanawata(pol23, event.button.x, event.button.y))
							{
								h23 = 1;
								hod = 0;
								k12345++;
								koordx1 = event.button.x;
								koordy1 = event.button.y;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t24 == 0 && x11 == 1 && h24 == 0)
						{
							if (esliknopkanawata(pol24, event.button.x, event.button.y))
							{
								h24 = 1;
								hod = 0;
								k12345++;
							}
						}

						if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && t25 == 0 && x11 == 1 && h25 == 0)
						{
							if (esliknopkanawata(pol25, event.button.x, event.button.y))
							{
								h25 = 1;
								hod = 0;
								k12345++;
							}
						}
					}
					if (igra5na5(renderer, event,
						t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21,
						t22, t23, t24, t25, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11, h12, h13, h14, h15, h16, h17,
						h18, h19, h20, h21, h22, h23, h24, h25, k12345) == 1)
					{
						x1 = 31;
						mpp = 1;
					}
					if (igra5na5(renderer, event,
						t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21,
						t22, t23, t24, t25, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11, h12, h13, h14, h15, h16, h17,
						h18, h19, h20, h21, h22, h23, h24, h25, k12345) == 2)
					{
						x1 = 32;
						mpp = 1;
					}
				}
				if (igra5na5(renderer, event,
					t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21,
					t22, t23, t24, t25, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11, h12, h13, h14, h15, h16, h17,
					h18, h19, h20, h21, h22, h23, h24, h25, k12345) == 3)
				{
					x1 = 33;
					mpp = 1;
				}
			}
			
			if (x1 == 31)
			{
				SDL_Rect mubo = { 0,0,1200,900 };
				SDL_RenderCopy(renderer, krestwin, NULL, &mubo);
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 31 && event.button.x != koordx1 && event.button.y != koordy1)
				{
					if (esliknopkanawata(buttonrestart, event.button.x, event.button.y))
					{
						x1 = 2;
					}
				}
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 31 && event.button.x != koordx1 && event.button.y != koordy1)
				{
					if (esliknopkanawata(buttonmenu, event.button.x, event.button.y))
					{
						x1 = 0;
					}
				}
			}

			if (x1 == 32)
			{
				SDL_Rect mubo = { 0,0,1200,900 };
				SDL_RenderCopy(renderer, nolwin, NULL, &mubo);
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 32 && event.button.x != koordx1 && event.button.y != koordy1)
				{
					if (esliknopkanawata(buttonrestart, event.button.x, event.button.y))
					{
						x1 = 2;
					}
				}
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 32 && event.button.x != koordx1 && event.button.y != koordy1)
				{
					if (esliknopkanawata(buttonmenu, event.button.x, event.button.y))
					{
						x1 = 0;
					}
				}
			}

			if (x1 == 33)
			{
				SDL_Rect mubo = { 0,0,1200,900 };
				SDL_RenderCopy(renderer, draw, NULL, &mubo);
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 33 && event.button.x != koordx1 && event.button.y != koordy1)
				{
					if (esliknopkanawata(buttonrestart, event.button.x, event.button.y))
					{
						x1 = 2;
					}
				}
				if (SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT && x1 == 33 && event.button.x != koordx1 && event.button.y != koordy1)
				{
					if (esliknopkanawata(buttonmenu, event.button.x, event.button.y))
					{
						x1 = 0;
					}
				}
			}







			


		}
			//SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
			//SDL_RenderDrawRect(renderer, &buttonoff);
			SDL_RenderPresent(renderer);
	}	
		
	
	




	
	SDL_DestroyTexture(draw);
	SDL_DestroyTexture(nolwin);
	SDL_DestroyTexture(krestwin);
	SDL_DestroyTexture(ballTexture);
	SDL_DestroyTexture(game3x3);
	TTF_CloseFont(my_font);
	TTF_Quit();
	Mix_FreeMusic(fon);
	Mix_FreeChunk(Sound);
	Mix_CloseAudio();
}