#include "minilibx/mlx.h"
#include <stdlib.h>

#define WIDTH 500
#define HEIGHT 500

int	main(void)
{
	void	*mlx_connection;
	void	*mlx_window;

	mlx_connection = mlx_init();
	mlx_window = mlx_new_window(mlx_connection, WIDTH, HEIGHT, "My 1. window");
	
	for (int y = HEIGHT * 0.1; y < HEIGHT - 50; ++y)
	{
		for (int x = WIDTH * 0.1; x < WIDTH - 50; ++x)
		{
			mlx_pixel_put(mlx_connection, mlx_window, x, y, rand() % 0x1000000);
		}

    mlx_string_put(mlx_connection,
                   mlx_window,
                   WIDTH * 0.8,
                   HEIGHT * 0.95,
                   rand() % 0x1000000,
                   "My pollock");
	
	}
	mlx_loop(mlx_connection);
}