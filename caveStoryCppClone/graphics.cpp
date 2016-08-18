#include <SDL.h>
#include "graphics.h"

/* Graphics class
 * Holds all information about the graphics in this game.
 */

Graphics::Graphics() {
	SDL_CreateWindowAndRenderer(640, 480, 0, &this->_window, &this->_renderer);
	SDL_SetWindowTitle(this->_window, "Cavestory");
}

Graphics::~Graphics() {
	SDL_DestroyWindow(this->_window);
	SDL_DestroyRenderer(this->_renderer);
}