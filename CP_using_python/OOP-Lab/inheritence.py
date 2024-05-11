class BankAccount:
    def __init__(self, account_holder_name, balance, account_type):
        self.account_holder_name = account_holder_name
        self.balance = balance
        self.account_type = account_type

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if self.balance >= amount:
            self.balance -= amount
        else:
            print("Insufficient balance. Transaction canceled.")

    def transfer(self, other_account, amount):
        if self.balance >= amount:
            self.balance -= amount
            other_account.deposit(amount)
        else:
            print("Insufficient balance. Transfer canceled.")


class SavingsAccount(BankAccount):
    def __init__(self, account_holder_name, balance):
        super().__init__(account_holder_name, balance, account_type="Savings")

    def withdraw(self, amount):
        if self.balance - amount < 100:
            print("Minimum balance of $100 required. Withdrawal canceled.")
        else:
            super().withdraw(amount)


class CheckingAccount(BankAccount):
    def __init__(self, account_holder_name, balance):
        super().__init__(account_holder_name, balance, account_type="Checking")

    def withdraw(self, amount):
        if self.balance - amount < 0:
            print("Cannot withdraw more than account balance.")
        else:
            super().withdraw(amount)


if __name__ == "__main__":
    sa = SavingsAccount("Amit", 420)
    ca = CheckingAccount("Kumar", 69)

    sa.deposit(200)
    sa.withdraw(300)
    sa.transfer(ca, 150)
    ca.withdraw(1200)
    ca.transfer(sa, 800)

    print(f"{sa.account_holder_name}'s Savings Account balance: ${sa.balance}")
    print(f"{ca.account_holder_name}'s Checking Account balance: ${ca.balance}")
