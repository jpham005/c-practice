#ifndef __SHAPE_H__
#define __SHAPE_H__

const int sz_tetrimino_shape = 4;

// https://strategywiki.org/wiki/Tetris/Rotation_systems#Sega_rotation_system
const int tetrimino_shapes[7][4][16] = {
    { // I_TETRIMINO
        {0, 0, 0, 0,
         1, 1, 1, 1,
         0, 0, 0, 0,
         0, 0, 0, 0},

        {0, 0, 1, 0,
         0, 0, 1, 0,
         0, 0, 1, 0,
         0, 0, 1, 0},

        {0, 0, 0, 0,
         1, 1, 1, 1,
         0, 0, 0, 0,
         0, 0, 0, 0},
         
        {0, 0, 1, 0,
         0, 0, 1, 0,
         0, 0, 1, 0,
         0, 0, 1, 0},
    },

    { // J_TETRIMINO
        {0, 0, 0, 0,
         1, 1, 1, 0,
         0, 0, 1, 0,
         0, 0, 0, 0},

        {0, 1, 0, 0,
         0, 1, 0, 0,
         1, 1, 0, 0,
         0, 0, 0, 0},

        {0, 0, 0, 0,
         1, 0, 0, 0,
         1, 1, 1, 0,
         0, 0, 0, 0},
         
        {0, 1, 1, 0,
         0, 1, 0, 0,
         0, 1, 0, 0,
         0, 0, 0, 0},
    },

    { // L_TETRIMINO
        {0, 0, 0, 0,
         1, 1, 1, 0,
         1, 0, 0, 0,
         0, 0, 0, 0},

        {1, 1, 0, 0,
         0, 1, 0, 0,
         0, 1, 0, 0,
         0, 0, 0, 0},

        {0, 0, 0, 0,
         0, 0, 1, 0,
         1, 1, 1, 0,
         0, 0, 0, 0},
         
        {0, 1, 0, 0,
         0, 1, 0, 0,
         0, 1, 1, 0,
         0, 0, 0, 0},
    },

    { // S_TETRIMINO
        {0, 0, 0, 0,
         0, 1, 1, 0,
         1, 1, 0, 0,
         0, 0, 0, 0},

        {1, 0, 0, 0,
         1, 1, 0, 0,
         0, 1, 0, 0,
         0, 0, 0, 0},

        {0, 0, 0, 0,
         0, 1, 1, 0,
         1, 1, 0, 0,
         0, 0, 0, 0},
         
        {1, 0, 0, 0,
         1, 1, 0, 0,
         0, 1, 0, 0,
         0, 0, 0, 0},
    },

    { // T_TETRIMINO
        {0, 0, 0, 0,
         1, 1, 1, 0,
         0, 1, 0, 0,
         0, 0, 0, 0},

        {0, 1, 0, 0,
         1, 1, 0, 0,
         0, 1, 0, 0,
         0, 0, 0, 0},

        {0, 1, 0, 0,
         1, 1, 1, 0,
         0, 0, 0, 0,
         0, 0, 0, 0},
         
        {0, 1, 0, 0,
         0, 1, 1, 0,
         0, 1, 0, 0,
         0, 0, 0, 0},
    },

    { // Z_TETRIMINO
        {0, 0, 0, 0,
         1, 1, 0, 0,
         0, 1, 1, 0,
         0, 0, 0, 0},

        {0, 0, 1, 0,
         0, 1, 1, 0,
         0, 1, 0, 0,
         0, 0, 0, 0},

        {0, 0, 0, 0,
         1, 1, 0, 0,
         0, 1, 1, 0,
         0, 0, 0, 0},
         
        {0, 0, 1, 0,
         0, 1, 1, 0,
         0, 1, 0, 0,
         0, 0, 0, 0},
    },

    { // O_TETRIMINO
        {0, 0, 0, 0,
         0, 1, 1, 0,
         0, 1, 1, 0,
         0, 0, 0, 0},

        {0, 0, 0, 0,
         0, 1, 1, 0,
         0, 1, 1, 0,
         0, 0, 0, 0},

        {0, 0, 0, 0,
         0, 1, 1, 0,
         0, 1, 1, 0,
         0, 0, 0, 0},
         
        {0, 0, 0, 0,
         0, 1, 1, 0,
         0, 1, 1, 0,
         0, 0, 0, 0},
    },
};

#endif