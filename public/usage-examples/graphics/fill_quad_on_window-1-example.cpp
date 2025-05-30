#include "splashkit.h"

int main()
{
    // Create diamond shaped quads
    quad q1 = quad_from(400, 200, 300, 300, 300, 0, 200, 200);
    quad q2 = quad_from(400, 210, 310, 300, 600, 300, 400, 390);
    quad q3 = quad_from(200, 400, 300, 300, 300, 600, 400, 400);
    quad q4 = quad_from(200, 390, 290, 300, 0, 300, 200, 210);

    // Create two Windows
    window window1 = open_window("Filled Diamond On Window 1", 600, 600);
    window window2 = open_window("Filled Diamond On Window 2", 600, 600);

    // Move windows to see both side by side
    move_window_to(window1, 0, 0);
    move_window_to(window2, window_width(window1), 0);

    clear_screen(COLOR_WHITE);

    // Draw the first and second quad on first window
    fill_quad_on_window(window1, COLOR_BLACK, q1);
    fill_quad_on_window(window1, COLOR_GREEN, q2);

    // Draw the third and fourth quad on second window
    fill_quad_on_window(window2, COLOR_RED, q3);
    fill_quad_on_window(window2, COLOR_BLUE, q4);

    refresh_screen();
    delay(5000);
    close_all_windows();
    return 0;
}