
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

    using namespace std;

    // İşlem detaylarını tutan sınıf
    class Transaction {
    public:
        string type;
        double amount;

        Transaction(string t, double a) : type(t), amount(a) {}
    };

    // Banka Hesabı Sınıfı (OOP Encapsulation örneği)
    class BankAccount {
    private:
        string accountHolder;
        double balance;
        vector<Transaction> history;

    public:
        BankAccount(string holder, double initialBalance) {
            accountHolder = holder;
            balance = initialBalance;
        }

        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                history.push_back(Transaction("Para Yatirma", amount));
                cout << "\n [✓] " << fixed << setprecision(2) << amount << " TL basariyla yatirildi.\n";
            }
            else {
                cout << "\n [!] Gecersiz miktar!\n";
            }
        }

        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                history.push_back(Transaction("Para Cekme", amount));
                cout << "\n [✓] " << fixed << setprecision(2) << amount << " TL basariyla cekildi.\n";
            }
            else {
                cout << "\n [!] Yetersiz bakiye veya gecersiz miktar!\n";
            }
        }

        void showBalance() const {
            cout << "\n-----------------------------------\n";
            cout << " Hesap Sahibi : " << accountHolder << "\n";
            cout << " Guncel Bakiye: " << fixed << setprecision(2) << balance << " TL\n";
            cout << "-----------------------------------\n";
        }

        void showHistory() const {
            cout << "\n===================================\n";
            cout << "        ISLEM GECMISI              \n";
            cout << "===================================\n";
            if (history.empty()) {
                cout << " Henuz hic islem yapilmadi.\n";
            }
            else {
                for (size_t i = 0; i < history.size(); ++i) {
                    cout << " " << i + 1 << ". " << history[i].type
                        << ": " << fixed << setprecision(2) << history[i].amount << " TL\n";
                }
            }
            cout << "===================================\n";
        }
    };

    int main() {
        cout << "===================================\n";
        cout << "    C++ OOP BANKA HESAP SISTEMI    \n";
        cout << "===================================\n";

        BankAccount myAccount("Aysegul Koman", 1500.0);

        int choice;
        double amount;

        do {
            cout << "\n--- MENÜ ---\n";
            cout << "1. Bakiye Goruntule\n";
            cout << "2. Para Yatir\n";
            cout << "3. Para Cek\n";
            cout << "4. Islem Gecmisi\n";
            cout << "5. Cikis\n";
            cout << "Seciminiz: ";
            cin >> choice;

            switch (choice) {
            case 1:
                myAccount.showBalance();
                break;
            case 2:
                cout << "Yatirilacak Miktar: ";
                cin >> amount;
                myAccount.deposit(amount);
                break;
            case 3:
                cout << "Cekilecek Miktar: ";
                cin >> amount;
                myAccount.withdraw(amount);
                break;
            case 4:
                myAccount.showHistory();
                break;
            case 5:
                cout << "\nSistemden cikis yapiliyor... Iyi gunler!\n";
                break;
            default:
                cout << "\nGecersiz secim, tekrar deneyin.\n";
            }
        } while (choice != 5);

        return 0;
    }


