#include "../headers/header.h"

/**
 * Process input when a key is pressed down.
 * @event: SDL event containing information about the key press.
*/
void SDL_KEYDOWN_FUNC(SDL_Event event)
{
	if (event.key.keysym.sym == SDLK_ESCAPE)
		GameRunning = false;
	if (event.key.keysym.sym == SDLK_UP)
		player.walkDirection = +1;
	if (event.key.keysym.sym == SDLK_DOWN)
		player.walkDirection = -1;
	if (event.key.keysym.sym == SDLK_RIGHT)
		player.turnDirection = +1;
	if (event.key.keysym.sym == SDLK_LEFT)
		player.turnDirection = -1;
	if (event.key.keysym.sym == SDLK_w)
		player.walkDirection = +1;
	if (event.key.keysym.sym == SDLK_s)
		player.walkDirection = -1;
	if (event.key.keysym.sym == SDLK_a)
		player.turnDirection = -1;
	if (event.key.keysym.sym == SDLK_d)
		player.turnDirection = +1;
}

/**
 * Process input when a key is released.
 * @event: SDL event containing information about the key release.
*/
void SDL_KEYUP_FUNC(SDL_Event event)
{
	if (event.key.keysym.sym == SDLK_UP)
		player.walkDirection = 0;
	if (event.key.keysym.sym == SDLK_DOWN)
		player.walkDirection = 0;
	if (event.key.keysym.sym == SDLK_RIGHT)
		player.turnDirection = 0;
	if (event.key.keysym.sym == SDLK_LEFT)
		player.turnDirection = 0;
	if (event.key.keysym.sym == SDLK_w)
		player.walkDirection = 0;
	if (event.key.keysym.sym == SDLK_s)
		player.walkDirection = 0;
	if (event.key.keysym.sym == SDLK_a)
		player.turnDirection = 0;
	if (event.key.keysym.sym == SDLK_d)
		player.turnDirection = 0;
}

/**
 * Process keyboard input events.
*/
void handleInput(void)
{
	SDL_Event event;

	SDL_PollEvent(&event);

	if (event.type == SDL_QUIT)
		GameRunning = false;
	else if (event.type == SDL_KEYDOWN)
		SDL_KEYDOWN_FUNC(event);
	else if (event.type == SDL_KEYUP)
		SDL_KEYUP_FUNC(event);
}
