#include <stdio.h>

int lr1(void) {
    float S; 
    //расстояние, которое преодолел самолет
    float V1;  
    //начальная скорость
    float V2;
    // конечная скорость
    float T;
    //время торможения
    printf("T = ");
    scanf("%f", &T);
    printf("V1 = ");
    scanf("%f", &V1);
    printf("V2 = ");
    scanf("%f", &V2);
    S = (V1 + V2)/2*T;
    printf ("S = %f", S);
    return 0;
}



int lr2(void) 
{
    int n;
    float sum = 0;

    printf("n= ");
    scanf("%d", &n);

    int sign = 1;
    int a = 3;
    int b = 1;
    int i = 0;

    while (i < n) {
        float t = (float)a / (b * (b + 1));
        sum += sign * t;

        sign = -sign;
        a++;
        b++;

        i++;
    }

    printf("Сумма первых %d элементов: %.2f\n", n, sum);

    return 0;
}

int dz2(void) 
{
    int n;
    float sum = 0;

    printf("n= ");
    scanf("%d", &n);

    int sign = 1;
    int a = 3;
    int b = 1;
    int i = 0;
  float t;
    for (i = 0;i<n;i++) {
        t = (float)a / (b * (b + 1));
        sum += sign * t;

        sign = -sign;
        a++;
        b++;
    }

    printf("Сумма первых %d элементов: %.2f\n", n, sum);

    return 0;
}



#define YES 1
#define NO 0

int lr3(void)
{
    int c;
    int endofword = YES;
    int count = 0;

    while ((c = getchar()) != EOF)
    {
        if (endofword == YES)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
            count += 1;  
            endofword = NO;
        }

        if (c == ' ' || c == '.' || c == '\n' ||  c == ',') 
        endofword = YES;

    }

    printf("count: %d", count);

    return 0;
}
#define YES 1
#define NO 0

int dz3(void)
{
    int c;
    int first;
    int last;
    int endofword = YES;
    int count = 0;

    while ((c = getchar()) != EOF)
    {
        if (endofword == YES)
        {
            first = c;
            endofword = NO;
        }

        if (c == ' ' || c == '.' || c == '\n' || c == ',') 
        {
            endofword = YES;

            if(first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u' || first == 'y')
            {
                if (!(last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u' || last == 'y'))
                {
                    count+= 1;
                }
            }    
        }

        last = c;
    }

    printf("count: %d\n", count);
    return 0;
}


#define a 2
int dz1(void) {
    float S; 
    //расстояние, которое преодолел самолет
    float V1;  
    //начальная скорость
    float V2;
    // конечная скорость
    float T;
    //время торможения
    printf("T = ");
    scanf("%f", &T);
    printf("V1 = ");
    scanf("%f", &V1);
    printf("V2 = ");
    scanf("%f", &V2);
    S = (V1 + V2)/a*T;
    printf ("S = %f", S);
    return 0;
}



#define MAX 1000
#define T 1
#define F 0
int lr4(void)
{ 
    int i = 0; // Индекс для обхода строки
    int j = 0; // Индекс для записи в новую строку
    int cnt = 0; // Счетчик слов
    int word = F; // Флаг слова
    char c; // Текущий символ
    char line[MAX]; // Новая строка с нечетным количеством слов
    char buffer[MAX]; // Буфер для ввода строки

    fgets(buffer, MAX, stdin); // Считываем введенную строку

    do
    { 
        c = buffer[i];

        // Проверка начала или конца слова
        if(c == ',' || c == ' ' || c == '.')
        {
            word = F;
        }
        else
        {
            // Если находим слово записываем его номер
            if(word == F)
            {
                cnt++;
                word = T;
            }
        }

        // Записываем символы в 'line' если количество слов нечетное
        if(cnt % 2 != 0)
        {
            line[j] = c;
            j++;
        }

        i++;
    }
    while(c != '\0');

    puts(line); // Выводим результат

    return 0;
}


#define MAX 1000
#define T 1
#define F 0
int dz4(void)
{ 
    int i = 0; // Индекс для обхода строки
    int j = 0; // Индекс для записи в новую строку
    int cnt = 0; // Счетчик слов
    int word = F; // Флаг слова
    char c; // Текущий символ
    char line[MAX]; // Новая строка с нечетным количеством слов
    char buffer[MAX]; // Буфер для ввода строки

    fgets(buffer, MAX, stdin); // Считываем введенную строку
    do
    { 
        c = buffer[i];
         // Проверка начала или конца слова
        if(c == ',' || c == ' ' || c == '.')
        {
            word = F;
        }
        else
        {
            // Если находим слово записываем его номер
            if(word == F)
            {
                cnt++;
                word = T;
            }
        }

        // Записываем символы в 'line' если количество слов нечетное
        if(cnt % 2 != 0)
        {
            line[j] = c;
            j++;
        }
      if(word == F)
        {
          line[j] = '\n';
          j++;
        }

        i++;
    }
    while(c != '\0');
    puts(line); // Выводим результат
    return 0;
}



#define N 10 // Определяем размер массива как константу

int lr5(void)
{
    float x[N];  // Объявляем массив x с N элементами
    int i, max;

    for( i = 0; i < N; i++ ) // Цикл для ввода элементов массива
        scanf("%f", &x[i]); // Вводим элементы массива с клавиатуры

    max = x[0]; // Присваиваем переменной max значение первого элемента массива

    for (i = 0; i < N; i++) // Цикл для нахождения максимального элемента массива
    {
        if (x[i] > max)  // Если текущий элемент больше максимального
        {
            max = x[i]; // Присваиваем максимальному значению текущий элемент
        }
    }

    for( i = 0; i < N; i++ ) // Цикл для обработки элементов массива
    {
        if(x[i] < 0) // Если элемент отрицательный
        {
            x[i] = x[i] / max; // Делим элемент на максимальный
        }
    }

    for( i = 0; i < N; i++ ) // Цикл для вывода элементов массива
        printf("%f ", x[i]); // Выводим элементы массива на экран
    printf("\n");

    return 0; // Возвращаем ноль, программа успешно завершена
}


#define L 10 // Определяем размер массива как константу

struct Stats {
    float sum;
    int negative_count;
    char mode; // Добавлен новый член структуры для хранения
};

int dz5(void) {
    float x[L]; // Объявляем массив x с N элементами
    struct Stats stats = {0.0, 0, 0}; // Объявляем и инициализируем структуру статистики

    for (int i = 0; i < L; i++) { // Цикл для ввода элементов массива
        scanf("%f", &x[i]);
        if (x[i] < 0) { // Подсчитываем количество отрицательных элементов
            stats.negative_count++;
        }
    }

    float max = x[0]; // Присваиваем переменной max значение первого элемента массива

    for (int i = 0; i < L; i++) { // Цикл для нахождения максимального элемента массива
        if (x[i] > max) { // Если текущий элемент больше максимального
            max = x[i]; // Переприсваиваем максимальному значению текущий элемент
        }
    }

    for (int i = 0; i < L; i++) { // Цикл для обработки элементов массива
        if (x[i] < 0) { // Если элемент отрицательный
            x[i] = x[i] / max; // Делим элемент на максимальный
            stats.sum += x[i]; // Суммируем все отрицательные элементы
        }
    }

    // Вывод количества отрицательных элементов
    printf("Количество отрицательных элементов: %d\n", stats.negative_count);
    return 0; // Возвращаем ноль, программа успешно завершена
}





#define B 3 // Количество строк в матрице
#define C 4 // Количество столбцов в матрице

int lr6(void) 
{
    int arr[B][C]; // Объявление исходного двумерного массива

    // Ввод элементов двумерного массива
    for (int i = 0; i < B; i++) 
    {
        for (int j = 0; j < C; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxsum = 0, minsum = __INT_MAX__; // Переменные для хранения максимальной и минимальной суммы
    int maxrow = 0, minrow = 0; // Переменные для хранения индексов строки с максимальной и минимальной суммой

    // Нахождение строки с максимальной и минимальной суммой элементов
    for (int i = 0; i < B; i++) 
    {
        int rowsum = 0; // Сумма элементов текущей строки
        for (int j = 0; j < C; j++) 
        {
            rowsum += arr[i][j]; // Суммирование элементов строки
        }

        if (rowsum > maxsum) // Если сумма текущей строки больше максимальной
        {
            maxsum = rowsum; // Обновление максимальной суммы
            maxrow = i; // Сохранение индекса строки с максимальной суммой
        }
        if (rowsum < minsum) // Если сумма текущей строки меньше минимальной
        {
            minsum = rowsum; // Обновление минимальной суммы
            minrow = i; // Сохранение индекса строки с минимальной суммой
        }
    }

    // Обмен строк, если индексы строк не совпадают
    if (maxrow != minrow) 
    {
        for (int j = 0; j < C; j++) // Перебор всех элементов строк
        {
            int temp = arr[maxrow][j];
            arr[maxrow][j] = arr[minrow][j];
            arr[minrow][j] = temp;
        }
    }

    // Вывод отсортированного массива
    printf("\n");
    for (int i = 0; i < B; i++) // Перебор всех строк
    {
        for (int j = 0; j < C; j++) // Перебор всех элементов строки
        {
            printf("%4d", arr[i][j]); // Вывод элемента с отступом
        }
        printf("\n"); // Переход на новую строку
    }

    return 0;
}


#define P 3
#define Y 4

int dz6(void) 
{
    int arr[P][Y];
    int i, j, k, temp;

    // Ввод элементов в массив
    for (i = 0; i < P; i++)
        for (j = 0; j < Y; j++)
            scanf("%d", &arr[i][j]);
    printf("\n");

    // Сортировка пузырьком столбцов массива по возрастанию
    for (j = 0; j < Y; j++) 
    {
        for (i = 0; i < P - 1; i++) 
        {
            for (k = 0; k < P - i - 1; k++) 
            {
                if (arr[k][j] > arr[k + 1][j]) 
                {
                    temp = arr[k][j];
                    arr[k][j] = arr[k + 1][j];
                    arr[k + 1][j] = temp;
                }
            }
        }
    }

    // Сортировка пузырьком строк массива по возрастанию
    for (i = 0; i < P; i++) 
    {
        for (j = 0; j < Y - 1; j++) 
        {
            for (k = 0; k < Y - j - 1; k++) 
            {
                if (arr[i][k] > arr[i][k + 1]) 
                {
                    temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }

    // Вывод отсортированного массива
    for (i = 0; i < P; i++) 
    {
        for (j = 0; j < Y; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int lr7(void) 

{
    long long int A;
    int pos = -1;

    scanf("%lld", &A);

    for (int i = sizeof(A)*8 - 1; i >= 0; i--) 
    {
        if (A & (1LL << i)) 
        {
            pos = i;
            break;
        }
    }

    if (pos != -1) 
    {
        printf("position %d\n", pos);
    } 
    else 
    {
        printf("NOOOOO\n");
    }

    return 0;
}