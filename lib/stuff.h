#ifndef SPLITCMAKE_STUFF_H
#define SPLITCMAKE_STUFF_H


class stuff {
public:
    stuff();
    ~stuff();
    [[nodiscard]] bool something() const;

private:
    bool m_data;
};


#endif //SPLITCMAKE_STUFF_H
