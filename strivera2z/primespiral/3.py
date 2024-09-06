import cmath

def cartesian_to_polar(x, y):
  """Converts Cartesian coordinates to polar coordinates.

  Args:
    x: The x-coordinate.
    y: The y-coordinate.

  Returns:
    A tuple containing the magnitude (r) and angle (theta) in radians.
  """

  z = complex(x, y)
  r, theta = cmath.polar(z)
  return r, theta

# Example usage:
x = 3
y = 4
r, theta = cartesian_to_polar(x, y)
print("Polar coordinates:", r, theta)