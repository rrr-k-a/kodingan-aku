import turtle

layar = turtle.Screen()
layar.bgcolor("black")

pen = turtle.Turtle()
pen.speed(0)
warna = ["red", "purple", "blue", "cyan"]


for x in range(150):
    pen.color(warna[x % 4])
    pen.circle(x)
    pen.left(90)

layar.mainloop()

