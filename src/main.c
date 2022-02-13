#include <gb/gb.h>
#include <stdio.h>
#include "testSprites.c"

void main() {
  printf("HELLO\n");
  printf("ASA\n");
  printf("NOA\n");
  printf("IRA");


  int8_t totalSprites = 3;
  int8_t currentSpriteIndex = 1;
  set_sprite_data(0, totalSprites, testSprites);
  set_sprite_tile(0, currentSpriteIndex);
  move_sprite(0, 88, 78);
  SHOW_SPRITES;

  while(1) {
    switch(joypad()) {
      case J_UP:
        scroll_sprite(0,0,-10);
        break;
      case J_DOWN:
        scroll_sprite(0,0,10);
        break;
      case J_LEFT:
        scroll_sprite(0,-10,0);
        break;
      case J_RIGHT:
        scroll_sprite(0,10,0);
        break;
      case J_A:
        currentSpriteIndex++;
        break;
      case J_B:
        currentSpriteIndex--;
        break;
    }
    if (currentSpriteIndex > totalSprites - 1) {
      currentSpriteIndex = totalSprites - 1;
    }
    if (currentSpriteIndex < 0) {
      currentSpriteIndex = 0;
    }
    set_sprite_tile(0,currentSpriteIndex);

    delay(200);
  }

}
