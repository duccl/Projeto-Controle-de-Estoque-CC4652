#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>

namespace Ui {
class mainMenu;
}

class mainMenu : public QDialog
{
    Q_OBJECT

public:
    explicit mainMenu(QWidget *parent = nullptr);
    ~mainMenu();

private:
    Ui::mainMenu *ui;
};

#endif // MAINMENU_H
