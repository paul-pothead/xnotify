static struct Config config = {
	/* fonts, separate different fonts with comma */
	.titlefont = "monospace:size=9:style=bold",
	.bodyfont = "monospace:size=9",

	/* colors */
	.background_color = "#000000",
	.foreground_color = "#FFFFFF",
	.border_color = "#3465a4",

	/* geometry and gravity (see the manual) */
	.geometryspec = "500x0-20+20",
	.gravityspec = "NE",

	/* size of border, gaps and image (in pixels) */
	.border_pixels = 2,
	.gap_pixels = 7,
	.image_pixels = 100,     /* if 0, the image will fit the notification */
	.leading_pixels = 10,    /* space between title and body texts */
	.padding_pixels = 20,   /* space around content */
	.max_height = 600,      /* maximum height of a notification, after text wrapping */

	/* text alignment, set to LeftAlignment, CenterAlignment or RightAlignment */
	.alignment = LeftAlignment,

	/* set to nonzero to shrink notification width to its content size */
	.shrink = 1,

	/* whether to wrap text */
	.wrap = 1,

	/* time, in seconds, for a notification to stay alive */
	.sec = 10,

	/* set to nonzero to vertically align text to top */
	.align_top = 0,

	/* mouse button that makes xnotify prints a notification's CMD: */
	.actionbutton = Button3,
};

/* string to be replaced by truncated text, should be a single unicode character */
#define ELLIPSIS "…"
