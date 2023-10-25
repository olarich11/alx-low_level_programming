#!/usr/bin/python3
"""This function defines a method for measuring the perimeter of an island."""


def island_perimeter(grid):
    """Provide the island's perimeter as the output.

    The grid uses 0 to represent water and 1 to represent land.

    Args:
        This "grid" is essentially a list of lists containing integers that represent an island.
    Returns:
        The perimeter of the island as defined in the grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
