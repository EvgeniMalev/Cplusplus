#include <SDL2/SDL.h>
#include <iostream>

const int WIDTH = 128;
const int HEIGHT = 64;
const int SCALE = 5;  // Scale up for visibility

bool buffer[HEIGHT][WIDTH];  // Monochrome buffer

void setPixel(int x, int y, bool color) {
    if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT)
        buffer[y][x] = color;
}

void drawTestPattern() {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            buffer[y][x] = false; // Clear screen
        }
    }

    // Draw diagonal line
    for (int i = 0; i < HEIGHT && i < WIDTH; i++) {
        setPixel(i, i, true);
    }
}

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << "SDL Init Error\n";
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("Monochrome Display",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        WIDTH * SCALE, HEIGHT * SCALE, SDL_WINDOW_SHOWN);

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    drawTestPattern();

    bool running = true;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT)
                running = false;
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Black background
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // White pixels

        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                if (buffer[y][x]) {
                    SDL_Rect pixel = { x * SCALE, y * SCALE, SCALE, SCALE };
                    SDL_RenderFillRect(renderer, &pixel);
                }
            }
        }

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
