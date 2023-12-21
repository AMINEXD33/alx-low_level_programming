#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


de


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    
    for height_x  in range(len(grid)):
        tmp_cach = {}## nodes discovererd

        for width_y in range(len(grid[0])):

            if (grid[height_x][width_y] == 1):



                


