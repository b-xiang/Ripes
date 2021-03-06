#pragma once

#include <QWidget>

namespace Ripes {

namespace Ui {
class RWJumpWidget;
}

class RWJumpWidget : public QWidget {
    Q_OBJECT

public:
    explicit RWJumpWidget(QWidget* parent = nullptr);
    ~RWJumpWidget() override;
    void init();
    void updateModel();

signals:
    void jumpToAdress(uint32_t);

private slots:
    void on_jump_clicked();

private:
    Ui::RWJumpWidget* ui;
};
}  // namespace Ripes
