class JSON {
  private:
    char string[256];
    int stringSize;
  public:
    JSON(char [], int);
    int parseInt(char*);
};