#include "home.h"
#include "statusbar.h"
#include "appdrawer.h"

int main() {
    StatusBar status;
    HomeScreen home;
    AppDrawer drawer;

    status.show();
    home.show();
    drawer.show();

    return 0;
}
