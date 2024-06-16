Входные настройки изменяются в файле input.json, расположенный в "KTMIAD1/files/".

Тесты, забитые в программу (этот же порядок используется для параметра num_test в input.json):
1) (x + y + z, x + 2y + z, x + y + 3z)
2) (x^2 + y^2 + z^2, x^2 + 2y^2 + z^2, x^2 + y^2 + 3z^2)
3) (x^3 + y^3 + z^3, x^3 + 2y^3 + z^3, x^3 + y^3 + 3z^3)
4) (x^4 + y^4 + z^4, x^4 + 2y^4 + z^4, x^4 + y^4 + 3z^4)
5) (sin(y + z), sin(x + z), sin(x + y))

Все тесты для отчёта выполнялись с mu и gamma равными 1.

Результаты расчётов записываются в файл Solution.txt, который так же расположен по пути "KTMIAD1/files/".

Параметры для области в input.json:
1) start - стартовые координаты по х, y, z
2) end - конечные координаты по x, y, z
3) n - числа разбиений по x, y, z
4) k - коэффициенты разрядки по x, y, z

Параметры для задачи в input.json:
1) mu - параметр mu для матрицы жесткости и правой части
2) gamma - параметр gamma для матрицы массы и правой части
3) num_test - номер теста

Для запуска программы необходимо запустить файл "KTMIAD1.exe", расположенный в папке "KTMIAD1/".




