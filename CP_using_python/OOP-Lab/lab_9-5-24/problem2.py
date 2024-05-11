
class virtual_pet:
    def __init__(self, name):
        # Initialize attributes
        self.name = name
        self.hunger = 50
        self.happiness = 50
        self.energy = 50
    
    def feed(self):
        # Feed the pet, reducing hunger and increasing happiness
        self.hunger -= 10
        self.happiness += 10
        print(f"{self.name} has been fed.")

    def play(self):
        # Play with the pet, increasing happiness and reducing energy
        self.happiness += 20
        self.energy -= 10
        print(f"{self.name} is playing.")

    def sleep(self):
        # Let the pet sleep, increasing energy
        self.energy += 30
        print(f"{self.name} is sleeping.")

    def check_status(self):
        # Display current status of the pet
        print(f"\n{self.name}'s current status:")
        print(f"Hunger level: {self.hunger}")
        print(f"Happiness level: {self.happiness}")
        print(f"Energy level: {self.energy}")

# Main program
def main():
    # Prompt user for pet's name
    pet_name = input("Enter your virtual pet's name: ")
    
    # Create instance of virtual pet
    pet = virtual_pet(pet_name)

    # Interaction loop
    while True:
        print("\n1. Feed")
        print("2. Play")
        print("3. Sleep")
        print("4. Check Status")
        print("5. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            pet.feed()
        elif choice == "2":
            pet.play()
        elif choice == "3":
            pet.sleep()
        elif choice == "4":
            pet.check_status()
        elif choice == "5":
            print("Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
