#!/usr/bin/python3
"""Defines perimiter."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The g1.

    Args:
        grid (list): A list zdfzxcvgers repressddsf
    Returns:
        The perimeter of the izdfgdasf in grid.
    """
    width = len(grid[0])
    height = len(grid)
    wemalo = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    wemalo += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    wemalo += 1
    return size * 4 - wemalo * 2
