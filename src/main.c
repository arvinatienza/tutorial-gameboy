#include <gb/gb.h>
#include <stdio.h>
#include "testSprites.c"

void main() {
  printf("HELLO\n");
  printf("ASA\n");
  printf("NOA\n");
  printf("IRA");
  set_sprite_data(0,3,testSprites);
  set_sprite_tile(0,1);
  move_sprite(0, 88, 78);
  SHOW_SPRITES;
}
