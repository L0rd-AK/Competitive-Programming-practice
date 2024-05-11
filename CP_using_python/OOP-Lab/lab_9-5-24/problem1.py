class BankAccount:
    def __init__(self, account_holder, balance):
        # Initialize attributes
        self.account_holder = account_holder
        self.balance = balance
    
    def deposit(self, amount):
        # Deposit money into the account
        self.balance += amount
        print(f"Deposited {amount} successfully.")
    
    def withdraw(self, amount):
        # Withdraw money from the account
        if amount > self.balance:
            print("Insufficient funds!")
        else:
            self.balance -= amount
            print(f"Withdrawn {amount} successfully.")
    
    def display_balance(self):
        # Display current balance
        print(f"Current balance for {self.account_holder}: {self.balance}")

# Main program
def main():
    # Prompt user for account details
    account_holder = input("Enter account holder's name: ")
    initial_balance = float(input("Enter initial balance: "))

    # Create instance of BankAccount
    account = BankAccount(account_holder, initial_balance)

    # Interaction loop
    while True:
        print("\n1. Deposit")
        print("2. Withdraw")
        print("3. Display Balance")
        print("4. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            amount = float(input("Enter amount to deposit: "))
            account.deposit(amount)
        elif choice == "2":
            amount = float(input("Enter amount to withdraw: "))
            account.withdraw(amount)
        elif choice == "3":
            account.display_balance()
        elif choice == "4":
            print("Thank you for banking with us!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
