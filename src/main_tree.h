class main_tree
{
public:
  main_tree (int, int, double, double, double, double );
  std::string a_opening_tag();
  static std::string a_closing_tag();
  std::string w_opening_tag();
  static std::string w_closing_tag();

private:
  int id;
  int group_id;
  double offx;
  double offy;
  double width;
  double height;
};
