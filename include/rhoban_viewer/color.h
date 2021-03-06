#pragma once

namespace rhoban_viewer {

class Color {
public:
  // Values are in [0,1] with 1: max color
  double r,g,b;

  Color();
  Color(double r, double g, double b);

  // Some predefined colors
  static const Color red, green, blue, gray;
};
}
