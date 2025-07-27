#include "tgaimage.h"
#include <iostream>

const TGAColor white{255, 255, 255, 255};
const TGAColor red{255, 0,   0,   255};
int main(int argc, char** argv) {
        TGAImage image(100, 100, TGAImage::RGB);
        image.flip_vertically(); // i want to have the origin at the left bottom corner of the image
        for(auto i = 0; i < image.width(); i++) {
                for(auto j = 0; j < image.height(); j++) {
                        if (i == j) {
                                image.set(i, j, white);
                        } else {
                                image.set(i, j, red);
                        }
                }       

        }
        image.write_tga_file("../../../../output/output.tga");

        return 0;
}