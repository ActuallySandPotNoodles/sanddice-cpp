#include "window.h"
#include <QApplication>
#include <QMainWindow>
#include <string>
#include <vector>
#include <string_view>
#include <iostream>
using namespace std;

vector<string_view> split(string_view str, string_view delimiter) {
    vector<string_view> tokens;
    size_t start = 0;
    size_t end = str.find(delimiter);

    while (end != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + delimiter.length();
        end = str.find(delimiter, start);
    }

    tokens.push_back(str.substr(start));
    return tokens;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow() {
        QWidget *centralWidget = new QWidget(this);
        ui.setupUi(centralWidget);
        setCentralWidget(centralWidget);
        QObject::connect(ui.roll, &QPushButton::clicked, this, &MainWindow::diceroll);
        QObject::connect(ui.clear_btn, &QPushButton::clicked, this, &MainWindow::clear_func);
        QObject::connect(ui.pushButton, &QPushButton::clicked, this, &MainWindow::string_roll);
        QObject::connect(ui.cflip_btn, &QPushButton::clicked, this, &MainWindow::coin_flip);
    }
    int diceroll() {
        int dmin, dmax, dnum;
        dmin = ui.nmin->value();
        dmax = ui.nmax->value();
        if (dmax < dmin) {
            return 0;
        }
        dnum = rand() % (dmax - dmin + 1) + dmin;
        int length = to_string(dnum).length();
        ui.numop->setProperty("digitCount", QVariant(length));
        ui.numop->setProperty("intValue", QVariant(dnum));
        return dnum;
    }
    void clear_func() {
        ui.strings->setText("");
    }
    void other_rand() {
        int rand1, rand2;
        rand1 = rand() % 50 + 0;
        rand2 = rand() % 100 + 50;
        ui.nmin->setValue(rand1);
        ui.nmax->setValue(rand2);
    }
    void string_roll() {
        string current_str = ui.strings->text().toStdString();
        auto ar = split(current_str, ", ");
        int length = ar.size();
        int random_selected = rand() % length;
        ui.astring->setText(QString::fromUtf8(ar[random_selected].data(), ar[random_selected].size()));
    }
    void coin_flip() {
        int ogint = rand() % 2;
        if (ogint == 1) {
            ui.coin_current->setText("Heads");
        } else {
            ui.coin_current->setText("Tails");
        };
    }

private:
    Ui_Form ui;

};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow w;
    w.show();
    return app.exec();
}

#include "main.moc"
