---

# ATM Simulation in C

This project is a simple ATM (Automated Teller Machine) simulation implemented in C. It allows users to perform basic banking operations like checking their balance, depositing money, withdrawing money, and changing their PIN.

## Features

* **PIN Authentication:** Securely verifies the user's PIN with a limited number of attempts.
* **Check Balance:** Displays the current account balance.
* **Deposit Money:** Allows users to add funds to their account.
* **Withdraw Money:** Enables users to withdraw funds from their account.
* **Change PIN:** Provides functionality to update the user's secret PIN.
* **User-Friendly Menu:** Presents a clear and interactive menu for easy navigation.

## How to Compile and Run

To compile and run this program, you'll need a C compiler (like GCC).

1.  **Save the code:** Save the provided C code into a file named `atm.c`.
2.  **Open a terminal or command prompt.**
3.  **Navigate to the directory** where you saved `atm.c`.
4.  **Compile the code** using a C compiler (e.g., GCC):

    ```bash
    gcc atm.c -o atm
    ```

5.  **Run the executable:**

    ```bash
    ./atm
    ```

## How to Use

When you run the program, you'll be prompted to enter a PIN.

* The **default PIN is `8509`**.
* You have **3 attempts** to enter the correct PIN.

Once successfully logged in, you'll see the ATM menu with the following options:

1.  **Check Balance:** Displays your current account balance.
2.  **Deposit Money:** Prompts you to enter the amount you wish to deposit.
3.  **Withdraw Money:** Prompts you to enter the amount you wish to withdraw.
4.  **Change PIN:** Asks you to enter a new 4-digit PIN.
5.  **Exit:** Exits the ATM application.

Enter the number corresponding to your desired operation and follow the on-screen instructions.

---