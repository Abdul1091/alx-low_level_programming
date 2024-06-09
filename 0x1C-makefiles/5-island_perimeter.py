#!/usr/bin/python3
"""
The perimeter of the island
"""


def island_perimeter(grid):
    """
    Function that calculate the perimeter of the island
    described in grid.
    Args:
       grid: Matrix that emulate the island grid.
    Return:
       Returns the perimeter of the island described in grid.
    """
    count = 0
    connection_h = 0
    connection_v = 0
    # Count horizontal connection of numbers 1
    for _list in grid:
        j = 1
        for number in _list:
            if number == 1:
                count += 1
                if j < len(_list) and number == _list[j]:
                    connection_h += 1
            j += 1
    # Count vertical connection of numbers 1
    for index, _list in enumerate(grid):
        for j in range(0, len(_list)):
            if index < len(grid) - 1:
                if _list[j] == 1 and _list[j] == grid[index + 1][j]:
                    connection_v += 1
    total = count * 4
    horizontal = connection_h * 2
    vertical = connection_v * 2
    perimeter = total - horizontal - vertical
    return perimeter
