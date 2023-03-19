#include <ncurses.h>
#include <unistd.h>
#include <cstdlib>
#include <vector>

using namespace std;

// Define the size of the game window
const int WIDTH = 50;
const int HEIGHT = 20;

// Define the player's starting position and size
const int PLAYER_X = WIDTH / 2;
const int PLAYER_Y = HEIGHT - 2;
const int PLAYER_WIDTH = 3;
const int PLAYER_HEIGHT = 1;

// Define the alien's starting position and size
const int ALIEN_X = WIDTH / 2;
const int ALIEN_Y = 2;
const int ALIEN_WIDTH = 3;
const int ALIEN_HEIGHT = 1;

// Define the bullet's size and speed
const int BULLET_WIDTH = 1;
const int BULLET_HEIGHT = 1;
const int BULLET_SPEED = 3;

// Define the key codes for player movement
const int KEY_LEFT = 'a';
const int KEY_RIGHT = 'd';
const int KEY_FIRE = ' ';

// Define a struct to represent a game object
struct GameObject
{
    int x, y, width, height;
};

// Define a struct to represent a bullet
struct Bullet
{
    GameObject object;
    int dy;
};

// Define a function to draw a game object
void drawGameObject(GameObject object, char ch)
{
    for (int i = 0; i < object.width; i++)
    {
        mvaddch(object.y, object.x + i, ch);
        mvaddch(object.y + object.height - 1, object.x + i, ch);
    }
    for (int i = 0; i < object.height; i++)
    {
        mvaddch(object.y + i, object.x, ch);
        mvaddch(object.y + i, object.x + object.width - 1, ch);
    }
}

// Define a function to move a game object horizontally
void moveGameObject(GameObject &object, int dx)
{
    object.x += dx;
    if (object.x < 0)
    {
        object.x = 0;
    }
    else if (object.x + object.width >= WIDTH)
    {
        object.x = WIDTH - object.width;
    }
}

// Define a function to update the position of a bullet
void updateBullet(Bullet &bullet)
{
    bullet.object.y += bullet.dy;
}

// Define a function to check if a bullet is off the screen
bool isBulletOffScreen(Bullet bullet)
{
    return bullet.object.y < 0 || bullet.object.y >= HEIGHT;
}

// Define a function to check if a bullet has hit a game object
bool isBulletHitObject(Bullet bullet, GameObject object)
{
    int bx = bullet.object.x;
    int by = bullet.object.y;
    int bw = bullet.object.width;
    int bh = bullet.object.height;
    int ox = object.x;
    int oy = object.y;
    int ow = object.width;
    int oh = object.height;
    return bx + bw > ox && bx < ox + ow && by + bh > oy && by < oy + oh;
}

int main()
{
    // Initialize ncurses
    initscr();
    noecho();
    cbreak();
    keypad(stdscr, TRUE);
    curs_set(0);

    // Initialize game objects
    GameObject player = {PLAYER_X, PLAYER_Y, PLAYER_WIDTH, PLAYER_HEIGHT};
    GameObject alien = {ALIEN_X, ALIEN_Y, ALIEN_WIDTH, ALIEN_HEIGHT};
    vector<Bullet> bullets;

    // Main game loop
    while (true)
    {
        // Clear the screen
        clear();

        // Draw the game objects
        drawGameObject(player, '#');
        drawGameObject(alien, '@');
        for (Bullet bullet : bullets)
        {
            drawGameObject(bullet.object, '*');
        }

        // Move the player
        int ch = getch();
        switch (ch)
        {
        case KEY_LEFT:
            moveGameObject(player, -1);
            break;
        case KEY_RIGHT:
            moveGameObject(player, 1);
            break;
        case KEY_FIRE:
            bullets.push_back({{player.x + player.width / 2 - BULLET_WIDTH / 2, player.y - 1, BULLET_WIDTH, BULLET_HEIGHT}, -BULLET_SPEED});
            break;
        }

        // Move the bullets
        for (int i = 0; i < bullets.size(); i++)
        {
            updateBullet(bullets[i]);
            if (isBulletOffScreen(bullets[i]))
            {
                bullets.erase(bullets.begin() + i);
                i--;
            }
            else if (isBulletHitObject(bullets[i], alien))
            {
                alien.x = rand() % (WIDTH - alien.width);
                alien.y = ALIEN_Y;
                bullets.erase(bullets.begin() + i--;
            }
        }

        // Move the alien
        alien.y++;
        if (alien.y >= HEIGHT)
        {
            alien.x = rand() % (WIDTH - alien.width);
            alien.y = ALIEN_Y;
        }

        // Check for collision between player and alien
        if (player.x + player.width > alien.x && player.x < alien.x + alien.width && player.y + player.height > alien.y && player.y < alien.y + alien.height)
        {
            mvprintw(HEIGHT / 2, WIDTH / 2 - 6, "GAME OVER!");
            refresh();
            usleep(1000000);
            break;
        }

        // Refresh the screen
        refresh();

        // Wait for a short time
        usleep(50000);
    }

    // Clean up ncurses
    endwin();

    return 0;
}
