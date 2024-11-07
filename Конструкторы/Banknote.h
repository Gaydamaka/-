#include <string>

class Banknote {
public:

    explicit Banknote();

    Banknote(int denomination, const std::string& currency, const std::string& serialNumber, int year, bool isInCirculation);

    void SetDenomination(int denomination);
    int GetDenomination() const;

    void SetCurrency(const std::string& currency);
    std::string GetCurrency() const;

    void SetSerialNumber(const std::string& serialNumber);
    std::string GetSerialNumber() const;

    void SetYear(int year);
    int GetYear() const;

    void SetIsInCirculation(bool isInCirculation);
    bool GetIsInCirculation() const;

    void MarkAsCounterfeit();
    void RemoveFromCirculation();
    void Deposit();
    void Withdraw();
    void DisplayInfo() const;

private:
    int denomination;
    std::string currency;
    std::string serialNumber;
    int year;
    bool isInCirculation;
};


