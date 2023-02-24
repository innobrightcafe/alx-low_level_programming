#!/usr/bin/python3
from tkinter import Grid


def island_perimeter(grid):
    """Returns the perimeter of the island described in the grid.
    Args:
- grid (list): a list of lists of integers representing the island.

Returns:
- perimeter (int): the perimeter of the island.

Raises:
- None

"""

# Get dimensions of the grid
num_rows = len(grid)
num_cols = len(grid[0])

# Initialize perimeter
perimeter = 0

# Iterate over each cell in the grid
for i in range(num_rows):
    for j in range(num_cols):
        if grid[i][j] == 1:
            # Cell is part of the island
            # Check neighbors to the left, right, top, and bottom
            if j == 0 or Grid[i][j-1] == 0:
                perimeter += 1
            if j == num_cols-1 or grid[i][j+1] == 0:
                perimeter += 1
            if i == 0 or grid[i-1][j] == 0:
                perimeter += 1
            if i == num_rows-1 or grid[i+1][j] == 0:
                perimeter += 1

return perimeter

