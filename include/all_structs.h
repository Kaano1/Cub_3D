# ifndef ALL_STRUCTS_H
# define ALL_STRUCTS_H

typedef struct s_image
{
	int		width;
	int		height;
	void	*img;
	char	*addr;
	int		bbp;
	int		line_len;
	int		endian;
}	t_image;

typedef struct s_found
{
	float	distance;
	float	rate;
}	t_found;

typedef struct s_player
{
	int		x;
	int		y;
	float	angle;
}	t_player;

typedef struct s_vector2f
{
	float	x;
	float	y;
}	t_vector2f;

typedef struct s_keys
{
	int	w;
	int	s;
	int	a;
	int	d;
	int	right;
	int	left;
}	t_keys;

typedef struct s_pixel
{
	int	o;
	int	r;
	int	g;
	int	b;
	int	sta;
}	t_pixel;

typedef struct s_map
{
	char	**map;
	char	*no;
	char	*so;
	char	*ea;
	char	*we;
	int		x;
	int		y;
	float	ang;
	t_pixel	f;
	t_pixel	c;
}	t_map;

typedef struct s_data
{
	void		*mlx;
	void		*mlx_win;
	t_image		screen;
	int			**map;
	int			y_size;
	int			x_size;
	int			floor_color;
	int			ceil_color;
	t_image		imgs[4];
	t_vector2f	pos;
	float		look;
	int			active_img;
	t_keys		keys;
}	t_data;

#endif