#ifndef INVOICE
#define INVOICE

#include <string>

class Invoice {
  private:
    std::string invoiceId;
    double dollarsOwed;
  public:
    Invoice(std::string invoiceId);
    void addServiceCost(double costDollars);
    double getDollarsOwed();
    std::string getInvoiceId();
};

#endif