#include <iostream>
#include <vector>
#include <random>

class ImageSensor {
private:
    int width;
    int height;
    std::vector<std::vector<int>> pixels;

public:
    ImageSensor(int w, int h) : width(w), height(h) {
        pixels.resize(height, std::vector<int>(width, 0));
    }

    void captureFrame() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> light(0, 255);

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                pixels[y][x] = light(gen); // simulate brightness
            }
        }
    }

    void printSample(int rows = 10, int cols = 10) {
        for (int y = 0; y < rows && y < height; y++) {
            for (int x = 0; x < cols && x < width; x++) {
                std::cout << pixels[y][x] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    ImageSensor sensor(640, 480);

    sensor.captureFrame();

    std::cout << "Sample pixels from captured frame:\n";
    sensor.printSample();

    return 0;
}
