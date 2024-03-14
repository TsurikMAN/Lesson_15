
#include <iostream>



int s;
int n;
int variable;

int choise()
{
    setlocale(LC_ALL, "RU");
   
    std::cout << "Введите диапазон чисел:";

    std::cout << "Введите первое число:";
    std::cin >> s;

    std::cout << "Введите крайнее число:";
    std::cin >> n;
    std::cout << std::endl;
   
    return s, n;
}

    int vari()
    {
        
        std::cout << "Чтобы вывести четные числа из диапазона нажмите 0\n";
        std::cout << "Чтобы вывести нечетные числа из диапазона нажмите 1\n";
        std::cout << "Ваш выбор: ";
        std::cin >> variable;
        if (variable != 1 or 0) 
        {
            vari();
        }
       
        return variable;
    }
    
    int algoritm()
    {
        if (variable == 0)
        {
            for (int i = s; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    std::cout << i << std::endl;
                }
            }
            
        }
        else if (variable == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 != 0)
                {
                    std::cout << i << std::endl;
                }
            }
            
        }
      
        return 0;
    }
    
    int main()
    {

        choise();
        vari();
        algoritm();
       
    return 0;
    }
