#pragma once
bool esliknopkanawata(SDL_Rect bud, int x, int y);
void loadmusic();
void sound();
void polya3na3(SDL_Renderer* renderer, SDL_Event event, SDL_Rect pole1, SDL_Rect pole2, SDL_Rect pole3, SDL_Rect pole4, SDL_Rect pole5, SDL_Rect pole6, SDL_Rect pole7, SDL_Rect pole8,
	SDL_Rect pole9, int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8, int k9, int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9);
int igra3x3(SDL_Renderer* renderer, SDL_Event event, int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8, int k9, int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int k123);
void polya5x5(SDL_Renderer* renderer, SDL_Event event, SDL_Rect pol1, SDL_Rect pol2, SDL_Rect pol3, SDL_Rect pol4, SDL_Rect pol5,
	SDL_Rect pol6, SDL_Rect pol7, SDL_Rect pol8, SDL_Rect pol9, SDL_Rect pol10, SDL_Rect pol11, SDL_Rect pol12, SDL_Rect pol13, SDL_Rect pol14, SDL_Rect pol15, SDL_Rect pol16,
	SDL_Rect pol17, SDL_Rect pol18, SDL_Rect pol19, SDL_Rect pol20, SDL_Rect pol21, SDL_Rect pol22, SDL_Rect pol23, SDL_Rect pol24, SDL_Rect pol25,
	int t1, int t2, int t3, int t4, int t5, int t6, int t7, int t8, int t9, int t10, int t11, int t12, int t13, int t14, int t15, int t16, int t17, int t18, int t19, int t20, int t21,
	int t22, int t23, int t24, int t25, int h1, int h2, int h3, int h4, int h5, int h6, int h7, int h8, int h9, int h10, int h11, int h12, int h13, int h14, int h15, int h16, int h17,
	int h18, int h19, int h20, int h21, int h22, int h23, int h24, int h25);
int igra5na5(SDL_Renderer* renderer, SDL_Event event, int t1, int t2, int t3, int t4, int t5, int t6, int t7, int t8, int t9, int t10, int t11, int t12, int t13, int t14, int t15,
	int t16, int t17, int t18, int t19, int t20, int t21, int t22, int t23, int t24, int t25, int h1, int h2, int h3, int h4, int h5, int h6, int h7, int h8, int h9, int h10,
	int h11, int h12, int h13, int h14, int h15, int h16, int h17, int h18, int h19, int h20, int h21, int h22, int h23, int h24, int h25, int k12345);
void main1(SDL_Window* window, SDL_Renderer* renderer);