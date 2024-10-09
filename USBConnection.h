#ifndef USBCONNECTION
#define USBCONNECTION

#include <stack>
using namespace std;

class USBConnection{
  private:
    int ID;
    static stack<int> ids;
    USBConnection(int ID): ID(ID){};
  public:
    static USBConnection* CreateUsbConnection(){
      if (ids.empty()){
        return nullptr;
      } else {
        int free_id = ids.top();
        ids.pop();
        USBConnection* usbc = new USBConnection(free_id);
        return usbc;
      }
    }
    ~USBConnection(){
      ids.push(ID);
    }
    int get_id(){ return ID; };

};

stack<int> USBConnection::ids({3, 2, 1});

#endif