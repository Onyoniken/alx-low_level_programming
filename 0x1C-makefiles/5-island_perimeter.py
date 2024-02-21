#!/usr/bin/python3

"""module for calculating perimeter of a grid"""

def num_water_neighbors(grid, k, l):
    """Returns no of neighbors in a grid"""

    num = 0

    if k <= 0 or not grid[k - 1][l]:
        num += 1
    if l <= 0 or not grid[k][l - 1]:
        num += 1
    if l >= len(grid[k]) - 1 or not grid[k][l + 1]:
        num += 1
    if k >= len(grid) - 1 or not grid[k + 1][l]:
        num += 1

    return num

def island_perimeter(grid):
    """Return parameter of island grid."""

    perimeter = 0
    for k in range(len(grid)):
        for l in range(len(grid[k])):
            if grid[k][l]:
                perimeter += num_water_neighbors(grid, k, l)

    return perimeter
