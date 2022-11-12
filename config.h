
/* the rate at which the mouse moves in Hz
 * does not change its speed */
static const unsigned int move_rate = 50;

/* the default speed of the mouse pointer
 * in pixels per second */
static const unsigned int default_speed = 300;

/* changes the speed of the mouse pointer */
static SpeedBinding speed_bindings[] = {
    /* key             speed */  
    { XK_Super_L,      1000 },
    { XK_Alt_L,        500  },
    { XK_a,            100  },
    { XK_Control_L,    50   },
};

/* moves the mouse pointer
 * you can also add any other direction (e.g. diagonals) */
static MoveBinding move_bindings[] = {
    /* key         x      y */
    { XK_u,         -1,   -1 },
    { XK_h,         -1,    0 },
    { XK_l,          1,    0 },
    { XK_k,          0,   -1 },
    { XK_i,          0,   -1 },
    { XK_j,          0,    1 },
    { XK_u,         -1,   -1 },
    { XK_y,         -2,   -1 },
    { XK_o,          1,   -1 },
    { XK_period,     1,    1 },
    { XK_comma,      0,    1 },
    { XK_m,         -1,    1 },
    { XK_slash,      2,    1 },
};

/* 1: left
 * 2: middle
 * 3: right */
static ClickBinding click_bindings[] = {
    /* key         button */  
    { XK_space,    1 },
    { XK_f,        1 },
    { XK_d,        2 },
    { XK_s,        3 },
};

/* scrolls up, down, left and right
 * a higher value scrolls faster */
static ScrollBinding scroll_bindings[] = {
    /* key        x      y */
    { XK_n,        0 ,    15 },
    { XK_p,        0 ,   -15 },
    { XK_bracketleft, 0, -15 },
    { XK_plus,     0 ,    40 },
    { XK_minus,    0 ,   -40 },
    { XK_x,        15,    0  },
    { XK_z,       -15,    0  },
};

/* executes shell commands */
static ShellBinding shell_bindings[] = {
    /* key         command */  
    { XK_c,        "xmouseless_helper c" },
    { XK_v,        "xmouseless_helper v" },
    { XK_b,        "xmouseless_helper b" },
/*    { XK_b,        "wmctrl -a brave; xdotool mousemove 1320 32" },
    { XK_c,        "wmctrl -a thunderbird; xdotool mousemove 570 135" },
    { XK_v,        "wmctrl -a chrome; xdotool mousemove 0 0" }, */
    { XK_g,        "smartmousemove" },
    { XK_0,        "xdotool mousemove 0 0" },
    { XK_w,        "xdotool mousemove --polar 0 0" },
    { XK_e,        "xmouseless_helper e" },
    { XK_r,        "xmouseless_helper r" },
    { XK_t,        "xmouseless_helper t" },
/*    { XK_e,        "xdotool mousemove 150 170" },
    { XK_r,        "xdotool mousemove 1440 324" },
//    { XK_t,        "smartmousemove -i" },  // capture selection to .png
    { XK_t,        "xdotool mousemove 1440 724" }, */
};

/* exits on key release which allows click and exit with one key */
static KeySym exit_keys[] = {
    XK_Escape, XK_q, XK_space
};
