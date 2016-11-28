#pragma once

class ThtmlColors : std::unordered_map<ffstring, COLORREF>
{
public:
    ThtmlColors(void);
    bool getColor(const ffstring &name, COLORREF *color) const;
    void getColor(const ffstring &name, COLORREF *color, COLORREF def) const;
};
