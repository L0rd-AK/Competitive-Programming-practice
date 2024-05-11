class Book:
    def __init__(self, title, author, pages):
        self.title = title
        self.author = author
        self.pages = pages

# my favourite three books
b1 = Book("Three Days of Happiness", "Sugaru Miaki", 180)
b2 = Book("As a Man Thinketh", "James Allen", 281)
b3 = Book("Meditations", "Marcus Aurelius", 254)

print(f"Book 1: {b1.title} by {b1.author}, {b1.pages} pages")
print(f"Book 2: {b2.title} by {b2.author}, {b2.pages} pages")
print(f"Book 3: {b3.title} by {b3.author}, {b3.pages} pages")
