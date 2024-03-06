import sys
from PyQt6.QtWidgets import QApplication
from PyQt6.QtWidgets import QMainWindow
from PyQt6.QtWidgets import QFileDialog
from Main import Ui_MainWindow


class MainWindow:
    def __init__(self):
        self.main_win = QMainWindow()
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self.main_win)

        # loading page --------------------------------------------------------------
        self.show_loading()
        # ---------------------------------------------------------------------------
        self.ui.pushButt_go_to_1.clicked.connect(self.show_page_1)
        # go to help page ----------------------------------------------------------
        self.ui.pushButt_help_page_1.clicked.connect(self.show_page_help)
        # ---------------------------------------------------------------------------
        self.ui.pushButt_back_page_help.clicked.connect(self.show_page_1)

        self.ui.pushButt_exit_page_1.clicked.connect(self.exit)

        self.ui.pushButt_lets_go_page_1.clicked.connect(self.show_page_2)

        self.ui.pushButt_next_page_2.clicked.connect(self.show_page_3)

        self.ui.pushButt_search_page_3.clicked.connect(self.show_page_shortest_way)

        self.ui.pushButt_next_page_shortest.clicked.connect(self.show_page_lowest_cost)

        self.ui.pushButt_next_page_lowest_cost.clicked.connect(self.show_page_best_time)

        self.ui.pushButt_next_page_best_time.clicked.connect(self.show_page_1)

        self.ui.pushButt_back_page_lowest_cost.clicked.connect(self.show_page_shortest_way)
        self.ui.pushButt_back_page_shortest_way.clicked.connect(self.show_page_3)
        self.ui.pushButt_back_page_best_time.clicked.connect(self.show_page_lowest_cost)

        self.ui.pushButt_back_page_3.clicked.connect(self.show_page_1)

        self.ui.pushButt_send_to_txt_file_page_3.clicked.connect(self.send_data_ti_txt_file)

    def show(self):
        self.main_win.show()

    def show_loading(self):
        self.ui.stackedWidget.setCurrentWidget(self.ui.loading)

    def show_page_1(self):
        self.ui.stackedWidget.setCurrentWidget(self.ui.page_1)

    def show_page_help(self):
        self.ui.stackedWidget.setCurrentWidget(self.ui.page_help)

    def exit(self):
        sys.exit()

    def show_page_2(self):
        self.ui.stackedWidget.setCurrentWidget(self.ui.page_2)

    def show_page_3(self):
        self.ui.stackedWidget.setCurrentWidget(self.ui.page_3)

    def show_page_shortest_way(self):
        f = open("shortest_way.txt", "r")
        inf = f.read()
        print(f.read())
        f.close()
        self.ui.text_box_page_shortest_way.setText(inf)

        self.ui.stackedWidget.setCurrentWidget(self.ui.page_shortest_way)

    def show_page_lowest_cost(self):
        f = open("lowest_cost.txt", "r")
        inf = f.read()
        print(f.read())
        f.close()
        self.ui.text_box_page_lowest_cost.setText(inf)

        self.ui.stackedWidget.setCurrentWidget(self.ui.page_lowest_cost)

    def show_page_best_time(self):
        f = open("best_time.txt", "r")
        inf = f.read()
        print(f.read())
        f.close()
        self.ui.text_box_page_best_time.setText(inf)
        self.ui.stackedWidget.setCurrentWidget(self.ui.page_best_time)

    def send_data_ti_txt_file(self):
        # load from file

        # str = ...
        hour = self.ui.hour_page_3.text()
        minute = self.ui.minute_page_3.text()
        am_pm = self.ui.am_pm_page_3.currentText()
        origin = self.ui.origin_page_3.currentText()
        des = self.ui.destination_page_3.currentText()
        f = open("origin_des.txt", "w")
        f.write(hour)
        f.write('\n')
        f.write(minute)
        f.write('\n')
        f.write(am_pm)
        f.write('\n')
        f.write(origin)
        f.write('\n')
        f.write(des)
        f.close()


if __name__ == "__main__":
    app = QApplication(sys.argv)
    main_win = MainWindow()
    ui = Ui_MainWindow()
    main_win.show()
    sys.exit(app.exec())
