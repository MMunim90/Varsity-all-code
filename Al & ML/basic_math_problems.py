import math


# ============================================================
# Part A: Basic Input & Arithmetic
# ============================================================

# 1. Sum of Two Numbers
a = float(input("Enter first number: "))
b = float(input("Enter second number: "))
print("Sum =", a + b)


# 2. Difference of Two Numbers
a = float(input("\nEnter first number: "))
b = float(input("Enter second number: "))
print("Difference =", a - b)


# 3. Product of Two Numbers
a = float(input("\nEnter first number: "))
b = float(input("Enter second number: "))
print("Product =", a * b)


# 4. Division of Two Numbers
a = float(input("\nEnter first number: "))
b = float(input("Enter second number: "))

if b != 0:
    print("Division =", a / b)
else:
    print("Cannot divide by zero.")


# 5. Average of Three Numbers
a = float(input("\nEnter first number: "))
b = float(input("Enter second number: "))
c = float(input("Enter third number: "))
average = (a + b + c) / 3
print("Average =", average)


# 6. Square of a Number
n = float(input("\nEnter a number: "))
print("Square =", n ** 2)


# 7. Cube of a Number
n = float(input("\nEnter a number: "))
print("Cube =", n ** 3)


# 8. Double and Triple
n = float(input("\nEnter a number: "))
print("Double =", n * 2)
print("Triple =", n * 3)


# 9. Percentage Calculation
obtained = float(input("\nEnter obtained marks: "))
total = float(input("Enter total marks: "))

if total != 0:
    percentage = (obtained / total) * 100
    print("Percentage =", percentage, "%")
else:
    print("Total marks cannot be zero.")


# 10. Simple Interest
p = float(input("\nEnter Principal: "))
r = float(input("Enter Rate: "))
t = float(input("Enter Time: "))

si = (p * r * t) / 100
print("Simple Interest =", si)


# ============================================================
# Part B: Rectangle, Square & Triangle
# ============================================================

# 11. Area of Rectangle
length = float(input("\nEnter rectangle length: "))
width = float(input("Enter rectangle width: "))

area = length * width
print("Rectangle Area =", area)


# 12. Perimeter of Rectangle
length = float(input("\nEnter rectangle length: "))
width = float(input("Enter rectangle width: "))

perimeter = 2 * (length + width)
print("Rectangle Perimeter =", perimeter)


# 13. Area of Square
side = float(input("\nEnter square side: "))

area = side ** 2
print("Square Area =", area)


# 14. Perimeter of Square
side = float(input("\nEnter square side: "))

perimeter = 4 * side
print("Square Perimeter =", perimeter)


# 15. Diagonal of Square
side = float(input("\nEnter square side: "))

diagonal = side * math.sqrt(2)
print("Square Diagonal =", diagonal)


# 16. Area of Triangle
base = float(input("\nEnter triangle base: "))
height = float(input("Enter triangle height: "))

area = 0.5 * base * height
print("Triangle Area =", area)


# 17. Perimeter of Triangle
a = float(input("\nEnter first side: "))
b = float(input("Enter second side: "))
c = float(input("Enter third side: "))

perimeter = a + b + c
print("Triangle Perimeter =", perimeter)


# 18. Right Triangle Hypotenuse
a = float(input("\nEnter perpendicular side a: "))
b = float(input("Enter perpendicular side b: "))

hypotenuse = math.sqrt(a ** 2 + b ** 2)
print("Hypotenuse =", hypotenuse)


# 19. Triangle Base Calculation
area = float(input("\nEnter triangle area: "))
height = float(input("Enter triangle height: "))

if height != 0:
    base = (2 * area) / height
    print("Triangle Base =", base)
else:
    print("Height cannot be zero.")


# 20. Triangle Height Calculation
area = float(input("\nEnter triangle area: "))
base = float(input("Enter triangle base: "))

if base != 0:
    height = (2 * area) / base
    print("Triangle Height =", height)
else:
    print("Base cannot be zero.")


# ============================================================
# Part C: Circle & Other Shapes
# ============================================================

# 21. Area of Circle
radius = float(input("\nEnter circle radius: "))

area = math.pi * radius ** 2
print("Circle Area =", area)


# 22. Circumference of Circle
radius = float(input("\nEnter circle radius: "))

circumference = 2 * math.pi * radius
print("Circle Circumference =", circumference)


# 23. Diameter of Circle
radius = float(input("\nEnter circle radius: "))

diameter = 2 * radius
print("Circle Diameter =", diameter)


# 24. Radius from Diameter
diameter = float(input("\nEnter circle diameter: "))

radius = diameter / 2
print("Circle Radius =", radius)


# 25. Area of Semicircle
radius = float(input("\nEnter semicircle radius: "))

area = 0.5 * math.pi * radius ** 2
print("Semicircle Area =", area)


# 26. Perimeter of Semicircle
radius = float(input("\nEnter semicircle radius: "))

# Perimeter = curved part + diameter
perimeter = math.pi * radius + 2 * radius
print("Semicircle Perimeter =", perimeter)


# 27. Area of Parallelogram
base = float(input("\nEnter parallelogram base: "))
height = float(input("Enter parallelogram height: "))

area = base * height
print("Parallelogram Area =", area)


# 28. Area of Trapezium
a = float(input("\nEnter first parallel side: "))
b = float(input("Enter second parallel side: "))
height = float(input("Enter height: "))

area = 0.5 * (a + b) * height
print("Trapezium Area =", area)


# 29. Area of Rhombus
d1 = float(input("\nEnter first diagonal: "))
d2 = float(input("Enter second diagonal: "))

area = 0.5 * d1 * d2
print("Rhombus Area =", area)


# 30. Kite Area
d1 = float(input("\nEnter first diagonal: "))
d2 = float(input("Enter second diagonal: "))

area = 0.5 * d1 * d2
print("Kite Area =", area)


# ============================================================
# Part D: 3D Geometric Formulas
# ============================================================

# 31. Volume of Cube
side = float(input("\nEnter cube side: "))

volume = side ** 3
print("Cube Volume =", volume)


# 32. Surface Area of Cube
side = float(input("\nEnter cube side: "))

surface_area = 6 * side ** 2
print("Cube Total Surface Area =", surface_area)


# 33. Volume of Cuboid
length = float(input("\nEnter cuboid length: "))
width = float(input("Enter cuboid width: "))
height = float(input("Enter cuboid height: "))

volume = length * width * height
print("Cuboid Volume =", volume)


# 34. Surface Area of Cuboid
length = float(input("\nEnter cuboid length: "))
width = float(input("Enter cuboid width: "))
height = float(input("Enter cuboid height: "))

surface_area = 2 * (length * width + length * height + width * height)
print("Cuboid Total Surface Area =", surface_area)


# 35. Volume of Cylinder
radius = float(input("\nEnter cylinder radius: "))
height = float(input("Enter cylinder height: "))

volume = math.pi * radius ** 2 * height
print("Cylinder Volume =", volume)


# 36. Curved Surface Area of Cylinder
radius = float(input("\nEnter cylinder radius: "))
height = float(input("Enter cylinder height: "))

curved_surface_area = 2 * math.pi * radius * height
print("Cylinder Curved Surface Area =", curved_surface_area)


# 37. Total Surface Area of Cylinder
radius = float(input("\nEnter cylinder radius: "))
height = float(input("Enter cylinder height: "))

total_surface_area = 2 * math.pi * radius * (radius + height)
print("Cylinder Total Surface Area =", total_surface_area)


# 38. Volume of Cone
radius = float(input("\nEnter cone radius: "))
height = float(input("Enter cone height: "))

volume = (1 / 3) * math.pi * radius ** 2 * height
print("Cone Volume =", volume)


# 39. Volume of Sphere
radius = float(input("\nEnter sphere radius: "))

volume = (4 / 3) * math.pi * radius ** 3
print("Sphere Volume =", volume)


# 40. Surface Area of Sphere
radius = float(input("\nEnter sphere radius: "))

surface_area = 4 * math.pi * radius ** 2
print("Sphere Surface Area =", surface_area)


# ============================================================
# Part E: Practical Basic Programming Problems
# ============================================================

# 41. Distance Calculation
speed = float(input("\nEnter speed: "))
time = float(input("Enter time: "))

distance = speed * time
print("Distance =", distance)


# 42. Speed Calculation
distance = float(input("\nEnter distance: "))
time = float(input("Enter time: "))

if time != 0:
    speed = distance / time
    print("Speed =", speed)
else:
    print("Time cannot be zero.")


# 43. Time Calculation
distance = float(input("\nEnter distance: "))
speed = float(input("Enter speed: "))

if speed != 0:
    time = distance / speed
    print("Time =", time)
else:
    print("Speed cannot be zero.")


# 44. Temperature Conversion
celsius = float(input("\nEnter temperature in Celsius: "))

fahrenheit = (celsius * 9 / 5) + 32
print("Fahrenheit =", fahrenheit)


# 45. Fahrenheit to Celsius
fahrenheit = float(input("\nEnter temperature in Fahrenheit: "))

celsius = (fahrenheit - 32) * 5 / 9
print("Celsius =", celsius)


# 46. BMI Calculation
weight = float(input("\nEnter weight in kg: "))
height = float(input("Enter height in meters: "))

if height != 0:
    bmi = weight / height ** 2
    print("BMI =", bmi)
else:
    print("Height cannot be zero.")


# 47. Profit Calculation
cost_price = float(input("\nEnter Cost Price: "))
selling_price = float(input("Enter Selling Price: "))

profit = selling_price - cost_price

if cost_price != 0:
    profit_percentage = (profit / cost_price) * 100

    print("Profit Amount =", profit)
    print("Profit Percentage =", profit_percentage, "%")
else:
    print("Cost Price cannot be zero.")


# 48. Discount Calculation
product_price = float(input("\nEnter product price: "))
discount_percentage = float(input("Enter discount percentage: "))

discount_amount = (product_price * discount_percentage) / 100
final_price = product_price - discount_amount

print("Discount Amount =", discount_amount)
print("Final Price =", final_price)


# 49. Electricity Bill Calculation
units = float(input("\nEnter electricity units: "))
price_per_unit = float(input("Enter price per unit: "))

electricity_bill = units * price_per_unit
print("Electricity Bill =", electricity_bill)


# 50. Room Flooring Cost
length = float(input("\nEnter room length: "))
width = float(input("Enter room width: "))
cost_per_unit = float(input("Enter flooring cost per square meter: "))

floor_area = length * width
total_cost = floor_area * cost_per_unit

print("Total Floor Area =", floor_area)
print("Total Flooring Cost =", total_cost)


# ============================================================
# End of Program
# ============================================================

print("\nAll 50 problems completed successfully!")