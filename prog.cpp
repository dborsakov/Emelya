#include <iostream>
#include <stdlib.h> //библиотека для функции min()


class Chislo {

private:
  //поля для хранения исходного значения
  int num;
  int denum;

  // поля для хранения сокращенного значения
  int f_num;
  int f_denum;

  int mn;
  int mx;

public:
  Chislo() //Конструктор класса, он же осущесвляет ввод
  {
    std::cout << "Введите числитель\n";
    std::cin >> num;
    std::cout << "Введите знаменатель\n";
    std::cin >> denum;

    mn = std::min(num, denum);
    mx = std::max(num, denum);

    fruc();
  }

  void out() //Выводит отдельно числитель отдельно знаменатель
  {
    std::cout << "Числитель: " <<num << std::endl;
    std::cout << "Знаменатель: " <<denum << std::endl;
  }

  void out_line() //Выводит дробь через линию
  {
    std::cout << num << "/" << denum << '\n';
  }

  void get_result()
  {
   if (num!=f_num){
      std::cout << "Дробь сократилась " << std::endl;
      std::cout << f_num << "/" << f_denum << '\n';
   }
   else {
     std::cout << "Дробь не сокращается " << std::endl;

   }
  }

  void fruc()
  {
    f_num = num;
    f_denum = denum;
    float p, q;

    for (int i=1; i<=f_num && i<=f_denum; i++) {
      float nn = f_num%i;
      float
       dd = f_denum%i;
      if (!(f_num%i) and !(f_denum%i)){
        p=f_num/i;
        q=f_denum/i;
      }
    }
    f_num = num/q;
    f_denum = denum/q;
  }
};


int main(void)
{
  Chislo a = Chislo();
  a.out_line();
  a.get_result();
  return 0;
}
