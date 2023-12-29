interface Account {
    void deposit(double amount);
    void withdraw(double amount);
    double checkBalance();
}

class SavingsAccount implements Account {
    private double balance;

    @Override
    public void deposit(double amount) {
        balance += amount;
    }

    @Override
    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            System.out.println("Insufficient funds");
        }
    }

    @Override
    public double checkBalance() {
        return balance;
    }
}

class CheckingAccount implements Account {
    private double balance;
    @Override
    public void deposit(double amount) {
        balance += amount;
    }

    @Override
    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            System.out.println("Insufficient funds");
        }
    }
    @Override
    public double checkBalance() {
        return balance;
    }
}
class LoanAccount implements Account {
    private double balance;
    @Override
    public void deposit(double amount) {
    }
    @Override
    public void withdraw(double amount) {
    }

    @Override
    public double checkBalance() {
        return balance;
    }
}