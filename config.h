
/* the rate at which the mouse moves in Hz */
static const unsigned int move_rate = 50;

/* the speed with no modifier (pixels per second) */
static const unsigned int default_speed = 500;

static SpeedBindings speed_bindings[] = {
    /* key             speed */  
    { XK_Super_L,      3000 },
    { XK_Alt_L,        1500 },
    { XK_a,            60   },
    { XK_Control_L,    10   },
};

/* you can also add any other direction (e.g. diagonals) */
static MoveBinding move_bindings[] = {
    /* key         x      y */
    { XK_j,        -1,     0 },
    { XK_l,         1,     0 },
    { XK_i,         0,    -1 },
    { XK_k,         0,     1 },
};

/* 1: left
 * 2: middle
 * 3: right
 * 4: scroll up
 * 5: scroll down */
static ClickBinding click_bindings[] = {
    /* key         button */  
    { XK_space,    1 },
    { XK_f,        1 },
    { XK_d,        2 },
    { XK_s,        3 },
    { XK_plus,     4 },
    { XK_minus,    5 },
};

static ShellBinding shell_bindings[] = {
    /* key         command */  
    { XK_b,        "wmctrl -a firefox" },
    { XK_0,        "xdotool mousemove 0 0" },
};

/* exits on key release which allows click and exit with one key */
static KeySym exit_keys[] = {
    XK_Escape, XK_q, XK_space
};
