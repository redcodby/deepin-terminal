#ifndef TERMINALAPPLICATION_H
#define TERMINALAPPLICATION_H

#include <DApplication>

DWIDGET_USE_NAMESPACE

class TerminalApplication : public DApplication

{
    Q_OBJECT
public:
    TerminalApplication(int &argc, char *argv[]);
    ~TerminalApplication();
protected:
    // 重写了app.quit为当前窗口close.
    void handleQuitAction() override;
private:
};

#endif // TERMINALAPPLICATION_H
